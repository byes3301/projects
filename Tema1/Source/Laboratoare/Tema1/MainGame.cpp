#include "MainGame.h"

using namespace std;

MainGame::MainGame()
{
}
MainGame::~MainGame()
{
}

int t, k;
bool go_upx = true, go_downx = false;

void MainGame::createMeshes(void)
{
	// Declaratii Generale
	int i;
	glm::vec3 color = glm::vec3(1, 1, 1);
	glm::vec3 colorBalloonBase_Good = glm::vec3(1, 1, 0);
	glm::vec3 colorBalloonBase_Bad = glm::vec3(1, 0, 0);
	glm::vec3 colorBalloonTail = glm::vec3(1, 1, 1);
	glm::vec3 colorShuriken = glm::vec3(0, 1, 1);
	glm::vec3 colorShuriken_zig = glm::vec3(0, 0.5f, 1);
	glm::vec3 colorScore = glm::vec3(1, 1, 1);
	glm::vec3 powerG = glm::vec3(0, 1, 0);
	glm::vec3 powerY = glm::vec3(1, 1, 0);
	glm::vec3 powerR = glm::vec3(1, 0, 0);
	glm::vec3 heart_color = glm::vec3(1, 0, 0);
	glm::vec3 box_color = glm::vec3(1, 1, 1);
	glm::vec3 box_color2 = glm::vec3(0, 0, 0);
	Mesh* arrow = new Mesh("arrow");
	Mesh* arrowHead = new Mesh("arrowHead");
	Mesh* arrowBase = new Mesh("arrowBase");
	Mesh* bow = new Mesh("bow");
	Mesh* balloonBase = new Mesh("balloonBaseG");
	Mesh* balloonBase_bad = new Mesh("balloonBaseR");
	Mesh* balloonTail = new Mesh("balloonTail");
	Mesh* shuriken = new Mesh("shuriken");
	Mesh* shuriken_zig = new Mesh("shurikenZig");
	Mesh* string_d = new Mesh("string");
	Mesh* string_v = new Mesh("string_v");
	Mesh* arrowHeadEmpty = new Mesh("arrowHeadEmpty");
	Mesh* box_sel = new Mesh("box_sel");
	Mesh* unu = new Mesh("unu");
	vector<VertexFormat> v_unu;
	vector<unsigned short> i_unu;
	Mesh* doi = new Mesh("doi");
	vector<VertexFormat> v_doi;
	vector<unsigned short> i_doi;
	Mesh* trei = new Mesh("trei");
	vector<VertexFormat> v_trei;
	vector<unsigned short> i_trei;
	Mesh* patru = new Mesh("patru");
	vector<VertexFormat> v_patru;
	vector<unsigned short> i_patru;
	Mesh* cinci = new Mesh("cinci");
	vector<VertexFormat> v_cinci;
	vector<unsigned short> i_cinci;
	Mesh* sase = new Mesh("sase");
	vector<VertexFormat> v_sase;
	vector<unsigned short> i_sase;
	Mesh* sapte = new Mesh("sapte");
	vector<VertexFormat> v_sapte;
	vector<unsigned short> i_sapte;
	Mesh* opt = new Mesh("opt");
	vector<VertexFormat> v_opt;
	vector<unsigned short> i_opt;
	Mesh* noua = new Mesh("noua");
	vector<VertexFormat> v_noua;
	vector<unsigned short> i_noua;
	Mesh* zero = new Mesh("zero");
	vector<VertexFormat> v_zero;
	vector<unsigned short> i_zero;
	Mesh* minus = new Mesh("minus");
	vector<VertexFormat> v_minus;
	vector<unsigned short> i_minus;

	Mesh* powerBarG = new Mesh("powerG");
	vector<VertexFormat> v_powerBarG;
	vector<unsigned short> i_powerBarG;
	Mesh* powerBarY = new Mesh("powerY");
	vector<VertexFormat> v_powerBarY;
	vector<unsigned short> i_powerBarY;
	Mesh* powerBarR = new Mesh("powerR");
	vector<VertexFormat> v_powerBarR;
	vector<unsigned short> i_powerBarR;
	Mesh* hearts = new Mesh("hearts");
	vector<VertexFormat> v_hearts;
	vector<unsigned short> i_hearts;
	Mesh* box = new Mesh("box");
	vector<VertexFormat> v_box;
	vector<unsigned short> i_box;
	Mesh* box2 = new Mesh("box2");
	vector<VertexFormat> v_box2;
	vector<unsigned short> i_box2;


	vector<VertexFormat> v_arrow, v_arrowHead, v_arrowHeadEmpty, v_arrowBase, v_bow, v_string, v_string_v, v_box_sel, v_balloonBase, v_balloonBase_bad, v_balloonTail, v_shuriken, v_shuriken_zig;
	vector<unsigned short> i_arrow, i_arrowHead, i_arrowHeadEmpty, i_arrowBase, i_bow, i_string, i_string_v, i_box_sel, i_balloonBase, i_balloonBase_bad, i_balloonTail, i_shuriken, i_shuriken_zig;

	/* Sageata - arrow */

	{

		v_arrow = {
			VertexFormat(glm::vec3(0,0,0), color),
			VertexFormat(glm::vec3(0,0.025,0), color),
			VertexFormat(glm::vec3(1,0,0), color),
			VertexFormat(glm::vec3(1,0.025,0),color),
			VertexFormat(glm::vec3(1.25,0.0125,0),color),
			VertexFormat(glm::vec3(1.25,0,0),color),
			VertexFormat(glm::vec3(1.25,0.025,0),color),
			VertexFormat(glm::vec3(1.1,-0.125,0),color),
			VertexFormat(glm::vec3(1.5,0.0125,0),color),
			VertexFormat(glm::vec3(1.1,0.15,0),color),
		};

		i_arrow = {
			0, 1, 2,
			1, 2, 3,
			2, 4, 3,
			2, 5, 4,
			3, 4, 6,
			5, 7, 8,
			5, 8, 4,
			4, 8, 6,
			6, 8, 9
		};

		arrow->SetDrawMode(GL_TRIANGLES);
		arrow->InitFromData(v_arrow, i_arrow);
		AddMeshToList(arrow);

	}

	/* Cap de sageata - arrowHead */

	{

		v_arrowHead = {
			VertexFormat(glm::vec3(1.25,0,0),color),
			VertexFormat(glm::vec3(1.25,0.0125,0),color),
			VertexFormat(glm::vec3(1.5,0.0125,0),color),
			VertexFormat(glm::vec3(1.25,0.025,0),color),
			VertexFormat(glm::vec3(1.1,-0.125,0),color),
			VertexFormat(glm::vec3(1.1,0.15,0),color),
		};

		i_arrowHead = {
			0, 1, 2,
			1, 2, 3,
			0, 4, 2,
			3, 5, 2
		};

		arrowHead->SetDrawMode(GL_TRIANGLES);
		arrowHead->InitFromData(v_arrowHead, i_arrowHead);
		AddMeshToList(arrowHead);

	}

	/* Cap de sageata goala - arrowHeadEmpty */

	{

		v_arrowHeadEmpty = {
			VertexFormat(glm::vec3(1.25,0,0),color),
			VertexFormat(glm::vec3(1.25,0.0125,0),color),
			VertexFormat(glm::vec3(1.5,0.0125,0),color),
			VertexFormat(glm::vec3(1.25,0.025,0),color),
			VertexFormat(glm::vec3(1.1,-0.125,0),color),
			VertexFormat(glm::vec3(1.1,0.15,0),color),
		};

		i_arrowHeadEmpty = {
			0, 1,
			1, 3,
			3, 5,
			5, 2,
			2, 4,
			4, 0
		};

		arrowHeadEmpty->SetDrawMode(GL_LINES);
		arrowHeadEmpty->InitFromData(v_arrowHeadEmpty, i_arrowHeadEmpty);
		AddMeshToList(arrowHeadEmpty);

	}

	/* Baza de sageata - arrowBase */

	{

		v_arrowBase = {
			VertexFormat(glm::vec3(0,0,0), color),
			VertexFormat(glm::vec3(0,0.025,0), color),
			VertexFormat(glm::vec3(1.5,0,0), color),
			VertexFormat(glm::vec3(1.5,0.025,0),color),
		};

		i_arrowBase = {
			0, 1, 2,
			1, 2, 3,
		};

		arrowBase->SetDrawMode(GL_TRIANGLES);
		arrowBase->InitFromData(v_arrowBase, i_arrowBase);
		AddMeshToList(arrowBase);

	}

	/* Arc - bow */

	{

		for (i = 0; i <= 180; i++) {
			v_bow.push_back(VertexFormat(glm::vec3(cos(i * M_PI / 180), 0.5 * sin(i * M_PI / 180), 0), color));
		}

		for (i = 0; i < 181; i++) {
			i_bow.push_back(i);
		}

		//i_bow.push_back(0);

		bow->SetDrawMode(GL_LINE_STRIP);
		bow->InitFromData(v_bow, i_bow);
		AddMeshToList(bow);

	}

	/* Ata arc dreapta - string */

	{

		v_string = {
			VertexFormat(glm::vec3(0,-1,0), color),
			VertexFormat(glm::vec3(0,1,0), color)
		};

		i_string = {
			0, 1
		};

		string_d->SetDrawMode(GL_LINES);
		string_d->InitFromData(v_string, i_string);
		AddMeshToList(string_d);

	}

	/* Ata arc trasa - string_v */

	{

		v_string_v = {
			VertexFormat(glm::vec3(0,-1,0), color),
			VertexFormat(glm::vec3(-0.5,0,0), color),
			VertexFormat(glm::vec3(0,1,0), color),
		};

		i_string_v = {
			0, 1, 2
		};

		string_v->SetDrawMode(GL_LINE_STRIP);
		string_v->InitFromData(v_string_v, i_string_v);
		AddMeshToList(string_v);

	}


	/* Baza Balon Galben - balloonBase */

	{

		for (i = 0; i <= 359; i++) {
			v_balloonBase.push_back(VertexFormat(glm::vec3(0.65f * cos(i * M_PI / 180), 0.5f * sin(i * M_PI / 180), 0), colorBalloonBase_Good));
		}

		for (i = 1; i < 359; i++) {
			i_balloonBase.push_back(0);
			i_balloonBase.push_back(i);
			i_balloonBase.push_back(i + 1);
		}

		v_balloonBase.push_back(VertexFormat(glm::vec3(0.75, -0.125, 0), colorBalloonBase_Good));
		v_balloonBase.push_back(VertexFormat(glm::vec3(0.75, 0.125, 0), colorBalloonBase_Good));

		i_balloonBase.push_back(359);
		i_balloonBase.push_back(360);
		i_balloonBase.push_back(361);

		balloonBase->SetDrawMode(GL_TRIANGLES);
		balloonBase->InitFromData(v_balloonBase, i_balloonBase);
		AddMeshToList(balloonBase);

	}

	/* Baza Balon Rosu - balloonBase_bad */

	{

		for (i = 0; i <= 359; i++) {
			v_balloonBase_bad.push_back(VertexFormat(glm::vec3(0.65f * cos(i * M_PI / 180), 0.5f * sin(i * M_PI / 180), 0), colorBalloonBase_Bad));
		}

		for (i = 1; i < 359; i++) {
			i_balloonBase_bad.push_back(0);
			i_balloonBase_bad.push_back(i);
			i_balloonBase_bad.push_back(i + 1);
		}

		v_balloonBase_bad.push_back(VertexFormat(glm::vec3(0.75, -0.125, 0), colorBalloonBase_Bad));
		v_balloonBase_bad.push_back(VertexFormat(glm::vec3(0.75, 0.125, 0), colorBalloonBase_Bad));

		i_balloonBase_bad.push_back(359);
		i_balloonBase_bad.push_back(360);
		i_balloonBase_bad.push_back(361);

		balloonBase_bad->SetDrawMode(GL_TRIANGLES);
		balloonBase_bad->InitFromData(v_balloonBase_bad, i_balloonBase_bad);
		AddMeshToList(balloonBase_bad);

	}

	/* Coada Balon - balloonTail */

	{

		vector<VertexFormat> v_balloonTail =
		{
			VertexFormat(glm::vec3(-0.25,0,0), colorBalloonTail),
			VertexFormat(glm::vec3(0.25,0,0), colorBalloonTail),
			VertexFormat(glm::vec3(0.75,2.25,0), colorBalloonTail),
			VertexFormat(glm::vec3(1.25,2.25,0), colorBalloonTail),
			VertexFormat(glm::vec3(0.75,4.25,0), colorBalloonTail),
			VertexFormat(glm::vec3(0.25,4.25,0), colorBalloonTail),
			VertexFormat(glm::vec3(0.75, 6.25,0), colorBalloonTail),
			VertexFormat(glm::vec3(1.25,6.25,0), colorBalloonTail),
			VertexFormat(glm::vec3(0.75,8.25,0), colorBalloonTail),
			VertexFormat(glm::vec3(0.25,8.25,0), colorBalloonTail),
		};

		vector<unsigned short> i_balloonTail = {
			0, 1, 2,
			1, 2, 3,
			2, 3, 5,
			3, 4, 5,
			4, 5, 7,
			5, 6, 7,
			6, 7, 9,
			7, 8, 9
		};

		balloonTail->SetDrawMode(GL_TRIANGLES);
		balloonTail->InitFromData(v_balloonTail, i_balloonTail);
		AddMeshToList(balloonTail);

	}

	/* Shuriken - shuriken */

	{

		v_shuriken = {
			VertexFormat(glm::vec3(0,0,0), colorShuriken),
			VertexFormat(glm::vec3(1,0,0), colorShuriken),
			VertexFormat(glm::vec3(1,1,0), colorShuriken),
		};

		i_shuriken = {
			0, 1, 2
		};

		shuriken->SetDrawMode(GL_TRIANGLES);
		shuriken->InitFromData(v_shuriken, i_shuriken);
		AddMeshToList(shuriken);

	}

	/* Shuriken - shuriken2 */

	{

		v_shuriken_zig = {
			VertexFormat(glm::vec3(0,0,0), colorShuriken_zig),
			VertexFormat(glm::vec3(1,0,0), colorShuriken_zig),
			VertexFormat(glm::vec3(1,1,0), colorShuriken_zig),
		};

		i_shuriken_zig = {
			0, 1, 2
		};

		shuriken_zig->SetDrawMode(GL_TRIANGLES);
		shuriken_zig->InitFromData(v_shuriken_zig, i_shuriken_zig);
		AddMeshToList(shuriken_zig);

	}

	/* Zero */

	{

		v_zero = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,0.25,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.75,0), colorScore)
		};

		i_zero = {
			0, 1, 2,
			2, 3, 0,
			0, 4, 3,
			3, 4, 5,
			4, 6, 7,
			4, 5, 7,
			6, 7, 1,
			1, 2, 7
		};

		zero->SetDrawMode(GL_TRIANGLES);
		zero->InitFromData(v_zero, i_zero);
		AddMeshToList(zero);

	}

	/* Unu */

	{

		v_unu = {
			VertexFormat(glm::vec3(0.75,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,2,0), colorScore),
			VertexFormat(glm::vec3(1,2,0), colorScore)
		};

		i_unu = {
			0, 1, 2,
			2, 3, 1
		};

		unu->SetDrawMode(GL_TRIANGLES);
		unu->InitFromData(v_unu, i_unu);
		AddMeshToList(unu);

	}

	/* Doi */

	{

		v_doi = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(1,0.25,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.825,0), colorScore),

			VertexFormat(glm::vec3(0,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.125,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.125,0), colorScore),

			VertexFormat(glm::vec3(1,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.75,0.825,0), colorScore),
		};

		i_doi = {
			0, 1, 2,
			2, 3, 0,
			3, 0, 5,
			5, 0, 4,
			4, 6, 7,
			7, 5, 4,
			8, 9, 10,
			10, 9, 11,
			11, 13, 12,
			12, 10, 11,
			13, 12, 15,
			15, 12, 14,
			7, 5, 13,
			13, 5, 15
		};

		doi->SetDrawMode(GL_TRIANGLES);
		doi->InitFromData(v_doi, i_doi);
		AddMeshToList(doi);

	}

	/* Trei */

	{

		v_trei = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,0.25,0), colorScore),
			VertexFormat(glm::vec3(0,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.825,0), colorScore),

			VertexFormat(glm::vec3(0,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.125,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.125,0), colorScore),

			VertexFormat(glm::vec3(1,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.75,0.825,0), colorScore),
		};

		i_trei = {
			0, 1, 2,
			2, 3, 0,
			4, 6, 7,
			7, 5, 4,
			8, 9, 10,
			10, 9, 11,
			11, 13, 12,
			12, 10, 11,
			13, 12, 15,
			15, 12, 14,
			15, 2, 1,
			15, 1, 14,
			7, 5, 13,
			13, 5, 15
		};

		trei->SetDrawMode(GL_TRIANGLES);
		trei->InitFromData(v_trei, i_trei);
		AddMeshToList(trei);

	}

	/* Patru */

	{

		v_patru = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,0,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.825,0), colorScore),

			VertexFormat(glm::vec3(0,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.125,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0.25,2,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(0.75,2,0), colorScore),

			VertexFormat(glm::vec3(1,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.125,0), colorScore),

			VertexFormat(glm::vec3(1,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.75,0.825,0), colorScore),
		};

		i_patru = {
			4, 6, 7,
			7, 5, 4,
			6, 8, 7,
			7, 8, 9,
			11, 13, 12,
			12, 10, 11,
			13, 12, 15,
			15, 12, 14,
			15, 2, 1,
			15, 1, 14,
			7, 5, 13,
			13, 5, 15
		};

		patru->SetDrawMode(GL_TRIANGLES);
		patru->InitFromData(v_patru, i_patru);
		AddMeshToList(patru);

	}

	/* Cinci */

	{

		v_cinci = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,0.25,0), colorScore),
			VertexFormat(glm::vec3(0,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.825,0), colorScore),

			VertexFormat(glm::vec3(0,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.125,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(1,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.125,0), colorScore),

			VertexFormat(glm::vec3(1,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.75,0.825,0), colorScore),
		};

		i_cinci = {
			0, 1, 2,
			2, 3, 0,
			4, 6, 7,
			7, 5, 4,
			6, 8, 7,
			7, 8, 9,
			8, 9, 10,
			10, 9, 11,
			13, 12, 15,
			15, 12, 14,
			15, 2, 1,
			15, 1, 14,
			7, 5, 13,
			13, 5, 15
		};

		cinci->SetDrawMode(GL_TRIANGLES);
		cinci->InitFromData(v_cinci, i_cinci);
		AddMeshToList(cinci);

	}

	/* Sase */

	{

		v_sase = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,0.25,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.825,0), colorScore),

			VertexFormat(glm::vec3(0,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.125,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(1,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.125,0), colorScore),

			VertexFormat(glm::vec3(1,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.75,0.825,0), colorScore),
		};

		i_sase = {
			0, 1, 2,
			2, 3, 0,
			3, 0, 5,
			5, 0, 4,
			4, 6, 7,
			7, 5, 4,
			6, 8, 7,
			7, 8, 9,
			8, 9, 10,
			10, 9, 11,
			13, 12, 15,
			15, 12, 14,
			15, 2, 1,
			15, 1, 14,
			7, 5, 13,
			13, 5, 15
		};

		sase->SetDrawMode(GL_TRIANGLES);
		sase->InitFromData(v_sase, i_sase);
		AddMeshToList(sase);

	}


	/* Sapte */

	{

		v_sapte = {
			VertexFormat(glm::vec3(0.75,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,1.75,0), colorScore),
			VertexFormat(glm::vec3(1,2,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0,1.75,0), colorScore)
		};

		i_sapte = {
			0, 1, 2,
			2, 3, 1,
			2, 3, 4,
			4, 5, 2
		};

		sapte->SetDrawMode(GL_TRIANGLES);
		sapte->InitFromData(v_sapte, i_sapte);
		AddMeshToList(sapte);

	}


	/* Opt */

	{

		v_opt = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,0.25,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.825,0), colorScore),

			VertexFormat(glm::vec3(0,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.125,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.125,0), colorScore),

			VertexFormat(glm::vec3(1,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.75,0.825,0), colorScore),
		};

		i_opt = {
			0, 1, 2,
			2, 3, 0,
			3, 0, 5,
			5, 0, 4,
			4, 6, 7,
			7, 5, 4,
			6, 8, 7,
			7, 8, 9,
			8, 9, 10,
			10, 9, 11,
			11, 13, 12,
			12, 10, 11,
			13, 12, 15,
			15, 12, 14,
			15, 2, 1,
			15, 1, 14,
			7, 5, 13,
			13, 5, 15
		};

		opt->SetDrawMode(GL_TRIANGLES);
		opt->InitFromData(v_opt, i_opt);
		AddMeshToList(opt);

	}

	/* Noua */

	{

		v_noua = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,0.25,0), colorScore),
			VertexFormat(glm::vec3(0,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.825,0), colorScore),

			VertexFormat(glm::vec3(0,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.125,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.125,0), colorScore),

			VertexFormat(glm::vec3(1,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.75,0.825,0), colorScore),
		};

		i_noua = {
			0, 1, 2,
			2, 3, 0,
			4, 6, 7,
			7, 5, 4,
			6, 8, 7,
			7, 8, 9,
			8, 9, 10,
			10, 9, 11,
			11, 13, 12,
			12, 10, 11,
			13, 12, 15,
			15, 12, 14,
			15, 2, 1,
			15, 1, 14,
			7, 5, 13,
			13, 5, 15
		};

		noua->SetDrawMode(GL_TRIANGLES);
		noua->InitFromData(v_noua, i_noua);
		AddMeshToList(noua);

	}

	/* Minus */

	{

		v_minus = {
			VertexFormat(glm::vec3(0,0,0), colorScore),
			VertexFormat(glm::vec3(1,0,0), colorScore),

			VertexFormat(glm::vec3(0.75,0.25,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.25,0), colorScore),

			VertexFormat(glm::vec3(0,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.25,0.825,0), colorScore),

			VertexFormat(glm::vec3(0,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.125,0), colorScore),

			VertexFormat(glm::vec3(0,2,0), colorScore),
			VertexFormat(glm::vec3(0.25,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,2,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.75,0), colorScore),

			VertexFormat(glm::vec3(1,1.125,0), colorScore),
			VertexFormat(glm::vec3(0.75,1.125,0), colorScore),

			VertexFormat(glm::vec3(1,0.825,0), colorScore),
			VertexFormat(glm::vec3(0.75,0.825,0), colorScore),
		};

		i_minus = {
			7, 5, 13,
			13, 5, 15
		};

		minus->SetDrawMode(GL_TRIANGLES);
		minus->InitFromData(v_minus, i_minus);
		AddMeshToList(minus);

	}

	/* Power Bar - Green */

	{

		v_powerBarG = {
			VertexFormat(glm::vec3(0,0,0), powerG),
			VertexFormat(glm::vec3(0.25,0,0), powerG),

			VertexFormat(glm::vec3(0,1,0), powerG),
			VertexFormat(glm::vec3(0.25,1,0), powerG),
		};

		i_powerBarG = {
			0, 1, 2,
			2, 3, 1
		};

		powerBarG->SetDrawMode(GL_TRIANGLES);
		powerBarG->InitFromData(v_powerBarG, i_powerBarG);
		AddMeshToList(powerBarG);

	}

	/* Power Bar - Yellow */

	{

		v_powerBarY = {
			VertexFormat(glm::vec3(0,0,0), powerY),
			VertexFormat(glm::vec3(0.25,0,0), powerY),

			VertexFormat(glm::vec3(0,1,0), powerY),
			VertexFormat(glm::vec3(0.25,1,0), powerY),
		};

		i_powerBarY = {
			0, 1, 2,
			2, 3, 1
		};

		powerBarY->SetDrawMode(GL_TRIANGLES);
		powerBarY->InitFromData(v_powerBarY, i_powerBarY);
		AddMeshToList(powerBarY);

	}

	/* Power Bar - Red */

	{

		v_powerBarR = {
			VertexFormat(glm::vec3(0,0,0), powerR),
			VertexFormat(glm::vec3(0.25,0,0), powerR),

			VertexFormat(glm::vec3(0,1,0), powerR),
			VertexFormat(glm::vec3(0.25,1,0), powerR),
		};

		i_powerBarR = {
			0, 1, 2,
			2, 3, 1
		};

		powerBarR->SetDrawMode(GL_TRIANGLES);
		powerBarR->InitFromData(v_powerBarR, i_powerBarR);
		AddMeshToList(powerBarR);

	}

	/* Hearts */

	{

		v_hearts = {
			VertexFormat(glm::vec3(0,0,0), heart_color),
			VertexFormat(glm::vec3(0.5,0.5,0), heart_color),

			VertexFormat(glm::vec3(1,0,0), heart_color),
			VertexFormat(glm::vec3(0,-1.25,0), heart_color),

			VertexFormat(glm::vec3(-1,0,0), heart_color),
			VertexFormat(glm::vec3(-0.5,0.5,0), heart_color),
		};

		i_hearts = {
			0, 1, 2,
			2, 3, 0,
			4, 0, 3,
			4, 5, 0
		};

		hearts->SetDrawMode(GL_TRIANGLES);
		hearts->InitFromData(v_hearts, i_hearts);
		AddMeshToList(hearts);

	}

	/* Box */

	{
		v_box = {
			VertexFormat(glm::vec3(-21,-9.5,0), box_color),
			VertexFormat(glm::vec3(-21,9.5,0), box_color),
			VertexFormat(glm::vec3(21,9.5,0), box_color),
			VertexFormat(glm::vec3(21,-9.5,0), box_color),
		};

		i_box = {
			0, 1, 2, 3
		};

		box->SetDrawMode(GL_LINE_LOOP);
		box->InitFromData(v_box, i_box);
		AddMeshToList(box);
	}

	/* Box2 */

	{
		v_box2 = {
			VertexFormat(glm::vec3(-21,-12,0), box_color2),
			VertexFormat(glm::vec3(-21,-9.5,0), box_color2),
			VertexFormat(glm::vec3(21,-9.5,0), box_color2),
			VertexFormat(glm::vec3(21,-12,0), box_color2),

			VertexFormat(glm::vec3(-21,12,0), box_color2),
			VertexFormat(glm::vec3(-21,9.5,0), box_color2),
			VertexFormat(glm::vec3(21,9.5,0), box_color2),
			VertexFormat(glm::vec3(21,12,0), box_color2)
		};

		i_box2 = {
			0, 1, 2,
			2, 3, 0,
			4, 5, 6,
			6, 7, 4
		};

		box2->SetDrawMode(GL_TRIANGLES);
		box2->InitFromData(v_box2, i_box2);
		AddMeshToList(box2);
	}

	/* AUX Objects */

	{
		// Shuriken //

		Mesh* mesh_shuriken = new Mesh("shuriken_aux");
		mesh_shuriken->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "shuriken.obj");
		meshes[mesh_shuriken->GetMeshID()] = mesh_shuriken;

		// Arrow //
		Mesh* mesh_arrow = new Mesh("arrow_aux");
		mesh_arrow->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "arrow.obj");
		meshes[mesh_arrow->GetMeshID()] = mesh_arrow;

		// Bow //
		Mesh* mesh_bow = new Mesh("bow_aux");
		mesh_bow->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "bow.obj");
		meshes[mesh_bow->GetMeshID()] = mesh_bow;

		// Bow + Arrow //
		Mesh* mesh_bow_arrow = new Mesh("bow+arrow");
		mesh_bow_arrow->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "bow+arrow.obj");
		meshes[mesh_bow_arrow->GetMeshID()] = mesh_bow_arrow;

		// Yellow Balloon //
		Mesh* mesh_y_balloon = new Mesh("y_balloon_aux");
		mesh_y_balloon->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "yellow_balloon.obj");
		meshes[mesh_y_balloon->GetMeshID()] = mesh_y_balloon;

		// Red Balloon //
		Mesh* mesh_r_balloon = new Mesh("r_balloon_aux");
		mesh_r_balloon->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "red_balloon.obj");
		meshes[mesh_r_balloon->GetMeshID()] = mesh_r_balloon;

		// Arrow Head //
		Mesh* mesh_arrow_head = new Mesh("arrow_head_aux");
		mesh_arrow_head->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "arrow_head.obj");
		meshes[mesh_arrow_head->GetMeshID()] = mesh_arrow_head;

		// Arrow Body //
		Mesh* mesh_arrow_body = new Mesh("arrow_body_aux");
		mesh_arrow_body->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "arrow_body.obj");
		meshes[mesh_arrow_body->GetMeshID()] = mesh_arrow_body;

		// Wall //
		Mesh* mesh_wall = new Mesh("wall_aux");
		mesh_wall->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "wall.obj");
		meshes[mesh_wall->GetMeshID()] = mesh_wall;

		{
			// A //
			Mesh* mesh_a = new Mesh("A");
			mesh_a->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "A.obj");
			meshes[mesh_a->GetMeshID()] = mesh_a;
			// B //
			Mesh* mesh_b = new Mesh("B");
			mesh_b->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "B.obj");
			meshes[mesh_b->GetMeshID()] = mesh_b;
			// C //
			Mesh* mesh_c = new Mesh("C");
			mesh_c->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "C.obj");
			meshes[mesh_c->GetMeshID()] = mesh_c;
			// D //
			Mesh* mesh_d = new Mesh("D");
			mesh_d->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "D.obj");
			meshes[mesh_d->GetMeshID()] = mesh_d;
			// E //
			Mesh* mesh_e = new Mesh("E");
			mesh_e->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "E.obj");
			meshes[mesh_e->GetMeshID()] = mesh_e;
			// F //
			Mesh* mesh_f = new Mesh("F");
			mesh_f->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "F.obj");
			meshes[mesh_f->GetMeshID()] = mesh_f;
			// G //
			Mesh* mesh_g = new Mesh("G");
			mesh_g->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "G.obj");
			meshes[mesh_g->GetMeshID()] = mesh_g;
			// H //
			Mesh* mesh_h = new Mesh("H");
			mesh_h->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "H.obj");
			meshes[mesh_h->GetMeshID()] = mesh_h;
			// I //
			Mesh* mesh_i = new Mesh("I");
			mesh_i->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "I.obj");
			meshes[mesh_i->GetMeshID()] = mesh_i;
			// J //
			Mesh* mesh_j = new Mesh("J");
			mesh_j->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "J.obj");
			meshes[mesh_j->GetMeshID()] = mesh_j;
			// K //
			Mesh* mesh_k = new Mesh("K");
			mesh_k->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "K.obj");
			meshes[mesh_k->GetMeshID()] = mesh_k;
			// L //
			Mesh* mesh_l = new Mesh("L");
			mesh_l->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "L.obj");
			meshes[mesh_l->GetMeshID()] = mesh_l;
			// M //
			Mesh* mesh_m = new Mesh("M");
			mesh_m->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "M.obj");
			meshes[mesh_m->GetMeshID()] = mesh_m;
			// N //
			Mesh* mesh_n = new Mesh("N");
			mesh_n->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "N.obj");
			meshes[mesh_n->GetMeshID()] = mesh_n;
			// O //
			Mesh* mesh_o = new Mesh("O");
			mesh_o->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "O.obj");
			meshes[mesh_o->GetMeshID()] = mesh_o;
			// P //
			Mesh* mesh_p = new Mesh("P");
			mesh_p->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "P.obj");
			meshes[mesh_p->GetMeshID()] = mesh_p;
			// Q //
			Mesh* mesh_q = new Mesh("Q");
			mesh_q->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "Q.obj");
			meshes[mesh_q->GetMeshID()] = mesh_q;
			// R //
			Mesh* mesh_r = new Mesh("R");
			mesh_r->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "R.obj");
			meshes[mesh_r->GetMeshID()] = mesh_r;
			// S //
			Mesh* mesh_s = new Mesh("S");
			mesh_s->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "S.obj");
			meshes[mesh_s->GetMeshID()] = mesh_s;
			// T //
			Mesh* mesh_t = new Mesh("T");
			mesh_t->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "T.obj");
			meshes[mesh_t->GetMeshID()] = mesh_t;
			// U //
			Mesh* mesh_u = new Mesh("U");
			mesh_u->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "U.obj");
			meshes[mesh_u->GetMeshID()] = mesh_u;
			// V //
			Mesh* mesh_v = new Mesh("V");
			mesh_v->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "V.obj");
			meshes[mesh_v->GetMeshID()] = mesh_v;
			// W //
			Mesh* mesh_w = new Mesh("W");
			mesh_w->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "W.obj");
			meshes[mesh_w->GetMeshID()] = mesh_w;
			// X //
			Mesh* mesh_x = new Mesh("X");
			mesh_x->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "X.obj");
			meshes[mesh_x->GetMeshID()] = mesh_x;
			// Y //
			Mesh* mesh_y = new Mesh("Y");
			mesh_y->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "Y.obj");
			meshes[mesh_y->GetMeshID()] = mesh_y;
			// Z //
			Mesh* mesh_z = new Mesh("Z");
			mesh_z->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "Z.obj");
			meshes[mesh_z->GetMeshID()] = mesh_z;
		}
	}

	/* Selection Box */

	{
	v_box_sel = {
		VertexFormat(glm::vec3(-5,-1.2,0), glm::vec3(1,1,1)),
		VertexFormat(glm::vec3(5,-1.2,0), glm::vec3(1,1,1)),
		VertexFormat(glm::vec3(5,1.2,0), glm::vec3(1,1,1)),
		VertexFormat(glm::vec3(-5,1.2,0), glm::vec3(1,1,1))
	};

	i_box_sel = {
		0, 1, 2, 3
	};

	box_sel->SetDrawMode(GL_LINE_LOOP);
	box_sel->InitFromData(v_box_sel, i_box_sel);
	AddMeshToList(box_sel);
	}

}

