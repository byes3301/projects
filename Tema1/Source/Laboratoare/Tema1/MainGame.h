#pragma once

#include <Component/SimpleScene.h>
#include <string>
#include <Core/Engine.h>
#include "Transform2D.h"
#include <vector>
#include <iostream>
#include <Core/Engine.h>

class MainGame : public SimpleScene
{
	public:
		struct pairs {
			float x, y;
		};
		struct ViewportSpace
		{
			ViewportSpace() : x(0), y(0), width(1), height(1) {}
			ViewportSpace(int x, int y, int width, int height)
				: x(x), y(y), width(width), height(height) {}
			int x;
			int y;
			int width;
			int height;
		};

	public:
		MainGame();
		~MainGame();
		

		void Init() override;
		void createMeshes(void);
	private:
		void FrameStart() override;
		int countArrows();
		void Update(float deltaTimeSeconds) override;
		std::string getLetterToRender(char aux);
		void RenderText(char* aux, float x, float y, float dist, float scale);
		void spawnBalloonSet(int i);
		char* getNameMeshToRender(int nr);
		void FrameEnd() override;
		
		glm::mat3 moveArrowHead, moveArrowBase, moveArrow, moveBow, moveString, moveBallonG, moveBallonR, moveShuriken;
		glm::mat3 upT, downT, leftT, rightT;
		glm::mat3 balloonMat, tailMat;
		double angleShuriken;
		float speed_shuriken, zig_speed_shuriken;
		float pos_x_shuriken, pos_y_shuriken;
		float speed_x, speed_x_zig, speed_y_zig, pos_bow_x, pos_bow_y;
		float bow_speed, *arrow_speed;
		bool play_again, play_game, quit_game, idle, play_game_sel, quit_game_sel, game_over, play_again_sel;
		int *counter;
		int ok;
		int *posVec;
		int curentArrow;
		bool stringV;
		float abc;
		bool updatedMode;
		bool *spawnedBallon;
		int countingStars;
		bool isPressed, *isShot, *active_arrow, *aux_bool;
		int lives;
		Mesh *arrowHead_string, *arrowBody_string, *bow_string, *balloon_r_string, *balloon_y_string, *shuriken_string, *bow_arrow_string, *arrow_string;
		Shader *shader;
		float *aux_pos;
		float *balloon_y;
		float aux_speed;
		bool *printBallon;
		int *balloonType;
		float deltaTimeAux;
		float *arrow_custom_speed;
		struct pairs shuriken_xy;
		struct pairs *arrow_xy;
		int score;
		int ballonSet;
		float *offsetX, *offsetY;
		float *aux_y;
		float aux_x_bow, aux_y_bow;
		bool shuriken_render;
		void renderBow(float x, float y);
		struct pairs renderArrow(float x, float speed, float deltaTimeSeconds, int i);
		float spawnBalloonG(float speed, float x, float y, int id);
		float spawnBalloonB(float speed, float x, float y, int id);
		float destroyBalloonG(float speed, float x, float y, int id);
		float destroyBalloonB(float speed, float x, float y, int id);
		void renderBalloonG(float x, float y, float scale_x, float scale_y);
		void renderBalloonB(float x, float y, float scale_x, float scale_y);
		void renderScore(int nr);
		void hitBalloon(pairs arrow_xy, int i, float x, int j);
		int get_size_nr(int nr);
		//void renderShuriken(float x, float y, float speed_x, double angle);
		void renderShurikenZ(float x, float y, float speed_x, float speed_y, double angle);

		struct pairs Shuriken(float deltaTimeSeconds, int choice, float customSpeed, float pos_y_shur);

		void OnInputUpdate(float deltaTime, int mods) override;
		void OnKeyPress(int key, int mods) override;
		void OnKeyRelease(int key, int mods) override;
		void OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY) override;
		void OnMouseBtnPress(int mouseX, int mouseY, int button, int mods) override;
		void OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods) override;
		void OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY) override;
		void OnWindowResize(int width, int height) override;

		
	protected:
		glm::mat3 modelMatrix;
		float translateX, translateY;
		float scaleX, scaleY;
		float angularStep;
};
