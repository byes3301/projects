#pragma once
#include <Component/SimpleScene.h>
#include "LabCamera.h"
#include <ctime>

class Game : public SimpleScene
{
	public:
		Game();
		~Game();
		void createMeshes(void);
		
		typedef struct platform {
			int m[3][3];
			int set;
			float limit;
			float auxLimit;
			int y;
			float offset;
		}Platform;
		std::string getLetterToRender(char aux);
		void RenderText(char * aux, float x, float y, float dist, float scale);
		char * getNameMeshToRender(int nr);
		int get_size_nr(int nr);
		void renderScore(int nr);
		bool a = true;
		int abc = 0;
		int winner = 0;
		int selectLevel = -1;
		int selectLevel2 = -1;
		int selectLevel3 = -1;
		int endLevel = -1;
		int menuSelect = 0;
		int enter2 = 0;
		int enter3 = 0;
		float curentTile = 0;
		float pos_x;
		int idle = 1;

		int redLimit = 1;
		int greenLimit = 10;
		int blueLimit = 0;
		int yellowLimit = 2;
		int orangeLimit = 0;
		int invLimit = 3;

		int redPlat = 0;
		int greenPlat = 0;
		int yellowPlat = 0;
		int orangePlat = 0;
		int bluePlat = 0;

		float ab = 0;
		int pos_mat_x;
		int pos_mat_y;
		bool change = false;
		int ry = 0;
		void Init() override;
		void fixLimits();
		void fixLimits2(Platform * vecPlatfroms);
		int checkFall();
		int avvv;
		int getRandomPlatform();
		int setCurrentPlatform(int mat[3][3], int set);
		void createLevels();
		void setCurrentPlatform2(int mat[3][3], int set);
		int aux = 0;
		int jumpState = 0;
		float jumpTimer = 0;
		int jumpStart = 0;
		float jumpHeight;
		float jumpSpeed = 0.35;
		int descend = 0;
		int exitType = 0;
		int level = 0;
		Platform* createVector();
		int hasInvPlat();
		void placePlayer();
		void placePlayer2(Platform* vecPlatforms);
		int cameraState = 1;
		glm::vec3 cameraPos = glm::vec3(1, 3, 5.5f);
		glm::vec3 cameraPos2 = glm::vec3(1, 0.5, 3);
		float saveSpeed;
		void fixPlatforms(float speed);
		void fixPlatforms2(float speed, Platform * vecPlatforms);
		//float *curentPos;
		float materialShininess;
		float materialKs;
		float materialKd;
		int invincible = 0;
		float invTimer = 2.5;
		float jumpLimit = 2;
		float speedTimer = 0;
		int changeSpeed = 1;
		int z = 0;
		int isFalling = 0;
		glm::vec3 lightPosition;
		void renderPlatforms();
		void renderPlatforms2(Platform* vecPlatforms);
		void changePlatform();
		float plat_speed;
		float combustibil = 100;
		float plat_aux_speed;
		int no_platforms;
		int select = -1;
		int enter = 0;
		Platform *vecPlatforms;
	private:
		
		int *vecTypes;
		void fixVector();
		void fixVector2();
		void FrameStart() override;
		void Update(float deltaTimeSeconds) override;
		void playAgain();
		void playLevel1();
		void playLevel2();
		void playLevel3();
		
		void MainGame(float deltaTimeSeconds);
		void Level(float deltaTimeSeconds);
		void FrameEnd() override;
		float left_side, right_side, top_side, bot_side, aspect, znear, zfar;
		void RenderSphere(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix);
		void RenderSpecialMesh(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix,float ceva);
		void RenderColorMesh(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix, const glm::vec3 & color);
		void RenderFixedMesh(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix, const glm::vec3 & color);
		void DrawCoordinatSystem(const glm::mat4 & viewMatrix, const glm::mat4 & projectionMaxtix);
		glm::mat4 perspMat;
		float dist;
		float score = 0;
		int renderType = 0;
		int sleep = 0;
		int invPlats = 0;
		Platform *lvl1, *lvl2, *lvl3;
		float camera_x = 0;
		glm::vec3 sphereColor = glm::vec3(0.239f, 1, 0.73f);
		float camera_y = 0.5;
		int *v;
		int jmp = 0;
		bool typePersp;
		float fovCamera;
		void OnInputUpdate(float deltaTime, int mods) override;
		void OnKeyPress(int key, int mods) override;
		void OnKeyRelease(int key, int mods) override;
		void OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY) override;
		void OnMouseBtnPress(int mouseX, int mouseY, int button, int mods) override;
		void OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods) override;
		void OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY) override;
		void OnWindowResize(int width, int height) override;

	protected:
		GameCamera::Camera *camera;
		glm::mat4 projectionMatrix;
		bool renderCameraTarget;
};