void MainGame::Init()
{

	auto camera = GetSceneCamera();
	camera->SetPosition(glm::vec3(0, 0, 20));
	camera->SetRotation(glm::vec3(0, 0, 0));
	camera->Update();
	GetCameraInput()->SetActive(false);
	createMeshes();

	posVec = (int*)malloc(17 * sizeof(int));
	for (int i = -8; i <= 8; i++) {
		posVec[i + 8] = i;
	}
	t = 0;
	k = 0;
	speed_shuriken = 5;
	bow_speed = 5;
	zig_speed_shuriken = 5;
	pos_x_shuriken = 20;
	pos_y_shuriken = 0;
	speed_x = 0;
	speed_x_zig = 0;
	speed_y_zig = 0;
	angleShuriken = 0;
	counter = (int*)malloc(5 * sizeof(int));
	ok = 1;
	pos_bow_x = -19.3f;
	pos_bow_y = 0;
	shuriken_xy.x = 0;
	shuriken_xy.y = 0;
	lives = 0;
	aux_pos = (float*)malloc(5 * sizeof(float));
	arrow_speed = (float*)malloc(5 * sizeof(float));
	aux_bool = (bool*)malloc(5 * sizeof(bool));
	active_arrow = (bool*)malloc(5 * sizeof(bool));
	arrow_custom_speed = (float*)malloc(5 * sizeof(float));
	offsetX = (float*)malloc(5 * sizeof(float));
	aux_y = (float*)malloc(5 * sizeof(float));
	offsetY = (float*)malloc(5 * sizeof(float));
	arrow_xy = (pairs*)malloc(5 * sizeof(pairs));
	curentArrow = 0;
	isPressed = false;
	for (int i = 0; i < 5; i++) {
		aux_pos[i] = 0;
		arrow_speed[i] = 0;
		aux_bool[i] = false;
		active_arrow[i] = false;
		arrow_custom_speed[i] = 0;
		counter[i] = 0;
		arrow_xy[i].x = 0;
		arrow_xy[i].y = 0;
		offsetX[i] = 0;
		offsetY[i] = 0;
		aux_y[i] = 0;
	}
	deltaTimeAux = 0;

	score = 0;
	printBallon = (bool*)malloc(15 * sizeof(bool));
	balloon_y = (float*)malloc(15 * sizeof(float));
	balloonType = (int*)malloc(15 * sizeof(int));
	spawnedBallon = (bool*)malloc(15 * sizeof(bool));
	for (int i = 0; i < 15; i++) {
		printBallon[i] = true;
		balloon_y[i] = -15;
		spawnedBallon[i] = false;
		if (i % 3 == 0) {
			balloonType[i] = 1;
		}
		else {
			balloonType[i] = 0;
		}

	}
	aux_x_bow = 0;
	aux_y_bow = 0;
	countingStars = 0;
	ballonSet = 0;

	idle = true;
	play_game_sel = true;
	play_game = false;
	quit_game_sel = false;
	quit_game = false;
	play_again_sel = true;
	play_again = false;
	game_over = false;

	updatedMode = false;
}

void MainGame::FrameStart()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}

void MainGame::Update(float deltaTimeSeconds)
{
	if (idle == true)
	{
		if (game_over == false) {
			RenderText("Tasta G schimba interfata", 12, -10, 1, 0.15);
			if (play_game_sel == true && quit_game_sel == false) {
				RenderMesh2D(meshes["box_sel"], shaders["VertexColor"], Transform2D::Translate(0, 2) * Transform2D::Scale(1.4, 1));
			}
			else if (play_game_sel == false && quit_game_sel == true) {
				RenderMesh2D(meshes["box_sel"], shaders["VertexColor"], Transform2D::Translate(-0.75, -2) * Transform2D::Scale(0.65, 1));
			}
			RenderText("Play game", 6, 2, 1.5, 0.5);
			RenderText("Quit", 3, -2, 1.5, 0.5);
		}
		else {
			RenderText("game over", 12, 2, 3, 1);
			if (play_again_sel == true && quit_game_sel == false) {
				RenderMesh2D(meshes["box_sel"], shaders["VertexColor"], Transform2D::Translate(-8.25, -4) * Transform2D::Scale(1.55, 1));
			}
			else if (play_again_sel == false && quit_game_sel == true) {
				RenderMesh2D(meshes["box_sel"], shaders["VertexColor"], Transform2D::Translate(7.25, -4) * Transform2D::Scale(0.65, 1));
			}
			RenderText("Play again", 15, -4, 1.5, 0.5);
			RenderText("Quit", -5, -4, 1.5, 0.5);
		}
		
	}
	else if(idle == false && play_game == true)
	{
		countingStars++;
		if (updatedMode == false) {
			arrowHead_string = meshes["arrowHead"];
			arrowBody_string = meshes["arrowBase"];
			bow_string = meshes["bow"];
			balloon_r_string = meshes["balloonBaseR"];
			balloon_y_string = meshes["balloonBaseG"];
			shader = shaders["VertexColor"];
		}
		else {
			arrowHead_string = meshes["arrow_head_aux"];
			arrowBody_string = meshes["arrow_body_aux"];
			bow_string = meshes["bow_aux"];
			balloon_r_string = meshes["r_balloon_aux"];
			balloon_y_string = meshes["y_balloon_aux"];
			shader = shaders["Simple"];
			shuriken_string = meshes["shuriken_aux"];
			bow_arrow_string = meshes["bow+arrow"];
			arrow_string = meshes["arrow_aux"];
		}
		if (lives <= 0 && game_over == false) {
			game_over = true;
			idle = true;
		}
		if (game_over == false)
		{
			for (int i = 0; i < 5; i++)
			{
				if (updatedMode == false) {
					if (active_arrow[i] == false) {
						RenderMesh2D(meshes["arrowHead"], shaders["VertexColor"], Transform2D::Translate(0, 0) * Transform2D::Translate(20 - i, -13) * Transform2D::Rotate(90) * Transform2D::Scale(2, 2));
					}
					else {
						RenderMesh2D(meshes["arrowHeadEmpty"], shaders["VertexColor"], Transform2D::Translate(0, 0) * Transform2D::Translate(20 - i, -13) * Transform2D::Rotate(90) * Transform2D::Scale(2, 2));
					}
				}
				else {
					if (active_arrow[i] == false) {
						RenderMesh2D(arrowHead_string, shaders["Simple"], Transform2D::Translate(0, 0) * Transform2D::Translate(19 - i, 10) * Transform2D::Rotate(90) * Transform2D::Scale(2, 2));
					}
				}

			}

			for (int i = 0; i < lives; i++)
			{
				RenderMesh2D(meshes["hearts"], shaders["VertexColor"], Transform2D::Translate(-19.5, 0) * Transform2D::Translate(1.1* i, 10.75) * Transform2D::Scale(0.5, 0.5));
			}
			deltaTimeAux = deltaTimeSeconds;

			for (int i = 0; i <= counter[curentArrow]; i += 5) {
				if (i < 20) {
					RenderMesh2D(meshes["powerG"], shaders["VertexColor"], Transform2D::Translate(-19, 0) * Transform2D::Translate(0.1 * i, -11));
				}
				else if (i >= 20 && i < 40) {
					RenderMesh2D(meshes["powerY"], shaders["VertexColor"], Transform2D::Translate(-19, 0) * Transform2D::Translate(0.1 * i, -11));
				}
				else {
					RenderMesh2D(meshes["powerR"], shaders["VertexColor"], Transform2D::Translate(-19, 0) * Transform2D::Translate(0.1 * i, -11));
				}
			}
			renderScore(score);
			if (updatedMode == true) {

				RenderMesh2D(meshes["wall_aux"], shaders["Simple"], Transform2D::Translate(-7.5, -10) * Transform2D::Scale(2, 2));
				RenderMesh2D(meshes["wall_aux"], shaders["Simple"], Transform2D::Translate(10.4, -10) * Transform2D::Scale(2, 2));
			}
			else {
				RenderMesh2D(meshes["box"], shaders["VertexColor"], glm::mat3(1));
				RenderMesh2D(meshes["box2"], shaders["VertexColor"], glm::mat3(1));
			}


			if (ok != 0) {
				k = rand() % 16;
				t = rand() % 2;
				ok = 0;
			}
			shuriken_xy = Shuriken(deltaTimeSeconds * 0.75, t, 4, posVec[k]);
			for (int i = 0; i < 5; i++) {
				arrow_xy[i] = renderArrow(pos_bow_x, arrow_custom_speed[i], deltaTimeSeconds, i);

			}
			renderBow(pos_bow_x, pos_bow_y);

			for (int i = 0; i < 5; i++) {

				if (arrow_xy[i].x + 4 > shuriken_xy.x && arrow_xy[i].x + 2 < shuriken_xy.x && arrow_xy[i].y - 2 < shuriken_xy.y  && arrow_xy[i].y + 2 > shuriken_xy.y) {
					if (ok == 0 && aux_bool[i] == true) {
						score++;
						ok = 1;
						aux_bool[i] = false;
						active_arrow[i] = false;
						speed_x = 0;
						speed_x_zig = 0;
						speed_y_zig = 0;
						arrow_custom_speed[i] = 0;
						arrow_speed[i] = 0;

					}
				}
			}

			if (pos_bow_y + 3.5f > shuriken_xy.y && pos_bow_y - 3.5f < shuriken_xy.y) {
				if (pos_bow_x + 2.5f >= shuriken_xy.x) {
					lives--;
					ok = 1;
					speed_x = 0;
					speed_x_zig = 0;
					speed_y_zig = 0;
				}
			}

			if (countingStars % 500 == 0) {
				ballonSet++;
			}
			spawnBalloonSet(ballonSet);

		}
		
	}
	else if(idle == false && quit_game == true)
	{
		exit(0);
	}
}

string MainGame::getLetterToRender(char aux) {
	string letter;
	switch (aux) {
	case 'A':
		letter = "A";
		break;
	case 'B':
		letter = "B";
		break;
	case 'C':
		letter = "C";
		break;
	case 'D':
		letter = "D";
		break;
	case 'E':
		letter = "E";
		break;
	case 'F':
		letter = "F";
		break;
	case 'G':
		letter = "G";
		break;
	case 'H':
		letter = "H";
		break;
	case 'I':
		letter = "I";
		break;
	case 'J':
		letter = "J";
		break;
	case 'K':
		letter = "K";
		break;
	case 'L':
		letter = "L";
		break;
	case 'M':
		letter = "M";
		break;
	case 'N':
		letter = "N";
		break;
	case 'O':
		letter = "O";
		break;
	case 'P':
		letter = "P";
		break;
	case 'Q':
		letter = "Q";
		break;
	case 'R':
		letter = "R";
		break;
	case 'S':
		letter = "S";
		break;
	case 'T':
		letter = "T";
		break;
	case 'U':
		letter = "U";
		break;
	case 'V':
		letter = "V";
		break;
	case 'W':
		letter = "W";
		break;
	case 'X':
		letter = "X";
		break;
	case 'Y':
		letter = "Y";
		break;
	case 'Z':
		letter = "Z";
		break;
	}
	return letter;
}

void MainGame::RenderText(char* aux, float x, float y, float dist, float scale)
{
	int size = strlen(aux);
	string letter;
	for (int i = 0; i < size; i++) {
		if (aux[i] == ' ') {
			i += 1;
		}
		if (aux[i] >= 97) {
			letter = getLetterToRender(aux[i] - 32);
		}
		else {
			letter = getLetterToRender(aux[i]);
		}
		
		RenderMesh2D(meshes[letter], shaders["Simple"], Transform2D::Translate(i * dist - x, y) * Transform2D::Scale(scale,scale));

	}

}

void MainGame::spawnBalloonSet(int set)
{
	for (int i = 0; i < 15; i++) {
		if (spawnedBallon[i] == false) {
			balloon_y[i] = -15;
			printBallon[i] = true;
			spawnedBallon[i] = true;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (printBallon[i] == true) {
			if (balloonType[i] == 0) {

				balloon_y[i] = spawnBalloonG(1.5 + i / 2, i + 10, balloon_y[i], i);
				for (int j = 0; j < 5; j++) {
					hitBalloon(arrow_xy[j], i, i + 10, j);
				}
			}
			else {
				balloon_y[i] = spawnBalloonB(2.5 + i / 3, i + 5, balloon_y[i], i);
				for (int j = 0; j < 5; j++) {
					hitBalloon(arrow_xy[j], i, i + 5, j);
				}
			}
		}
		else {
			if (balloonType[i] == 0) {
				balloon_y[i] = destroyBalloonG(1.5, i + 10, balloon_y[i], i);
			}
			else {
				balloon_y[i] = destroyBalloonB(1.5, i + 5, balloon_y[i], i);
			}
		}
	}
	if (set > 1) {
		for (int i = 5; i < 10; i++) {

			if (printBallon[i] == true) {
				if (balloonType[i] == 0) {
					balloon_y[i] = spawnBalloonG(6.5 - i / 2, i + 2, balloon_y[i], i);
					for (int j = 0; j < 5; j++) {
						hitBalloon(arrow_xy[j], i, i + 2, j);
					}
				}
				else {
					balloon_y[i] = spawnBalloonB(1 + i / 2, i + 5, balloon_y[i], i);
					for (int j = 0; j < 5; j++) {
						hitBalloon(arrow_xy[j], i, i + 5, j);
					}
				}
			}
			else {
				if (balloonType[i] == 0) {
					balloon_y[i] = destroyBalloonG(1.5, i + 2, balloon_y[i], i);
				}
				else {
					balloon_y[i] = destroyBalloonB(1.5, i + 5, balloon_y[i], i);
				}
			}
		}
	}

	if (set > 2) {
		for (int i = 10; i < 15; i++) {

			if (printBallon[i] == true) {
				if (balloonType[i] == 0) {
					balloon_y[i] = spawnBalloonG(i / 2, i + 4, balloon_y[i], i);
					for (int j = 0; j < 5; j++) {
						hitBalloon(arrow_xy[j], i, i + 5, j);
					}
				}
				else {
					balloon_y[i] = spawnBalloonB(i * 1.5, i + 7, balloon_y[i], i);
					for (int j = 0; j < 5; j++) {
						hitBalloon(arrow_xy[j], i, i + 10, j);
					}
				}
			}
			else {
				if (balloonType[i] == 0) {
					balloon_y[i] = destroyBalloonG(1.5, i + 4, balloon_y[i], i);
				}
				else {
					balloon_y[i] = destroyBalloonB(1.5, i + 7, balloon_y[i], i);
				}
			}
		}
	}


}

char* MainGame::getNameMeshToRender(int nr)
{
	char* aux;
	aux = (char*)malloc(256 * sizeof(char));
	switch (nr) {
	case 0:
		aux = "zero";
		break;
	case 1:
		aux = "unu";
		break;
	case 2:
		aux = "doi";
		break;
	case 3:
		aux = "trei";
		break;
	case 4:
		aux = "patru";
		break;
	case 5:
		aux = "cinci";
		break;
	case 6:
		aux = "sase";
		break;
	case 7:
		aux = "sapte";
		break;
	case 8:
		aux = "opt";
		break;
	case 9:
		aux = "noua";
		break;
	}
	return aux;
}

int MainGame::get_size_nr(int nr)
{
	int count = 0;
	if (nr <= 9) {
		count == 0;
	}
	else {
		while (nr != 0) {
			nr = nr / 10;
			count++;
		}
	}


	return count;
}

void MainGame::renderScore(int nr)
{
	char* aux;
	aux = (char*)malloc(256 * sizeof(char));
	int size = get_size_nr(abs(nr));

	if (size == 0) {
		if (nr < 0) {
			RenderMesh2D(meshes["minus"], shaders["VertexColor"], Transform2D::Scale(0.5f, 0.5f) * Transform2D::Translate(-1.2f, 20));
		}
		aux = getNameMeshToRender(abs(nr));
		RenderMesh2D(meshes[aux], shaders["VertexColor"], Transform2D::Scale(0.5f, 0.5f) * Transform2D::Translate(0, 20));
	}
	else {
		for (int i = 0; i < size; i++) {
			if (nr < 0) {
				RenderMesh2D(meshes["minus"], shaders["VertexColor"], Transform2D::Scale(0.5f, 0.5f) * Transform2D::Translate(-1.4f * i, 20));
			}
			aux = getNameMeshToRender(abs(nr) % 10);
			nr = nr / 10;
			RenderMesh2D(meshes[aux], shaders["VertexColor"], Transform2D::Scale(0.5f, 0.5f) * Transform2D::Translate(-1.2f * i, 20));
		}
	}
}

void MainGame::hitBalloon(pairs arrow_xy, int i, float x, int j)
{
	if (arrow_xy.x >= x - 5 && arrow_xy.y >= balloon_y[i] - 1.5 && arrow_xy.y <= balloon_y[i] + 1.5) {

		if (aux_bool[j] == true && printBallon[i] == true) {
			if (balloonType[i] == 0) {
				score++;
			}
			else {
				score--;
			}
			/*
			aux_bool[j] = false;
			active_arrow[j] = false;
			*/
			printBallon[i] = false;
		}
	}
}

void MainGame::renderBow(float x, float y)
{
	double a, b, c;
	// A(x,y) B(aux_x_bow,aux_y_bow) C(x, aux_y_bow)
	// AB = sqrt((aux_x_bow - x)^2 + (aux_y_bow - y)^2)
	// AC = (aux_y_bow - y)
	// BC = (aux_x_bow - x)
	a = sqrt(pow((double)(aux_x_bow - x), 2) + pow((double)(aux_y_bow - y), 2));
	b = aux_y_bow - y;
	c = aux_x_bow - x;
	float aux_angle = (float)(pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
	float angle = 90 - acosf(aux_angle) * 180 / M_PI;

	if (angle >= 25) {
		angle = 25;
	}
	else if (angle <= -25) {
		angle = -25;
	}

	if (updatedMode == false) {
		moveBow = Transform2D::Translate(x, y) * Transform2D::Rotate(angle) *Transform2D::Rotate(-90) * Transform2D::Scale(2.5, 2.5);
		moveString = Transform2D::Translate(x, y) * Transform2D::Rotate(angle) * Transform2D::Scale(2.5, 2.5);
		RenderMesh2D(meshes["bow"], shaders["VertexColor"], moveBow);

		if (isPressed == true) {
			RenderMesh2D(meshes["string_v"], shaders["VertexColor"], moveString);
			isPressed = false;
			if (active_arrow[curentArrow] == false) {

				moveArrowHead = Transform2D::Translate(x - 0.5f, aux_pos[curentArrow]) * Transform2D::Rotate(angle)* Transform2D::Scale(3, 3);
				RenderMesh2D(meshes["arrowHead"], shaders["VertexColor"], moveArrowHead);
				moveArrowBase = Transform2D::Translate(x - 0.75f, aux_pos[curentArrow]) * Transform2D::Rotate(angle)* Transform2D::Scale(3, 3);
				RenderMesh2D(meshes["arrowBase"], shaders["VertexColor"], moveArrowBase);
			}
		}
		else {
			RenderMesh2D(meshes["string"], shaders["VertexColor"], moveString);
		}
	}
	else {
		moveBow = Transform2D::Translate(x + 0.5, y) * Transform2D::Rotate(angle);
		moveString = Transform2D::Translate(x, y) * Transform2D::Rotate(angle) * Transform2D::Scale(2.5, 2.5);

		if (isPressed == true) {
			RenderMesh2D(meshes["string_v"], shaders["VertexColor"], moveString);
			isPressed = false;
			if (active_arrow[curentArrow] == false) {
				RenderMesh2D(bow_arrow_string, shader, moveBow);
			}
		}
		else {
			RenderMesh2D(bow_string, shader, moveBow);
			RenderMesh2D(meshes["string"], shaders["VertexColor"], moveString);
		}
	}


}

MainGame::pairs MainGame::renderArrow(float x, float speed, float deltaTimeSeconds, int i)
{
	struct pairs aux;
	aux.x = 0;
	aux.y = 0;
	float aux_x = 0;
	float a, b, c;
	float aux_angle;
	float angle;
	if (aux_bool[i] == true) {
		active_arrow[i] = true;
		arrow_speed[i] += speed * deltaTimeSeconds;
		aux_y[i] -= (aux_pos[i] - offsetY[i]) / (speed / 10)*deltaTimeSeconds;
		if (updatedMode == false) {
			moveArrowHead = Transform2D::Translate(x + arrow_speed[i], aux_y[i]) * Transform2D::Rotate(-(aux_pos[i] - offsetY[i])) * Transform2D::Scale(3, 3);
			RenderMesh2D(meshes["arrowHead"], shaders["VertexColor"], moveArrowHead);
			moveArrowBase = Transform2D::Translate(x + arrow_speed[i] - 0.25, aux_y[i]) * Transform2D::Rotate(-(aux_pos[i] - offsetY[i]))  * Transform2D::Scale(3, 3);
			RenderMesh2D(meshes["arrowBase"], shaders["VertexColor"], moveArrowBase);
		}
		else {
			moveArrow = Transform2D::Translate(x + arrow_speed[i], aux_y[i]) * Transform2D::Rotate(-(aux_pos[i] - offsetY[i]));
			RenderMesh2D(arrow_string, shader, moveArrow);
		}


		if (x + arrow_speed[i] >= 16) {
			aux_bool[i] = false;
			active_arrow[i] = false;
			arrow_speed[i] = 0;
			offsetX[i] = 0;
			offsetY[i] = 0;
			aux_y[i] = 0;
		}
		aux.x = x + arrow_speed[i];
		aux.y = aux_y[i];
	}
	return aux;
}

float MainGame::spawnBalloonG(float speed, float x, float y, int id) {
	float aux = y + speed * deltaTimeAux;
	if (aux >= 15 || aux <= -15) {
		spawnedBallon[id] = false;
	}
	if (spawnedBallon[id] == true) {
		renderBalloonG(x, aux, 1, 1);
	}
	return aux;
}

float MainGame::spawnBalloonB(float speed, float x, float y, int id) {
	float aux = y + speed * deltaTimeAux;
	if (aux >= 15 || aux <= -15) {
		spawnedBallon[id] = false;
	}
	if (spawnedBallon[id] == true) {
		renderBalloonB(x, aux, 1, 1);
	}
	return aux;
}

float MainGame::destroyBalloonG(float speed, float x, float y, int id) {
	float aux = y - speed * deltaTimeAux;
	if (aux >= 15 || aux <= -15) {
		spawnedBallon[id] = false;
	}
	if (spawnedBallon[id] == true) {
		renderBalloonG(x, aux, 1, 0.2f);
	}
	return aux;
}

float MainGame::destroyBalloonB(float speed, float x, float y, int id) {
	float aux = y - speed * deltaTimeAux;
	if (aux >= 15 || aux <= -15) {
		spawnedBallon[id] = false;
	}
	if (spawnedBallon[id] == true) {
		renderBalloonB(x, aux, 1, 0.2f);
	}
	return aux;
}

void MainGame::renderBalloonG(float x, float y, float scale_x, float scale_y)
{

	if (updatedMode == false) {
		balloonMat = Transform2D::Translate(x, y) * Transform2D::Scale(2, 2) * Transform2D::Rotate(-90)* Transform2D::Scale(scale_x, scale_y);
		tailMat = Transform2D::Translate(x, y) * Transform2D::Translate(0, -3)* Transform2D::Scale(0.15f, 0.2f);
		RenderMesh2D(meshes["balloonBaseR"], shaders["VertexColor"], balloonMat);
		RenderMesh2D(meshes["balloonTail"], shaders["VertexColor"], tailMat);
	}
	else {
		balloonMat = Transform2D::Translate(x, y) * Transform2D::Scale(2.5, 2.5) * Transform2D::Scale(scale_x, scale_y);
		RenderMesh2D(balloon_r_string, shader, balloonMat);
	}

}

void MainGame::renderBalloonB(float x, float y, float scale_x, float scale_y)
{
	if (updatedMode == false) {
		balloonMat = Transform2D::Translate(x, y) * Transform2D::Scale(2, 2) * Transform2D::Rotate(-90)* Transform2D::Scale(scale_x, scale_y);
		tailMat = Transform2D::Translate(x, y) * Transform2D::Translate(0, -3)* Transform2D::Scale(0.15f, 0.2f);
		RenderMesh2D(meshes["balloonBaseG"], shaders["VertexColor"], balloonMat);
		RenderMesh2D(meshes["balloonTail"], shaders["VertexColor"], tailMat);
	}
	else {
		balloonMat = Transform2D::Translate(x, y) * Transform2D::Scale(2.5, 2.5) * Transform2D::Scale(scale_x, scale_y);
		RenderMesh2D(balloon_y_string, shader, balloonMat);
	}
}

void MainGame::renderShurikenZ(float x, float y, float speed_x, float speed_y, double angle)
{
	if (updatedMode == false) {
		upT = Transform2D::Translate(x, y) * Transform2D::Rotate(90);
		downT = Transform2D::Translate(x, y) * Transform2D::Rotate(180);
		leftT = Transform2D::Translate(x, y) * Transform2D::Rotate(270);
		rightT = Transform2D::Translate(x, y);
		upT *= Transform2D::Translate(speed_y, speed_x) * Transform2D::Rotate(angle);
		downT *= Transform2D::Translate(speed_x, -speed_y)  * Transform2D::Rotate(angle);
		leftT *= Transform2D::Translate(-speed_y, -speed_x) * Transform2D::Rotate(angle);
		rightT *= Transform2D::Translate(-speed_x, speed_y) * Transform2D::Rotate(angle);
		RenderMesh2D(meshes["shurikenZig"], shaders["VertexColor"], upT);
		RenderMesh2D(meshes["shurikenZig"], shaders["VertexColor"], downT);
		RenderMesh2D(meshes["shurikenZig"], shaders["VertexColor"], leftT);
		RenderMesh2D(meshes["shurikenZig"], shaders["VertexColor"], rightT);
	}
	else {

		moveShuriken = Transform2D::Translate(x, y) * Transform2D::Translate(-speed_x, speed_y) * Transform2D::Rotate(angle);
		RenderMesh2D(shuriken_string, shader, moveShuriken);
	}
}

MainGame::pairs MainGame::Shuriken(float deltaTimeSeconds, int choice, float customSpeed, float pos_y_shur)
{
	struct pairs out_pos;
	out_pos.x = 0;
	out_pos.y = 0;

	angleShuriken += 360 * deltaTimeSeconds;
	if (pos_y_shur > 10) {
		pos_y_shur = 10;
	}
	if (pos_y_shur < -10) {
		pos_y_shur = -10;
	}
	out_pos.y = pos_y_shur;
	if (speed_x < 40 && choice == 1) {

		speed_x += speed_shuriken * deltaTimeSeconds* customSpeed;
		renderShurikenZ(pos_x_shuriken, pos_y_shur, speed_x, 0, angleShuriken);
		out_pos.x = pos_x_shuriken - speed_x;

	}
	else if (speed_x >= 40) {
		ok = 1;
		out_pos.x = pos_x_shuriken - speed_x;
		speed_x = 0;
	}
	else if (speed_x_zig < 40 && choice == 0) {
		if (go_upx) {
			speed_y_zig += deltaTimeSeconds * zig_speed_shuriken;
			if (speed_y_zig >= 1.5f && go_upx) {
				go_downx = true;
				go_upx = false;
			}
			out_pos.y = pos_y_shur + speed_y_zig;
		}
		if (go_downx) {
			speed_y_zig -= deltaTimeSeconds * zig_speed_shuriken;
			if (speed_y_zig <= -1.5f && go_downx) {
				go_downx = false;
				go_upx = true;
			}
			out_pos.y = pos_y_shur - speed_y_zig;
		}
		speed_x_zig += deltaTimeSeconds * speed_shuriken * customSpeed;
		renderShurikenZ(pos_x_shuriken, pos_y_shur, speed_x_zig, speed_y_zig, angleShuriken);
		out_pos.x = pos_x_shuriken - speed_x_zig;

	}
	else if (speed_x_zig >= 40) {
		ok = 1;
		out_pos.x = pos_x_shuriken - speed_x_zig;
		speed_x_zig = 0;
	}

	return out_pos;
}

void MainGame::FrameEnd()
{
}

void MainGame::OnInputUpdate(float deltaTime, int mods)
{
	int mouseX = 0, mouseY = 0;
	glm::ivec2 aux;
	aux = window->props.cursorPos;
	mouseX = aux.x;
	mouseY = aux.y;
	offsetY[curentArrow] = (float)(-mouseY + 360) / 36;
	offsetX[curentArrow] = (float)(mouseX - 640) / 32;
	if (window->MouseHold(GLFW_MOUSE_BUTTON_LEFT) == true && aux_bool[curentArrow] == false && active_arrow[curentArrow] == false) {
		isPressed = true;
		active_arrow[curentArrow] == true;
		aux_y[curentArrow] = 0;
		aux_pos[curentArrow] = pos_bow_y;
		offsetX[curentArrow] = (float)(mouseX - 640) / 32;
		offsetY[curentArrow] = (float)(-mouseY + 360) / 36;
		if (counter[curentArrow] <= 55) {
			counter[curentArrow]++;
		}

	}
	if (window->KeyHold(GLFW_KEY_W) == true && pos_bow_y <= 7) {
		pos_bow_y += bow_speed * deltaTime;
	}
	if (window->KeyHold(GLFW_KEY_S) == true && pos_bow_y >= -6.9f) {
		pos_bow_y -= bow_speed * deltaTime;
	}
}

void MainGame::OnKeyPress(int key, int mods)
{
	if (key == GLFW_KEY_G) {
		if (updatedMode == true) {
			updatedMode = false;
		}
		else {
			updatedMode = true;
		}
	}
	if (key == GLFW_KEY_UP && game_over == false) {
		if (quit_game_sel == true) {
			quit_game_sel = false;
			play_game_sel = true;
		}
		else if (play_game_sel == true) {
			quit_game_sel = true;
			play_game_sel = false;
		}
	}
	if (key == GLFW_KEY_DOWN && game_over == false) {
		if (play_game_sel == true) {
			quit_game_sel = true;
			play_game_sel = false;
		}
		else if (quit_game_sel == true) {
			quit_game_sel = false;
			play_game_sel = true;
		}
	}
	if (key == GLFW_KEY_RIGHT && game_over == true) {
		if (play_again_sel == true) {
			quit_game_sel = true;
			play_again_sel = false;
		}
		else if (quit_game_sel == true) {
			quit_game_sel = false;
			play_again_sel = true;
		}
	}
	if (key == GLFW_KEY_LEFT && game_over == true) {
		if (play_again_sel == true) {
			quit_game_sel = true;
			play_again_sel = false;
		}
		else if (quit_game_sel == true) {
			quit_game_sel = false;
			play_again_sel = true;
		}
	}
	if (key == GLFW_KEY_ENTER) {
		if (play_game_sel == true)
		{
			play_game_sel = false;
			idle = false;
			play_game = true;
			lives = 3;
			countingStars = 0;
		}
		else if (game_over == true && play_again_sel == true) {
			idle = false;
			game_over = false;
			play_game = true;
			for (int i = 0; i < 15; i++) {
				spawnedBallon[i] = false;
				printBallon[i] = false;
				balloon_y[i] = -16;
			}
			for (int i = 0; i < 5; i++) {
				aux_bool[i] = false;
			}
			ok = 1;
			lives = 3;
			score = 0;
			countingStars = 0;
		}
		else if (game_over == true && quit_game_sel == true) {
			idle = false;
			play_game = false;
			quit_game = true;
		}
		else if (quit_game_sel == true) {
			idle = false;
			play_game = false;
			quit_game = true;
		}
	}
}

void MainGame::OnKeyRelease(int key, int mods)
{

}

void MainGame::OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY)
{

	aux_y_bow = (float)(-mouseY + 360) / 36;
	aux_x_bow = (float)(mouseX - 640) / 32;
}

void MainGame::OnMouseBtnPress(int mouseX, int mouseY, int button, int mods)
{
}

void MainGame::OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods)
{
	if (button != GLFW_MOUSE_BUTTON_LEFT && aux_bool[curentArrow] == false && button == GLFW_MOUSE_BUTTON_RIGHT) {
		aux_bool[curentArrow] = true;
		arrow_speed[curentArrow] = 0;
		isPressed = false;
		aux_y[curentArrow] = aux_pos[curentArrow];
		arrow_custom_speed[curentArrow] = 7.5 + counter[curentArrow] / 5;
		counter[curentArrow] = 0;
		curentArrow++;
		if (curentArrow > 4)
		{
			curentArrow = 0;
		}

	}
}

void MainGame::OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY)
{
}

void MainGame::OnWindowResize(int width, int height)
{
}
