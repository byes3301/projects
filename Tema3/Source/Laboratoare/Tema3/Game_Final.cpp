#include "Game_Final.h"
#include <vector>
#include <string>
#include <iostream>
#include <Core/Engine.h>

using namespace std;

int lvl1_final_v[10] = { 0, 0, 1, 9, 17, 5, 13, 7, 5, 0 };
int lvl2_final_v[10] = { 0, 13, 18, 1, 2, 5, 7, 8, 3, 0 };
int lvl3_final_v[10] = { 0, 0, 19, 0, 23, 20, 23, 21, 22, 0 };

Game_Final::Game_Final()
{
}

Game_Final::~Game_Final()
{
}

void Game_Final::createMeshes(void)
{
	// Declaratii Generale
	glm::vec3 color = glm::vec3(1, 1, 1);
	glm::vec3 colorScore = glm::vec3(1, 1, 1);
	glm::vec3 heart_color = glm::vec3(1, 0, 0);
	glm::vec3 box_color = glm::vec3(1, 1, 1);
	glm::vec3 box_color2 = glm::vec3(0, 0, 0);

	{
		Mesh* mesh = new Mesh("box");
		mesh->LoadMesh(RESOURCE_PATH::MODELS + "Primitives", "box.obj");
		meshes[mesh->GetMeshID()] = mesh;
	}

	{
		Mesh* mesh = new Mesh("plane");
		mesh->LoadMesh(RESOURCE_PATH::MODELS + "Primitives", "screen_quad.obj");
		meshes[mesh->GetMeshID()] = mesh;
	}

	{
		Mesh* mesh = new Mesh("sphere");
		mesh->LoadMesh(RESOURCE_PATH::MODELS + "Primitives", "sphere.obj");
		meshes[mesh->GetMeshID()] = mesh;
	}

	{
		vector<glm::vec3> vertices
		{
			glm::vec3(0.57f,   0.57f, 0.0f),	// Top Right
			glm::vec3(0.57f,  -0.57f, 0.0f),	// Bottom Right
			glm::vec3(-0.57f, -0.57f, 0.0f),	// Bottom Left
			glm::vec3(-0.57f,  0.57f, 0.0f),	// Top Left
		};

		vector<glm::vec3> normals
		{
			glm::vec3(0, 1, 1),
			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, 0),
			glm::vec3(0, 1, 0)
		};

		// TODO : Complete texture coordinates for the square
		vector<glm::vec2> textureCoords
		{
			glm::vec2(0.0f, 0.0f),
			glm::vec2(0.0f, 1.0f),
			glm::vec2(1.0f, 1.0f),
			glm::vec2(1.0f, 0.0f)
		};

		vector<unsigned short> indices =
		{
			0, 1, 3,
			1, 2, 3
		};

		Mesh* mesh = new Mesh("decorations");
		mesh->InitFromData(vertices, normals, textureCoords, indices);
		meshes[mesh->GetMeshID()] = mesh;
	}

	{
		// 0 //
		Mesh* zero = new Mesh("zero");
		zero->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "0.obj");
		meshes[zero->GetMeshID()] = zero;
		// 1 //
		Mesh* unu = new Mesh("unu");
		unu->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "1.obj");
		meshes[unu->GetMeshID()] = unu;
		// 2 //
		Mesh* doi = new Mesh("doi");
		doi->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "2.obj");
		meshes[doi->GetMeshID()] = doi;
		// 3 //
		Mesh* trei = new Mesh("trei");
		trei->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "3.obj");
		meshes[trei->GetMeshID()] = trei;
		// 4 //
		Mesh* patru = new Mesh("patru");
		patru->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "4.obj");
		meshes[patru->GetMeshID()] = patru;
		// 5 //
		Mesh* cinci = new Mesh("cinci");
		cinci->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "5.obj");
		meshes[cinci->GetMeshID()] = cinci;
		// 6 //
		Mesh* sase = new Mesh("sase");
		sase->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "6.obj");
		meshes[sase->GetMeshID()] = sase;
		// 7 //
		Mesh* sapte = new Mesh("sapte");
		sapte->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "7.obj");
		meshes[sapte->GetMeshID()] = sapte;
		// 8 //
		Mesh* opt = new Mesh("opt");
		opt->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "8.obj");
		meshes[opt->GetMeshID()] = opt;
		// 9 //
		Mesh* noua = new Mesh("noua");
		noua->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "9.obj");
		meshes[noua->GetMeshID()] = noua;
	}

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

	{
		Mesh* mesh_plus = new Mesh("plus");
		mesh_plus->LoadMesh(RESOURCE_PATH::MODELS + "GameObjects", "plus.obj");
		meshes[mesh_plus->GetMeshID()] = mesh_plus;
	}

	/* Selection Box */
	{
		Mesh* box_sel = new Mesh("box_sel");
		vector<VertexFormat> v_box_sel;
		vector<unsigned short> i_box_sel;

		v_box_sel = {
			VertexFormat(glm::vec3(-2,-1,1), glm::vec3(1,1,1)),
			VertexFormat(glm::vec3(2,-1,1), glm::vec3(1,1,1)),
			VertexFormat(glm::vec3(2,1,1), glm::vec3(1,1,1)),
			VertexFormat(glm::vec3(-2,1,1), glm::vec3(1,1,1))
		};

		i_box_sel = {
			0, 1, 2, 3
		};

		box_sel->SetDrawMode(GL_LINE_LOOP);
		box_sel->InitFromData(v_box_sel, i_box_sel);
		AddMeshToList(box_sel);
	}
}

string Game_Final::getLetterToRender(char aux) {
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

void Game_Final::RenderText(char* aux, float x, float y, float dist, float scale)
{
	int size = (int)strlen(aux);
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
		glm::mat4 fuelBGMatrix = glm::mat4(1);
		fuelBGMatrix = glm::scale(fuelBGMatrix, glm::vec3(scale, scale, 0.5f));
		fuelBGMatrix = glm::translate(fuelBGMatrix, glm::vec3(i * dist - x, y, 0));
		
		RenderFixedMesh(meshes[letter], shaders["FixedShader"], fuelBGMatrix, glm::vec3(1, 1, 1));

		//RenderMesh2D(meshes[letter], shaders["Simple"], Transform2D::Translate(i * dist - x, y) * Transform2D::Scale(scale, scale));

	}

}

char* Game_Final::getNameMeshToRender(int nr)
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

int Game_Final::get_size_nr(int nr)
{
	int count = 0;
	if (nr <= 9) {
		count = 0;
	}
	else {
		while (nr != 0) {
			nr = nr / 10;
			count++;
		}
	}


	return count;
}

void Game_Final::renderScore(int nr)
{
	char* aux;
	aux = (char*)malloc(256 * sizeof(char));
	int size = get_size_nr(abs(nr));
	if (size == 0) {
		aux = getNameMeshToRender(abs(nr));
		glm::mat4 modelMatrix = glm::mat4(1);
		modelMatrix = glm::scale(modelMatrix, glm::vec3(0.0075, 0.0075, 0.5));
		modelMatrix = glm::translate(modelMatrix, glm::vec3(-100 - 8.5, 100, 1));
		RenderFixedMesh(meshes[aux], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
	}
	else {
		for (int i = 0; i < size; i++) {
			aux = getNameMeshToRender(abs(nr) % 10);
			nr = nr / 10;
			glm::mat4 modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.0075, 0.0075, 0.5));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(-100 - 8.5 * i, 100, 1));
			RenderFixedMesh(meshes[aux], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
		}
	}
	
}

void Game_Final::createShaders(void) 
{
	{
		Shader *shader = new Shader("BGShader");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/bg.VS.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/bg.FS.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		Shader *shader = new Shader("ObjShader");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/obj.VS.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/obj.FS.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		Shader *shader = new Shader("BoxShader");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/box.VS.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/box.FS.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		Shader *shader = new Shader("MonsterShader");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/monster.VS.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/monster.FS.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		Shader *shader = new Shader("ColorShader");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/colorShader.VS.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/colorShader.FS.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		Shader *shader = new Shader("SphereShader");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/sphereShader.VS.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/sphereShader.FS.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		Shader *shader = new Shader("SphereShader2");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/sphereShader2.VS.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/sphereShader2.FS.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		Shader *shader = new Shader("FixedShader");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/fixedShader.VS.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/fixedShader.FS.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}
}

void Game_Final::getTextures(void) {

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/carrion.png", GL_REPEAT);
		mapText["carrion"] = texture;
		monsters[0] = "carrion";
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/skeleton.png", GL_REPEAT);
		mapText["skeleton"] = texture;
		monsters[1] = "skeleton";
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/jellyfish.png", GL_REPEAT);
		mapText["jellyfish"] = texture;
		monsters[2] = "jellyfish";
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/cultist.png", GL_REPEAT);
		mapText["cultist"] = texture;
		monsters[3] = "cultist";
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/drowned.png", GL_REPEAT);
		mapText["drowned"] = texture;
		monsters[4] = "drowned";
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/abbey.png", GL_REPEAT);
		mapText["abbey"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/blacksmith.png", GL_REPEAT);
		mapText["blacksmith"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/bones.png", GL_REPEAT);
		mapText["bones"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/camp.png", GL_REPEAT);
		mapText["camp"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/guild.png", GL_REPEAT);
		mapText["guild"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/sanitarium.png", GL_REPEAT);
		mapText["sanitarium"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/statue.png", GL_REPEAT);
		mapText["statue"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/tavern.png", GL_REPEAT);
		mapText["tavern"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/wagon.png", GL_REPEAT);
		mapText["wagon"] = texture;
	}


	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/crate.png", GL_REPEAT);
		mapText["box"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/granite.jpg", GL_REPEAT);
		mapText["sphere"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/invincibility.png", GL_REPEAT);
		mapText["inv"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/speedup.png", GL_REPEAT);
		mapText["speed"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/recovery.png", GL_REPEAT);
		mapText["rec"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/consume.png", GL_REPEAT);
		mapText["cons"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/end.png", GL_REPEAT);
		mapText["end"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/finish.png", GL_REPEAT);
		mapText["finish"] = texture;
	}

	{
		Texture2D *texture = new Texture2D();
		texture->Load2D("Source/Laboratoare/Tema3/Textures/bonus.png", GL_REPEAT);
		mapText["bonus"] = texture;
	}
}

void Game_Final::Init()
{
	getTextures();
	delta = 0;
	renderCameraTarget = false;
	plat_speed = 0;
	plat_aux_speed = 2;
	no_platforms = 10;
	left_side = 25;
	right_side = -25;
	top_side = 14;
	bot_side = -14;
	pos_mat_x = 1;
	aspect = window->props.aspectRatio;
	znear = 0.01f;
	zfar = 200.0f;
	dist = 0;
	pos_x = 1;
	typePersp = true;
	fovCamera = 60;
	lvl1 = (Platform*)malloc(no_platforms * sizeof(Platform));
	lvl2 = (Platform*)malloc(no_platforms * sizeof(Platform));
	lvl3 = (Platform*)malloc(no_platforms * sizeof(Platform));
	
	left_dec = (Dec*)malloc(no_platforms * sizeof(Dec));
	left_dec = createDec(left_dec_pos);
	right_dec = (Dec*)malloc(no_platforms * sizeof(Dec));
	right_dec = createDec(right_dec_pos);

	camera = new Game_FinalCamera::Camera();
	camera->Set(cameraPos, glm::vec3(1, 1, 0), glm::vec3(0, 1, 0));
	
	vecPlatforms = createVector();
	projectionMatrix = glm::perspective(RADIANS(80), window->props.aspectRatio, 0.01f, 200.0f);
	// Create a shader program for drawing face polygon with the color of the normal
	createShaders();
	createMeshes();
	createLevels();

	{
		lightPosition = glm::vec3(1, 2, 3);
		lightDirection = glm::vec3(0, -1, 0);
		materialShininess = 30;
		materialKd = 3.5;
		materialKs = 3.5;
	}
}

char* Game_Final::getObjbyId(int x) {
	char *aux = (char*)malloc(255 * sizeof(char));
	switch (x) {
		case 0:
			strcpy(aux, "abbey");
			break;
		case 1:
			strcpy(aux, "blacksmith");
			break;
		case 2:
			strcpy(aux, "bones");
			break;
		case 3:
			strcpy(aux, "camp");
			break;
		case 4:
			strcpy(aux, "guild");
			break;
		case 5:
			strcpy(aux, "sanitarium");
			break;
		case 6:
			strcpy(aux, "statue");
			break;
		case 7:
			strcpy(aux, "tavern");
			break;
		case 8:
			strcpy(aux, "wagon");
			break;
	}
	return aux;
}

char* Game_Final::getMeshbyId(int x) {
	char *aux = (char*)malloc(255 * sizeof(char));
	switch (x) {
	case 0:
		strcpy(aux, "abbey");
		break;
	case 1:
		strcpy(aux, "blacksmith");
		break;
	case 2:
		strcpy(aux, "bones");
		break;
	case 3:
		strcpy(aux, "camp");
		break;
	case 4:
		strcpy(aux, "guild");
		break;
	case 5:
		strcpy(aux, "sanitarium");
		break;
	case 6:
		strcpy(aux, "statue");
		break;
	case 7:
		strcpy(aux, "tavern");
		break;
	case 8:
		strcpy(aux, "wagon");
		break;
	}
	return aux;
}

Game_Final::Dec* Game_Final::createDec(float pos_x) {
	Game_Final::Dec *vec;
	int r;
	vec = (Game_Final::Dec*)malloc(no_platforms * sizeof(Game_Final::Dec));
	for (int i = 0; i < no_platforms; i++) {
		r = rand() % 9;
		vec[i].pos = glm::vec3(pos_x, 1, 3 - (i * 2));
		vec[i].obj = getObjbyId(r);
	}
	return vec;
}

int Game_Final::getRandomPlatform() {
	int x;
	int rez = 1;
	x = rand() % 8;
	switch (x) {
		case 0:
			if (redPlat < redLimit) {
				rez = 2;
				redPlat++;
			}
			else {
				rez = 1;
			}			
			break;
		case 1:
			if (yellowPlat < yellowLimit) {
				rez = 3;
				yellowPlat++;
			}
			else {
				rez = 1;
			}
			break;
		case 2:
			if (orangePlat < orangeLimit) {
				rez = 4;
				orangePlat++;
			}
			else {
				rez = 1;
			}
			break;
		case 3:
			if (greenPlat < greenLimit) {
				rez = 5;
				greenPlat++;
			}
			else {
				rez = 1;
			}
			break;
		case 4:
			if (bluePlat < blueLimit) {
				rez = 6;
				bluePlat++;
			}
			else {
				rez = 1;
			}
			break;
		case 5:
			if (invPlats <= invLimit) {
				rez = 7;
				invPlats++;
			}
			else {
				rez = 1;
			}	
			break;
		case 6:
			rez = 8;
			break;
		default:
			rez = 1;
			break;
	}
	return rez;
}

int Game_Final::setCurrentPlatform(int m[3][3], int set) {
	int currentSet = 0;
	int r;
	if (set == 0 || set == 7 || set == 8 || set == 15 || set == 16 || set == 17 || set == 18) {
		r = rand() % 24;
		currentSet = r;
		switch (r) {
		case 0:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
			break;
		case 1:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 2:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 3:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 4:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 5:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 6:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 7:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 8:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 9:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = getRandomPlatform();
			break;
		case 10:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 11:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 12:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = getRandomPlatform(); m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 13:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 14:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = getRandomPlatform();
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 15:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 16:
			m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 17:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 18:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = getRandomPlatform();
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 19:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 0; m[2][0] = 0;
			break;
		case 20:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 0; m[2][0] = 1;
			break;
		case 21:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 1;
			break;
		case 22:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 0;
			break;
		case 23:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 1; m[2][0] = 0;
			break;
		}
	}
	else if (set == 1 || set == 2) {
		r = rand() % 22;
		currentSet = r;
		switch (r) {
		case 0:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
			break;
		case 1:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 2:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 3:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 4:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 5:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 6:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 7:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 8:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 9:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = getRandomPlatform();
			break;
		case 10:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 11:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 12:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = getRandomPlatform(); m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 13:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 14:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = getRandomPlatform();
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 15:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 16:
			m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 17:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 18:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = getRandomPlatform();
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 19:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 0; m[2][0] = 1;
			currentSet = 20;
			break;
		case 20:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 1;
			currentSet = 21;
			break;
		case 21:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 1; m[2][0] = 0;
			currentSet = 23;
			break;
		}
	}
	else if (set == 3 || set == 4) {
		r = rand() % 23;
		currentSet = r;
		switch (r) {
		case 0:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
			break;
		case 1:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 2:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 3:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 4:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 5:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 6:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 7:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 8:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 9:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = getRandomPlatform();
			break;
		case 10:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 11:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 12:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = getRandomPlatform(); m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 13:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 14:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = getRandomPlatform();
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 15:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 16:
			m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 17:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 18:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = getRandomPlatform();
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 19:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 0; m[2][0] = 1;
			currentSet = 20;
			break;
		case 20:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 1;
			currentSet = 21;
			break;
		case 21:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 0;
			currentSet = 22;
			break;
		case 22:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 1; m[2][0] = 0;
			currentSet = 23;
			break;
		}	
	}
	else if (set == 5 || set == 6) {
		r = rand() % 22;
		currentSet = r;
		switch (r) {
		case 0:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
			break;
		case 1:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 2:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 3:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 4:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 5:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 6:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 7:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 8:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 9:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = getRandomPlatform();
			break;
		case 10:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 11:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 12:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = getRandomPlatform(); m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 13:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 14:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = getRandomPlatform();
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 15:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 16:
			m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 17:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 18:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = getRandomPlatform();
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 19:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 0; m[2][0] = 1;
			currentSet = 21;
			break;
		case 20:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 1;
			currentSet = 22;
			break;
		case 21:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 0;
			currentSet = 23;
			break;
		}
	}
	else if (set == 9 || set == 10) {
		r = rand() % 22;
		currentSet = r;
		switch (r) {
		case 0:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
			break;
		case 1:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 2:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 3:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 4:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 5:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 6:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 7:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 8:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 9:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = getRandomPlatform();
			break;
		case 10:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 11:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 12:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = getRandomPlatform(); m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 13:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 14:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = getRandomPlatform();
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 15:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 16:
			m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 17:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 18:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = getRandomPlatform();
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 19:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 0; m[2][0] = 1;
			currentSet = 21;
			break;
		case 20:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 1;
			currentSet = 22;
			break;
		case 21:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 0;
			currentSet = 23;
			break;
		}
	}
	else if (set == 11 || set == 12) {
		r = rand() % 23;
		currentSet = r;
		switch (r) {
		case 0:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
			break;
		case 1:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 2:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 3:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 4:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 5:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 6:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 7:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 8:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 9:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = getRandomPlatform();
			break;
		case 10:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 11:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 12:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = getRandomPlatform(); m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 13:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 14:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = getRandomPlatform();
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 15:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 16:
			m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 17:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 18:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = getRandomPlatform();
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 19:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 0; m[2][0] = 1;
			currentSet = 20;
			break;
		case 20:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 1;
			currentSet = 21;
			break;
		case 21:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 0;
			currentSet = 22;
			break;
		case 22:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 1; m[2][0] = 0;
			currentSet = 23;
			break;
		}
	}
	else if (set == 13 || set == 14) {
		r = rand() % 22;
		currentSet = r;
		switch (r) {
		case 0:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
			break;
		case 1:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 2:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 3:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 4:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 5:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 6:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 7:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 8:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 9:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = getRandomPlatform();
			break;
		case 10:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 11:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 12:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = getRandomPlatform(); m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 13:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 14:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = getRandomPlatform();
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 15:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 16:
			m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 17:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 18:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = getRandomPlatform();
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 19:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 0; m[2][0] = 1;
			currentSet = 20;
			break;
		case 20:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 0; m[2][0] = 1;
			currentSet = 21;
			break;
		case 21:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 0; m[1][0] = 1; m[2][0] = 0;
			currentSet = 23;
			break;
		}
	}
	else if(set == 19 || set == 20 || set == 21 || set == 22 || set == 23) {
		r = rand() % 19;
		currentSet = r;
		switch (r) {
		case 0:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
			break;
		case 1:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 2:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 3:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 4:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		case 5:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 6:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 7:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 8:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 9:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 1; m[2][1] = 0;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = getRandomPlatform();
			break;
		case 10:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 11:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 12:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = getRandomPlatform(); m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 13:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = 1;
			break;
		case 14:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = getRandomPlatform();
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 15:
			m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 16:
			m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
			m[0][1] = 1; m[1][1] = getRandomPlatform(); m[2][1] = 0;
			m[0][0] = getRandomPlatform(); m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 17:
			m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
			m[0][1] = getRandomPlatform(); m[1][1] = 0; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = 1; m[2][0] = getRandomPlatform();
			break;
		case 18:
			m[0][2] = 0; m[1][2] = 1; m[2][2] = getRandomPlatform();
			m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
			m[0][0] = 1; m[1][0] = getRandomPlatform(); m[2][0] = 1;
			break;
		}
	}
	return currentSet;
}

void Game_Final::setCurrentPlatform2(int m[3][3], int set) {
	switch (set) {
	case -1:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 10; m[1][0] = 10; m[2][0] = 10;
		break;
	case -2:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 11; m[1][0] = 11; m[2][0] = 11;
		break;
	case -3:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 12; m[1][0] = 12; m[2][0] = 12;
		break;
	case 0:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 1:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 2:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 3:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 4:
		m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 1; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 5:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 6:
		m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 1; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 7:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 1; m[1][1] = 1; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 8:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 9:
		m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 1; m[1][1] = 1; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 10:
		m[0][2] = 1; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 11:
		m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
		m[0][1] = 1; m[1][1] = 1; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 12:
		m[0][2] = 0; m[1][2] = 1; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 13:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
		m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 14:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 1;
		m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 15:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 16:
		m[0][2] = 1; m[1][2] = 1; m[2][2] = 0;
		m[0][1] = 1; m[1][1] = 1; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 17:
		m[0][2] = 1; m[1][2] = 0; m[2][2] = 1;
		m[0][1] = 1; m[1][1] = 0; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 18:
		m[0][2] = 0; m[1][2] = 1; m[2][2] = 1;
		m[0][1] = 0; m[1][1] = 1; m[2][1] = 1;
		m[0][0] = 1; m[1][0] = 1; m[2][0] = 1;
		break;
	case 19:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 0; m[1][0] = 0; m[2][0] = 0;
		break;
	case 20:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 0; m[1][0] = 0; m[2][0] = 1;
		break;
	case 21:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 0; m[2][0] = 1;
		break;
	case 22:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 1; m[1][0] = 0; m[2][0] = 0;
		break;
	case 23:
		m[0][2] = 0; m[1][2] = 0; m[2][2] = 0;
		m[0][1] = 0; m[1][1] = 0; m[2][1] = 0;
		m[0][0] = 0; m[1][0] = 1; m[2][0] = 0;
		break;
	}
	int aux;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			aux = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = aux;
		}
	}
}

void Game_Final::createLevels() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			lvl1[0].m[x][y] = 1;
			lvl2[0].m[x][y] = 1;
			lvl3[0].m[x][y] = 1;
		}
	}
	lvl1[0].set = 0;
	lvl1[0].limit = 3;
	lvl1[0].auxLimit = 0;
	lvl1[0].offset = 0;

	lvl2[0].set = 0;
	lvl2[0].limit = 3;
	lvl2[0].auxLimit = 0;
	lvl2[0].offset = 0;

	lvl3[0].set = 0;
	lvl3[0].limit = 3;
	lvl3[0].auxLimit = 0;
	lvl3[0].offset = 0;

	for (int i = 1; i < no_platforms; i++) {
		setCurrentPlatform2(lvl1[i].m, lvl1_final_v[i]);
		setCurrentPlatform2(lvl2[i].m, lvl2_final_v[i]);
		setCurrentPlatform2(lvl3[i].m, lvl3_final_v[i]);
		lvl1[i].limit = 1;
		lvl1[i].auxLimit = 0;
		lvl1[i].offset = 0;
		lvl1[i].set = lvl1_final_v[i];

		lvl2[i].limit = 1;
		lvl2[i].auxLimit = 0;
		lvl2[i].offset = 0;
		lvl2[i].set = lvl2_final_v[i];

		lvl3[i].limit = 1;
		lvl3[i].auxLimit = 0;
		lvl3[i].offset = 0;
		lvl3[i].set = lvl3_final_v[i];
	}
	setCurrentPlatform2(lvl1[no_platforms-1].m, -1);
	setCurrentPlatform2(lvl2[no_platforms - 1].m, -2);
	setCurrentPlatform2(lvl3[no_platforms - 1].m, -3);

	lvl1[no_platforms - 1].limit = 1;
	lvl1[no_platforms - 1].auxLimit = 0;
	lvl1[no_platforms - 1].offset = 0;
	lvl1[no_platforms - 1].set = 0;

	lvl2[no_platforms - 1].limit = 1;
	lvl2[no_platforms - 1].auxLimit = 0;
	lvl2[no_platforms - 1].offset = 0;
	lvl2[no_platforms - 1].set = 0;

	lvl3[no_platforms - 1].limit = 1;
	lvl3[no_platforms - 1].auxLimit = 0;
	lvl3[no_platforms - 1].offset = 0;
	lvl3[no_platforms - 1].set = 0;

	lvl2[1].m[1][0] = 4;
	lvl2[1].m[2][0] = 6;
	lvl2[3].m[2][1] = 2;
	lvl2[5].m[0][1] = 3;
	lvl2[5].m[2][0] = 4;
	lvl2[4].m[1][0] = 7;
	lvl2[7].m[1][1] = 5;
	lvl2[8].m[1][1] = 6;

	lvl3[4].m[0][0] = 7;
	lvl3[3].m[0][0] = 4;
	lvl3[6].m[1][0] = 2;
	lvl3[5].m[2][0] = 2;
	lvl3[6].m[2][0] = 5;
}

Game_Final::Platform* Game_Final::createVector()
{	
	Game_Final::Platform* vec;
	vec = (Game_Final::Platform*)malloc(no_platforms * sizeof(Game_Final::Platform));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			vec[0].m[i][j] = -1;
		}
	}
	vec[0].m[0][0] = 1;
	vec[0].m[1][0] = 1;
	vec[0].m[2][0] = 1;
	vec[0].m[0][1] = 1;
	vec[0].m[1][1] = 1;
	vec[0].m[2][1] = 1;
	vec[0].m[0][2] = 1;
	vec[0].m[1][2] = 1;
	vec[0].m[2][2] = 1;
	vec[0].set = 0;
	vec[0].limit = 3;
	vec[0].auxLimit = 0;
	vec[0].offset = 0;
	
	for (int i = 1; i < no_platforms; i++) {
		vec[i].set = setCurrentPlatform(vec[i].m, vec[i - 1].set);
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (vec[i].m[j][k] == 6) {
					vec[i].monster_id = rand() % 5;
				}
			}
		}
		vec[i].limit = 1;
		vec[i].auxLimit = 0;
		vec[i].offset = 0;
	}
	for (int i = 0; i < no_platforms; i++) {
		cout << vec[i].set << endl;
	}
	return vec;
}

void Game_Final::placePlayer() {
	if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] != 0) {
		if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 2 && invincible == 0) {
			if (select == -1) {
				select = 0;
			}
			exitType = 2;
		}
		else {
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 3 && invincible == 0) {
				combustibil -= 15;
				yellowPlat--;
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 5) {
				combustibil += 15;
				greenPlat--;
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 4 && invincible == 0) {
				if (changeSpeed == 1) {
					renderType = 1;
					saveSpeed = plat_aux_speed;
					plat_aux_speed = 5;
					speedTimer = 3;
					changeSpeed = 0;
				}	
				orangePlat--;
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 6 && invincible == 0) {
				if (plat_aux_speed < 3) {
					exitType = 4;
					if (select == -1) {
						select = 0;
					}
				}
				if (plat_aux_speed >= 3) {
					plat_aux_speed = 2.5;
				}
				bluePlat--;
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 7 && invincible == 0) {
				invincible = 1;
				invTimer = 3;
				renderType = 2;
				invPlats--;
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 8 && invincible == 0) {
				score += 5;
				timeBonus = 2;
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 8 && invincible == 1) {
				score += 10;
				timeBonus = 2;
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 10) {
				winner = 1;
				exitType = 5;
				if (selectLevel2 == -1) {
					selectLevel2 = 0;
					select = -1;
					selectLevel = -1;
					selectLevel3 = -1;
					endLevel = -1;
				}
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 11) {
				winner = 2;
				exitType = 6;
				if (selectLevel3 == -1) {
					selectLevel2 = -1;
					select = -1;
					selectLevel = -1;
					selectLevel3 = 0;
					endLevel = -1;
				}
			}
			if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 12) {
				winner = 3;
				exitType = 7;
				if (endLevel == -1) {
					endLevel = 0;
					selectLevel2 = -1;
					select = -1;
					selectLevel = -1;
					selectLevel3 = -1;
				}
			}
			vecPlatforms[0].m[pos_mat_x][pos_mat_y] = -1;
		}
	}
	else {
		if(invincible == 0)
			isFalling = 1;
	}
}

void Game_Final::fixPlatforms(float speed)
{

	for (int i = 0; i < no_platforms; i++) {
		vecPlatforms[i].offset -= speed;
		left_dec[i].pos.z += speed;
		right_dec[i].pos.z += speed;
	}

	vecPlatforms[0].auxLimit += speed;
	if (pos_x < 0.5) {
		pos_mat_x = 0;
	}
	if (pos_x >= 0.5 && pos_x < 1.5) {
		pos_mat_x = 1;
	}
	if (pos_x >= 1.5) {
		pos_mat_x = 2;
	}
	
	if (vecPlatforms[0].auxLimit < 1) {
		pos_mat_y = 0;
	}
	if (vecPlatforms[0].auxLimit >= 1 && vecPlatforms[0].auxLimit < 2) {
		pos_mat_y = 1;
	}
	if (vecPlatforms[0].auxLimit >= 2) {
		pos_mat_y = 2;
	}
	
	if (pos_mat_y + 1 > vecPlatforms[0].limit) {
		pos_mat_y = (int)vecPlatforms[0].limit - 1;
	}
	
	if (jumpState == 1) {
		jumpTimer -= speed;
		if (jumpTimer < jumpLimit / 2 && descend == 0) {
			descend = 1;
		}
		if (jumpTimer < 0 && descend == 1) {
			jumpState = 0;
			descend = 0;
		}
	}	
}

void Game_Final::renderPlatforms()
{
	fixLimits();
	float movement = sin(delta)/2;
	glm::mat4 modelMatrix;
	for (int i = 0; i < no_platforms; i++) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				if (vecPlatforms[i].m[x][y] == 1) {
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, - (vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
					RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
				}
				else if (vecPlatforms[i].m[x][y] == -1) {
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x , 0 , -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
					RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0.5,0,0.5) ); //glm::vec3(0.4355f, 0.2314f, 0.4355f)
				}
				else if (vecPlatforms[i].m[x][y] == 2) {
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
					RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0.5 + movement, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.25, 0.25, 0.2));
					RenderObjects(meshes["plane"], shaders["ObjShader"], modelMatrix, "end");

				}
				else if (vecPlatforms[i].m[x][y] == 3) {
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
					RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0.5 + movement, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.25, 0.25, 0.2));
					RenderObjects(meshes["plane"], shaders["ObjShader"], modelMatrix, "cons");
				}
				else if (vecPlatforms[i].m[x][y] == 4) {
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
					RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0.5 + movement, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.25, 0.25, 0.2));
					RenderObjects(meshes["plane"], shaders["ObjShader"], modelMatrix, "speed");
				}
				else if (vecPlatforms[i].m[x][y] == 5) {
					if (level != 3) {
						modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
						modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, -(vecPlatforms[i].offset + y)));
						modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
						RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
						modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
						modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0.5 + movement, -(vecPlatforms[i].offset + y)));
						modelMatrix = glm::scale(modelMatrix, glm::vec3(0.25, 0.25, 0.2));
						RenderObjects(meshes["plane"], shaders["ObjShader"], modelMatrix, "rec");
					}
				}
				else if (vecPlatforms[i].m[x][y] == 6) {
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
					RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0.5 + movement, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.2));
					RenderMonsterMesh(meshes["plane"], shaders["MonsterShader"], modelMatrix, vecPlatforms[i].monster_id);

				}
				else if (vecPlatforms[i].m[x][y] == 7) {
					if (level != 3 && level != 2) {
						modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
						modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, -(vecPlatforms[i].offset + y)));
						modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
						RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
						modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
						modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0.5 + movement, -(vecPlatforms[i].offset + y)));
						modelMatrix = glm::scale(modelMatrix, glm::vec3(0.25, 0.25, 0.2));
						RenderObjects(meshes["plane"], shaders["ObjShader"], modelMatrix, "inv");
					}
				}
				else if (vecPlatforms[i].m[x][y] == 8) {
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
					RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0.5 + movement, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.25, 0.25, 0.2));
					RenderObjects(meshes["plane"], shaders["ObjShader"], modelMatrix, "bonus");
				}
				else if (vecPlatforms[i].m[x][y] == 10 || vecPlatforms[i].m[x][y] == 11 || vecPlatforms[i].m[x][y] == 12) {
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(1, 0.2, 1));
					RenderPlatformMesh(meshes["box"], shaders["BoxShader"], modelMatrix, glm::vec3(0, 0, 0));
					modelMatrix = glm::translate(glm::mat4(1), glm::vec3(0, 0, 3));
					modelMatrix = glm::translate(modelMatrix, glm::vec3(x, 0.75 + movement, -(vecPlatforms[i].offset + y)));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.2));
					RenderObjects(meshes["plane"], shaders["ObjShader"], modelMatrix, "finish");
				}
			}
		}
	}
}

void Game_Final::renderDec() {
	glm::mat4 modelMatrix;
	for (int i = 0; i < no_platforms; i++) {
		modelMatrix = glm::mat4(1);
		modelMatrix = glm::translate(modelMatrix, left_dec[i].pos);
		modelMatrix = glm::rotate(modelMatrix, RADIANS(45), glm::vec3(0, 1, 0));
		modelMatrix = glm::scale(modelMatrix, glm::vec3(2, 3, 1));
		RenderObjects(meshes["decorations"], shaders["BGShader"], modelMatrix, left_dec[i].obj);
	}


	for (int i = 0; i < no_platforms; i++) {
		modelMatrix = glm::mat4(1);
		modelMatrix = glm::translate(modelMatrix, right_dec[i].pos);
		modelMatrix = glm::rotate(modelMatrix, RADIANS(-45), glm::vec3(0, 1, 0));
		modelMatrix = glm::scale(modelMatrix, glm::vec3(2, 3, 1));
		RenderObjects(meshes["decorations"], shaders["BGShader"], modelMatrix, right_dec[i].obj);
	}
}

void Game_Final::fixVector()
{
	for (int i = 0; i < no_platforms-1; i++) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				if (vecPlatforms[i].m[x][y] == 2) {
					redPlat--;
				}
				if (vecPlatforms[i].m[x][y] == 3) {
					yellowPlat--;
				}
				if (vecPlatforms[i].m[x][y] == 4) {
					orangePlat--;
				}
				if (vecPlatforms[i].m[x][y] == 5) {
					greenPlat--;
				}
				if (vecPlatforms[i].m[x][y] == 6) {
					bluePlat--;
				}
				if (vecPlatforms[i].m[x][y] == 7) {
					invPlats--;
				}
				vecPlatforms[i].m[x][y] = vecPlatforms[i + 1].m[x][y];
				
			}
		}

		left_dec[i].obj = left_dec[i + 1].obj;
		left_dec[i].pos = left_dec[i + 1].pos;

		right_dec[i].obj = right_dec[i + 1].obj;
		right_dec[i].pos = right_dec[i + 1].pos;

		vecPlatforms[i].set = vecPlatforms[i + 1].set;
		vecPlatforms[i].limit = vecPlatforms[i + 1].limit;
		vecPlatforms[i].monster_id = vecPlatforms[i + 1].monster_id;
	}
	vecPlatforms[no_platforms - 1].set = setCurrentPlatform(vecPlatforms[no_platforms - 1].m, vecPlatforms[no_platforms - 2].set);
	vecPlatforms[no_platforms - 1].auxLimit = 0;

	left_dec[no_platforms - 1].obj = getObjbyId(rand()% 9);
	left_dec[no_platforms - 1].pos = glm::vec3(left_dec_pos, 1, 3 - ((no_platforms - 1) * 2));

	right_dec[no_platforms - 1].obj = getObjbyId(rand() % 9);
	right_dec[no_platforms - 1].pos = glm::vec3(right_dec_pos, 1, 3 - ((no_platforms - 1) * 2));
	for (int j = 0; j < 3; j++) {
		for (int k = 0; k < 3; k++) {
			if (vecPlatforms[no_platforms - 1].m[j][k] == 6) {
				vecPlatforms[no_platforms - 1].monster_id = rand() % 5;
			}
		}
	}
	fixLimits();
}

void Game_Final::fixVector2()
{
	for (int i = 0; i < no_platforms - 1; i++) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				vecPlatforms[i].m[x][y] = vecPlatforms[i + 1].m[x][y];
			}
		}
		vecPlatforms[i].set = vecPlatforms[i + 1].set;
		vecPlatforms[i].limit = vecPlatforms[i + 1].limit;
		vecPlatforms[i].monster_id = vecPlatforms[i + 1].monster_id;
	}
	setCurrentPlatform2(vecPlatforms[no_platforms - 1].m, 19);
	vecPlatforms[no_platforms - 1].set = 19;
	vecPlatforms[no_platforms - 1].auxLimit = 0;
	vecPlatforms[no_platforms - 1].monster_id = rand() % 5;
	fixLimits();
}

void Game_Final::FrameStart()
{
	// clears the color buffer (using the previously set color) and depth buffer
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glm::ivec2 resolution = window->GetResolution();
	// sets the screen area where to draw
	glViewport(0, 0, resolution.x, resolution.y);
}

void Game_Final::fixLimits() 
{
	int limit = -99;
	int pos = -1;
	for (int i = 0; i < no_platforms; i++) {
		pos = -1;
		if (vecPlatforms[i].set == 19) {
			pos = 0;
		}
		else {
			for (int x = 0; x < 3; x++) {
				for (int y = 0; y < 3; y++) {
					if (vecPlatforms[i].m[x][y] != 0) {
						if (pos <= y) {
							pos = y ;
						}
					}
				}
			}
		}
		vecPlatforms[i].limit = (float)pos + 1;
	}
	for (int i = 1; i < no_platforms; i++) {
		vecPlatforms[i].offset = vecPlatforms[i - 1].offset + vecPlatforms[i - 1].limit;
	}
}

int Game_Final::checkFall() {
	if (vecPlatforms[0].m[pos_mat_x][pos_mat_y] == 0) {
		return 1;
	}
	return 0;
}

void Game_Final::Update(float deltaTimeSeconds)
{
	if (deltaOk == 0) {
		delta += 0.25f * deltaTimeSeconds;
		if (delta >= 0.25f) {
			deltaOk = 1;
		}
	}
	else {
		delta -= 0.25f * deltaTimeSeconds;
		if (delta <= -0.25f) {
			deltaOk = 0;
		}
	}
	
	
	glm::mat4 modelMatrix = glm::mat4(1);
	if (idle == 1) {
		
		if (menuSelect == 0) {
			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.32, 0.07, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(-0.065, 2.75, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.33, 0.08, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(-0.065, 2.4, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
			if (enter2 == 1) {
				selectLevel = 0;
				enter3 = 0;
				enter2 = 0;
				menuSelect = -1;
				idle = 2;
			}
		}
		if (menuSelect == 1) {
			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.2, 0.07, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(-0.7, 0, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.21, 0.08, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(-0.675, 0, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
			if (enter2 == 1) {
				idle = 0;
				select = -1;
				selectLevel = -1;
				selectLevel2 = -1;
				selectLevel3 = -1;
				endLevel = -1;
				enter2 = 0;
				enter3 = 0;
				menuSelect = -1;
				score = 0;
				isFalling = 0;
				playAgain();
			}
		}
		if (menuSelect == 2) {
			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.12f, 0.07f, 0.2f));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(-1.825f, -2.75f, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.13f, 0.08f, 0.2f));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(-1.7f, -2.4f, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
			if (enter2 == 1) {
				exit(0);
			}
		}
		RenderText("Select Level", 15, 10, 2.5f, 0.02f);
		RenderText("Endless", 15, 0, 2.5f, 0.02f);
		RenderText("Quit", 15, -10, 2.5f, 0.02f);
	}
	else if (idle == 2) {

		if (selectLevel == 0) {
			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.27, 0.07, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(0, 4.1, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.28, 0.08, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(0, 3.6, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
			if (enter3 == 1) {
				idle = 0;
				select = -1;
				selectLevel = -1;
				selectLevel2 = -1;
				selectLevel3 = -1;
				endLevel = -1;
				enter2 = 0;
				enter3 = 0;
				menuSelect = -1;
				playLevel1();
			}
		}
		if (selectLevel == 1) {
			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.27, 0.07, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(0, 1.4, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.28, 0.08, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(0, 1.2, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
			if (enter3 == 1) {
				idle = 0;
				select = -1;
				selectLevel = -1;
				selectLevel2 = -1;
				selectLevel3 = -1;
				endLevel = -1;
				enter2 = 0;
				enter3 = 0;
				menuSelect = -1;
				playLevel2();
			}
		}
		if (selectLevel == 2) {
			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.27, 0.07, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(0, -1.35, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.28, 0.08, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(0, -1.2, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
			if (enter3 == 1) {
				idle = 0;
				select = -1;
				selectLevel = -1;
				selectLevel2 = -1;
				selectLevel3 = -1;
				endLevel = -1;
				enter2 = 0;
				enter3 = 0;
				menuSelect = -1;
				playLevel3();
			}
		}
		if (selectLevel == 3) {
			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.27, 0.07, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(0, -4.2, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

			modelMatrix = glm::mat4(1);
			modelMatrix = glm::scale(modelMatrix, glm::vec3(0.28, 0.08, 0.2));
			modelMatrix = glm::translate(modelMatrix, glm::vec3(0, -3.7, 1));
			RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
			if (enter3 == 1) {
				idle = 1;
				select = -1;
				selectLevel = -1;
				selectLevel2 = -1;
				selectLevel3 = -1;
				endLevel = -1;
				enter2 = 0;
				enter3 = 0;
				menuSelect = 0;
			}
		}
		RenderText("Level unu", 10, 15, 2.35f, 0.02f);
		RenderText("Level doi", 10, 5, 2.35f, 0.02f);
		RenderText("Level trei", 10, -5, 2.35f, 0.02f);
		RenderText("Main Menu", 10, -15, 2.5f, 0.02f);
	}
	else {
		if (exitType == 0) {
			if (level == 0) {
				MainGame_Final(deltaTimeSeconds);
			}
			if (level == 1) {
				Level(deltaTimeSeconds);
			}
			if (level == 2) {
				Level(deltaTimeSeconds);
			}
			if (level == 3) {
				Level(deltaTimeSeconds);
			}

		}
		else if (exitType == 5) {
			RenderText("Winner", 5, 2.5f, 2.5f, 0.055f);
			RenderText("Felicitari! Ai terminat primul nivel", 40, -5, 2.5f, 0.015f);
			if (selectLevel2 == 0) {
				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.275f, 0.09f, 0.2));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(-1.1875f, -4.5f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.285f, 0.1f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(-1.1475f, -4.05f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
				if (enter == 1) {
					playLevel2();
				}
			}
			else {
				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.275f, 0.09f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(1.45f, -4.5f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.285f, 0.1f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(1.4f, -4.05f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
				if (enter == 1) {
					idle = 1;
					select = -1;
					selectLevel = -1;
					selectLevel2 = -1;
					selectLevel3 = -1;
					endLevel = -1;
					enter2 = 0;
					enter3 = 0;
					menuSelect = 0;
				}
			}
			RenderText("Next Level", 27.5f, -20, 2.5f, 0.02f);
			RenderText("Main Menu", -10, -20, 2.5f, 0.02f);
		}
		else if (exitType == 6) {
			RenderText("Winner", 5, 2.5f, 2.5f, 0.055f);
			RenderText("Felicitari! Ai terminat al doilea nivel", 40, -5, 2.5f, 0.015f);
			if (selectLevel3 == 0) {
				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.275f, 0.09f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(-1.1875f, -4.5f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.285f, 0.1f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(-1.1475f, -4.05f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
				if (enter == 1) {
					playLevel3();
				}
			}
			else {
				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.275f, 0.09f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(1.45f, -4.5f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.285f, 0.1f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(1.4f, -4.05f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
				if (enter == 1) {
					idle = 1;
					select = -1;
					selectLevel = -1;
					selectLevel2 = -1;
					selectLevel3 = -1;
					endLevel = -1;
					enter2 = 0;
					enter3 = 0;
					menuSelect = 0;
				}
			}
			RenderText("Next Level", 27.5f, -20, 2.5f, 0.02f);
			RenderText("Main Menu", -10, -20, 2.5f, 0.02f);
		}
		else if (exitType == 7) {
			RenderText("Winner", 5, 2.5f, 2.5f, 0.055f);
			RenderText("Felicitari! Ai terminat ultimul nivel", 40, -5, 2.5f, 0.015f);
			if (endLevel == 0) {
				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.33f, 0.09f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(-0.82f, -4.5f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.34f, 0.1f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(-0.79f, -4.05f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
				if (enter == 1) {
					playLevel3();
				}
			}
			else {
				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.275f, 0.09f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(1.45f, -4.5f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.285f, 0.1f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(1.4f, -4.05f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
				if (enter == 1) {
					idle = 1;
					select = -1;
					selectLevel = -1;
					selectLevel2 = -1;
					selectLevel3 = -1;
					endLevel = -1;
					enter2 = 0;
					enter3 = 0;
					menuSelect = 0;
				}
			}
			RenderText("Replay Level", 27.5f, -20, 2.5f, 0.02f);
			RenderText("Main Menu", -10, -20, 2.5f, 0.02f);
		}
		else {
			RenderText("Game", 10, 2.5f, 2.5f, 0.055f);
			RenderText("Over", -2.5f, 2.5f, 2.2f, 0.055f);
			if (exitType == 1) {
				RenderText("Ai ramas fara combustibil", 31, -5, 2.5f, 0.015f);
			}
			if (exitType == 2) {
				RenderText("Ai atins o platforma rosie", 32, -5, 2.5f, 0.015f);
			}
			if (exitType == 3) {
				RenderText("Ai cazut de pe platforma", 30, -5, 2.5f, 0.015f);
			}
			if (exitType == 4) {
				RenderText("Ai lovit un obstacol", 25, -5, 2.5f, 0.015f);
			}

			if (select == 0) {
				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.275f, 0.09f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(-1.1875f, -4.5f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.285f, 0.1f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(-1.1475f, -4.05f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
				if (enter == 1) {
					if (level == 1) {
						playLevel1();
					}
					else if (level == 2) {
						playLevel2();
					}
					else if (level == 3) {
						playLevel3();
					}
					else {
						playAgain();
					}
					
				}
			}
			else {
				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.275f, 0.09f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(1, -4.5f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(0, 0, 0));

				modelMatrix = glm::mat4(1);
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.285f, 0.1f, 0.2f));
				modelMatrix = glm::translate(modelMatrix, glm::vec3(0.96f, -4.05f, 1));
				RenderFixedMesh(meshes["plane"], shaders["FixedShader"], modelMatrix, glm::vec3(1, 1, 1));
				if (enter == 1) {
					exit(0);
				}
			}
			RenderText("Play Again", 27.5f, -20, 2.5f, 0.02f);
			RenderText("Quit", -10, -20, 2.5f, 0.02f);

		}
	}

}

void Game_Final::playAgain() {
	redLimit = 1;
	greenLimit = 10;
	blueLimit = 0;
	yellowLimit = 2;
	orangeLimit = 0;
	invLimit = 3;
	redPlat = 0;
	greenPlat = 0;
	yellowPlat = 0;
	orangePlat = 0;
	bluePlat = 0;
	vecPlatforms = createVector();
	left_dec = createDec(left_dec_pos);
	right_dec = createDec(right_dec_pos);
	z = 0;
	level = 0;
	isFalling = 0;
	jumpState = 0;
	select = -1;
	enter = 0;
	pos_x = 1;
	combustibil = 100;
	plat_speed = 0;
	plat_aux_speed = 2;
	pos_mat_y = 0;
	pos_mat_x = 1;
	jumpSpeed = 0.35f;
	jumpState = 0;
	exitType = 0;
	camera_x = 0;
	camera_y = 0.5;
	speedTimer = 0;
	renderType = 0;
	score = 0;
	lightPosition = glm::vec3(1, 2, 3);
}

void Game_Final::playLevel1() {
	createLevels();
	lightPosition = glm::vec3(1, 2, 3);
	level = 1;
	pos_mat_y = 0;
	pos_mat_x = 1;
	for (int i = 0; i < no_platforms; i++) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				vecPlatforms[i].m[x][y] = lvl1[i].m[x][y];
				cout << vecPlatforms[i].m[x][y] << " ";
			}
			cout << endl;
		}
		vecPlatforms[i].set = lvl1[i].set;
		vecPlatforms[i].auxLimit = lvl1[i].auxLimit;
		vecPlatforms[i].limit = lvl1[i].limit;
		vecPlatforms[i].offset = lvl1[i].offset;
	}
	fixLimits();
	z = 0;
	isFalling = 0;
	select = -1;
	selectLevel = -1;
	selectLevel2 = -1;
	selectLevel3 = -1;
	enter = 0;
	pos_x = 1;
	combustibil = 100;
	plat_speed = 0;
	plat_aux_speed = 2;
	jumpSpeed = 0.35f;
	jumpState = 0;
	exitType = 0;
	camera_x = 0;
	camera_y = 0.5;
	speedTimer = 0;
	renderType = 0;
	score = 0;
}

void Game_Final::playLevel2() {
	createLevels();
	lightPosition = glm::vec3(1, 2, 3);
	level = 2;
	pos_mat_y = 0;
	pos_mat_x = 1;
	for (int i = 0; i < no_platforms; i++) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				vecPlatforms[i].m[x][y] = lvl2[i].m[x][y];
				cout << vecPlatforms[i].m[x][y] << " ";
				if (vecPlatforms[i].m[x][y] == 6) {
					vecPlatforms[i].monster_id = 3;
				}
			}
			cout << endl;
		}
		vecPlatforms[i].set = lvl2[i].set;
		vecPlatforms[i].auxLimit = lvl2[i].auxLimit;
		vecPlatforms[i].limit = lvl2[i].limit;
		vecPlatforms[i].offset = lvl2[i].offset;
	}
	fixLimits();
	z = 0;
	isFalling = 0;
	select = -1;
	selectLevel = -1;
	selectLevel2 = -1;
	selectLevel3 = -1;
	endLevel = -1;
	enter = 0;
	pos_x = 1;
	combustibil = 100;
	plat_speed = 0;
	plat_aux_speed = 2;
	jumpSpeed = 0.35f;
	jumpState = 0;
	exitType = 0;
	camera_x = 0;
	camera_y = 0.5;
	speedTimer = 0;
	renderType = 0;
	score = 0;
}

void Game_Final::playLevel3() {
	createLevels();
	lightPosition = glm::vec3(1, 2, 3);
	level = 3;
	pos_mat_y = 0;
	pos_mat_x = 1;
	for (int i = 0; i < no_platforms; i++) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				vecPlatforms[i].m[x][y] = lvl3[i].m[x][y];
				cout << vecPlatforms[i].m[x][y] << " ";
			}
			cout << endl;
		}
		vecPlatforms[i].set = lvl3[i].set;
		vecPlatforms[i].auxLimit = lvl3[i].auxLimit;
		vecPlatforms[i].limit = lvl3[i].limit;
		vecPlatforms[i].offset = lvl3[i].offset;
	}
	fixLimits();
	z = 0;
	isFalling = 0;
	select = -1;
	selectLevel = -1;
	selectLevel2 = -1;
	selectLevel3 = -1;
	endLevel = -1;
	enter = 0;
	pos_x = 1;
	combustibil = 100;
	plat_speed = 0;
	plat_aux_speed = 2;
	jumpSpeed = 0.35f;
	jumpState = 0;
	exitType = 0;
	camera_x = 0;
	camera_y = 0.5f;
	speedTimer = 0;
	renderType = 0;
	score = 0;
}

void Game_Final::MainGame_Final(float deltaTimeSeconds) {
	if (score >= 600) {
		redLimit = 5;
		greenLimit = 2;
		blueLimit = 6;
		yellowLimit = 8;
		orangeLimit = 5;
		invLimit = 0;
	}
	else if (score >= 400) {
		redLimit = 4;
		greenLimit = 5;
		blueLimit = 4;
		yellowLimit = 6;
		orangeLimit = 3;
		invLimit = 1;
	}
	else if (score >= 200) {
		redLimit = 3;
		greenLimit = 7;
		blueLimit = 2;
		yellowLimit = 4;
		orangeLimit = 1;
		invLimit = 2;
	}
	else {
		redLimit = 1;
		greenLimit = 10;
		blueLimit = 0;
		yellowLimit = 2;
		orangeLimit = 0;
		invLimit = 3;
	}
	renderScore((int)score);
	dist += 1.5f * deltaTimeSeconds;
	if (isFalling == 0) {
		if (invincible == 0) {
			score += 1.5f * plat_aux_speed * deltaTimeSeconds;
		}
		else {
			score += 3* plat_aux_speed * deltaTimeSeconds;
		}
		
	}
	if (changeSpeed == 0) {
		speedTimer -= deltaTimeSeconds;
		
		if (speedTimer < 0) {
			speedTimer = 3;
			changeSpeed = 1;
			plat_aux_speed = saveSpeed;
			renderType = 0;
		}
	}
	else {
		if (combustibil >= 100) {
			combustibil = 100;
		}
		if (invincible == 0 && isFalling == 0) {
			
			combustibil -= deltaTimeSeconds * plat_aux_speed;
			if (combustibil <= 0) {
				if (select == -1) {
					select = 0;
				}
				exitType = 1;
			}
		}
		
	}

	glm::mat4 fuelMatrix = glm::mat4(1);
	fuelMatrix = glm::translate(fuelMatrix, glm::vec3(-0.95, -0.95f, 0));
	fuelMatrix = glm::scale(fuelMatrix, glm::vec3( 0.03f, 0.3f, 0.5f));
	fuelMatrix = glm::translate(fuelMatrix, glm::vec3(0, combustibil / 100, 0));
	fuelMatrix = glm::scale(fuelMatrix, glm::vec3(1, combustibil / 100, 1));	
	
	RenderFixedMesh(meshes["plane"], shaders["FixedShader"], fuelMatrix, glm::vec3(1, 1, 0));

	glm::mat4 fuelBGMatrix = glm::mat4(1);
	fuelBGMatrix = glm::translate(fuelBGMatrix, glm::vec3(-0.95, -0.65, 0));
	fuelBGMatrix = glm::scale(fuelBGMatrix, glm::vec3(0.035f, 0.31f, 0.5f));
	RenderFixedMesh(meshes["plane"], shaders["FixedShader"], fuelBGMatrix, glm::vec3(0.7, 0.7, 0.7));

	if (invincible == 1) {
		glm::mat4 invMatrix = glm::mat4(1);
		invMatrix = glm::translate(invMatrix, glm::vec3(-0.85, -0.95f, 0));
		invMatrix = glm::scale(invMatrix, glm::vec3(0.03f, 0.3f, 0.5f));
		invMatrix = glm::translate(invMatrix, glm::vec3(0, invTimer/3, 0));
		invMatrix = glm::scale(invMatrix, glm::vec3(1, invTimer / 3, 1));

		RenderFixedMesh(meshes["plane"], shaders["FixedShader"], invMatrix, glm::vec3(1, 0.5, 1));

		glm::mat4 invBGMatrix = glm::mat4(1);
		invBGMatrix = glm::translate(invBGMatrix, glm::vec3(-0.85, -0.65, 0));
		invBGMatrix = glm::scale(invBGMatrix, glm::vec3(0.035f, 0.31f, 0.5f));
		RenderFixedMesh(meshes["plane"], shaders["FixedShader"], invBGMatrix, glm::vec3(0.7, 0.7, 0.7));

	}
	glm::mat4 speedMatrix = glm::mat4(1);
	speedMatrix = glm::translate(speedMatrix, glm::vec3(-0.75, -0.95f, 0));
	speedMatrix = glm::scale(speedMatrix, glm::vec3(0.03f, 0.3f, 0.5f));
	speedMatrix = glm::translate(speedMatrix, glm::vec3(0, plat_aux_speed / 6, 0));
	speedMatrix = glm::scale(speedMatrix, glm::vec3(1, plat_aux_speed / 6, 1));
	if (plat_aux_speed < 3) {
		RenderFixedMesh(meshes["plane"], shaders["FixedShader"], speedMatrix, glm::vec3(0, 1, 0));
	}
	else {
		RenderFixedMesh(meshes["plane"], shaders["FixedShader"], speedMatrix, glm::vec3(1, 0, 0));
	}
	
	

	glm::mat4 speedBGMatrix = glm::mat4(1);
	speedBGMatrix = glm::translate(speedBGMatrix, glm::vec3(-0.75, -0.65, 0));
	speedBGMatrix = glm::scale(speedBGMatrix, glm::vec3(0.035f, 0.31f, 0.5f));
	RenderFixedMesh(meshes["plane"], shaders["FixedShader"], speedBGMatrix, glm::vec3(0.7, 0.7, 0.7));


	fixPlatforms(plat_aux_speed * deltaTimeSeconds);
	if (invincible == 0) {
		if (isFalling == 0) {
			if (cameraState == 1) {
				if (jumpState == 0)
				{
					placePlayer();
					glm::mat4 modelMatrix = glm::mat4(1);
					modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, 0.35, 3));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
					if (renderType == 0) {
						RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
					}
					else if (renderType == 1) {
						modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
						RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
					}
					else if (renderType == 2) {
						RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

					}
				}
				else {
					if (descend == 0) {
						jumpSpeed += 1.75f * deltaTimeSeconds;
						glm::mat4 modelMatrix = glm::mat4(1);
						modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3));
						modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
						if (renderType == 0) {
							RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
						}
						else if (renderType == 1) {
							modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
							RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
						}
						else if (renderType == 2) {
							RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

						}
					}
					else {
						jumpSpeed -= 1.75f * deltaTimeSeconds;
						if (jumpSpeed < 0.35) {
							jumpSpeed = 0.35f;
						}
						glm::mat4 modelMatrix = glm::mat4(1);
						modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3));
						modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
						if (renderType == 0) {
							RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
						}
						else if (renderType == 1) {
							modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
							RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
						}
						else if (renderType == 2) {
							RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

						}
					}
				}
			}
			else {
				if (jumpState == 0)
				{
					placePlayer();
				}
				else {
					if (descend == 0) {
						camera_y += 1.75f * deltaTimeSeconds;
					}
					else {
						camera_y -= 1.75f * deltaTimeSeconds;
						if (camera_y < 0.5) {
							camera_y = 0.5f;
						}
					}
					camera->changeCamera(cameraPos, cameraState, camera_x, camera_y);
				}
			}
			if (vecPlatforms[0].offset + vecPlatforms[0].limit < 0 && z == 0) {
				fixVector();
				vecPlatforms[0].offset = 0;
				vecPlatforms[0].auxLimit = 0;

			}
			
			renderPlatforms();
			renderDec();
		}
		else {
			if (cameraState == 1) {
				jumpSpeed -= 3 * deltaTimeSeconds;
				glm::mat4 modelMatrix = glm::mat4(1);
				modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3 + jumpSpeed));
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
				if (renderType == 0) {
					RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
				}
				else if (renderType == 1) {
					modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
					RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
				}
				else if (renderType == 2) {
					RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

				}
				z = 1;
				if (jumpSpeed < -3) {
					if (select == -1) {
						select = 0;
					}
					exitType = 3;
				}
			}
			if (cameraState == 0) {
				camera_y -= 3 * deltaTimeSeconds;
				camera->changeCamera(cameraPos, cameraState, camera_x, camera_y);
				z = 1;
				if (camera_y < -3) {
					if (select == -1) {
						select = 0;
					}
					exitType = 3;
				}
			}
		}
	}
	else {
		invTimer -= deltaTimeSeconds;
		if (invTimer < 0) {
			invincible = 0;
			renderType = 0;
		}
		if (cameraState == 1) {
			if (jumpState == 0)
			{
				placePlayer();
				glm::mat4 modelMatrix = glm::mat4(1);
				modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, 0.35, 3));
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
				if (renderType == 0) {
					RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
				}
				else if (renderType == 1) {
					modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
					RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
				}
				else if (renderType == 2) {
					RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

				}
			}
			else {
				if (descend == 0) {
					jumpSpeed += 1.75f * deltaTimeSeconds;
					glm::mat4 modelMatrix = glm::mat4(1);
					modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
					if (renderType == 0) {
						RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
					}
					else if (renderType == 1) {
						modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
						RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
					}
					else if (renderType == 2) {
						RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

					}
				}
				else {
					jumpSpeed -= 1.75f * deltaTimeSeconds;
					if (jumpSpeed < 0.35) {
						jumpSpeed = 0.35f;
					}
					glm::mat4 modelMatrix = glm::mat4(1);
					modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
					if (renderType == 0) {
						RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
					}
					else if(renderType == 1){
						modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
						RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
					}
					else if (renderType == 2) {
						RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

					}
				}
			}
		}
		else {
			if (jumpState == 0)
			{
				placePlayer();
			}
			else {
				if (descend == 0) {
					camera_y += 1.75f * deltaTimeSeconds;
				}
				else {
					camera_y -= 1.75f * deltaTimeSeconds;
					if (camera_y < 0.5) {
						camera_y = 0.5f;
					}
				}
				camera->changeCamera(cameraPos, cameraState, camera_x, camera_y);
			}
		}
		if (vecPlatforms[0].offset + vecPlatforms[0].limit < 0 && z == 0) {
			fixVector();
			vecPlatforms[0].offset = 0;
			vecPlatforms[0].auxLimit = 0;

		}
		renderPlatforms();
		renderDec();
	}
}

void Game_Final::Level(float deltaTimeSeconds) {
	dist += 1.5f * deltaTimeSeconds;
	if (isFalling == 0) {
		score += 5 * deltaTimeSeconds;
	}
	if (changeSpeed == 0) {
		speedTimer -= deltaTimeSeconds;

		if (speedTimer < 0) {
			speedTimer = 3;
			changeSpeed = 1;
			plat_aux_speed = saveSpeed;
			renderType = 0;
		}
	}
	else {
		if (combustibil >= 100) {
			combustibil = 100;
		}
		if (invincible == 0 && isFalling == 0) {

			combustibil -= deltaTimeSeconds * plat_aux_speed;
			if (combustibil <= 0) {
				if (select == -1) {
					select = 0;
				}
				exitType = 1;
			}
		}

	}

	glm::mat4 fuelMatrix = glm::mat4(1);
	fuelMatrix = glm::translate(fuelMatrix, glm::vec3(-0.95, -0.95f, 0));
	fuelMatrix = glm::scale(fuelMatrix, glm::vec3(0.03f, 0.3f, 0.5f));
	fuelMatrix = glm::translate(fuelMatrix, glm::vec3(0, combustibil / 100, 0));
	fuelMatrix = glm::scale(fuelMatrix, glm::vec3(1, combustibil / 100, 1));

	RenderFixedMesh(meshes["plane"], shaders["FixedShader"], fuelMatrix, glm::vec3(1, 1, 0));

	glm::mat4 fuelBGMatrix = glm::mat4(1);
	fuelBGMatrix = glm::translate(fuelBGMatrix, glm::vec3(-0.95, -0.65, 0));
	fuelBGMatrix = glm::scale(fuelBGMatrix, glm::vec3(0.035f, 0.31f, 0.5f));
	RenderFixedMesh(meshes["plane"], shaders["FixedShader"], fuelBGMatrix, glm::vec3(0.7, 0.7, 0.7));

	if (invincible == 1) {
		glm::mat4 invMatrix = glm::mat4(1);
		invMatrix = glm::translate(invMatrix, glm::vec3(-0.85, -0.95f, 0));
		invMatrix = glm::scale(invMatrix, glm::vec3(0.03f, 0.3f, 0.5f));
		invMatrix = glm::translate(invMatrix, glm::vec3(0, invTimer / 3, 0));
		invMatrix = glm::scale(invMatrix, glm::vec3(1, invTimer / 3, 1));

		RenderFixedMesh(meshes["plane"], shaders["FixedShader"], invMatrix, glm::vec3(1, 0.5, 1));

		glm::mat4 invBGMatrix = glm::mat4(1);
		invBGMatrix = glm::translate(invBGMatrix, glm::vec3(-0.85, -0.65, 0));
		invBGMatrix = glm::scale(invBGMatrix, glm::vec3(0.035f, 0.31f, 0.5f));
		RenderFixedMesh(meshes["plane"], shaders["FixedShader"], invBGMatrix, glm::vec3(0.7, 0.7, 0.7));

	}
	glm::mat4 speedMatrix = glm::mat4(1);
	speedMatrix = glm::translate(speedMatrix, glm::vec3(-0.75, -0.95f, 0));
	speedMatrix = glm::scale(speedMatrix, glm::vec3(0.03f, 0.3f, 0.5f));
	speedMatrix = glm::translate(speedMatrix, glm::vec3(0, plat_aux_speed / 6, 0));
	speedMatrix = glm::scale(speedMatrix, glm::vec3(1, plat_aux_speed / 6, 1));
	if (plat_aux_speed < 3) {
		RenderFixedMesh(meshes["plane"], shaders["FixedShader"], speedMatrix, glm::vec3(0, 1, 0));
	}
	else {
		RenderFixedMesh(meshes["plane"], shaders["FixedShader"], speedMatrix, glm::vec3(1, 0, 0));
	}



	glm::mat4 speedBGMatrix = glm::mat4(1);
	speedBGMatrix = glm::translate(speedBGMatrix, glm::vec3(-0.75, -0.65, 0));
	speedBGMatrix = glm::scale(speedBGMatrix, glm::vec3(0.035f, 0.31f, 0.5f));
	RenderFixedMesh(meshes["plane"], shaders["FixedShader"], speedBGMatrix, glm::vec3(0.7, 0.7, 0.7));


	fixPlatforms(plat_aux_speed * deltaTimeSeconds);
	if (invincible == 0) {
		if (isFalling == 0) {
			if (cameraState == 1) {
				if (jumpState == 0)
				{
					placePlayer();
					glm::mat4 modelMatrix = glm::mat4(1);
					modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, 0.35, 3));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
					if (renderType == 0) {
						RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
					}
					else if (renderType == 1) {
						modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
						RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
					}
					else if (renderType == 2) {
						RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

					}
				}
				else {
					if (descend == 0) {
						jumpSpeed += 1.75f * deltaTimeSeconds;
						glm::mat4 modelMatrix = glm::mat4(1);
						modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3));
						modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
						if (renderType == 0) {
							RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
						}
						else if (renderType == 1) {
							modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
							RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
						}
						else if (renderType == 2) {
							RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

						}
					}
					else {
						jumpSpeed -= 1.75f * deltaTimeSeconds;
						if (jumpSpeed < 0.35) {
							jumpSpeed = 0.35f;
						}
						glm::mat4 modelMatrix = glm::mat4(1);
						modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3));
						modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
						if (renderType == 0) {
							RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
						}
						else if (renderType == 1) {
							modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
							RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
						}
						else if (renderType == 2) {
							RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

						}
					}
				}
			}
			else {
				if (jumpState == 0)
				{
					placePlayer();
				}
				else {
					if (descend == 0) {
						camera_y += 1.75f * deltaTimeSeconds;
					}
					else {
						camera_y -= 1.75f * deltaTimeSeconds;
						if (camera_y < 0.5) {
							camera_y = 0.5f;
						}
					}
					camera->changeCamera(cameraPos, cameraState, camera_x, camera_y);
				}
			}
			if (vecPlatforms[0].offset + vecPlatforms[0].limit < 0 && z == 0) {
				fixVector2();
				vecPlatforms[0].offset = 0;
				vecPlatforms[0].auxLimit = 0;

			}
			renderPlatforms();
		}
		else {
			if (cameraState == 1) {
				jumpSpeed -= 3 * deltaTimeSeconds;
				glm::mat4 modelMatrix = glm::mat4(1);
				modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3 + jumpSpeed));
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
				if (renderType == 0) {
					RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
				}
				else if (renderType == 1) {
					modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
					RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
				}
				else if (renderType == 2) {
					RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

				}
				z = 1;
				if (jumpSpeed < -3) {
					if (select == -1) {
						select = 0;
					}
					exitType = 3;
				}
			}
			if (cameraState == 0) {
				camera_y -= 3 * deltaTimeSeconds;
				camera->changeCamera(cameraPos, cameraState, camera_x, camera_y);
				z = 1;
				if (camera_y < -3) {
					if (select == -1) {
						select = 0;
					}
					exitType = 3;
				}
			}
		}
	}
	else {
		invTimer -= deltaTimeSeconds;
		if (invTimer < 0) {
			invincible = 0;
			renderType = 0;
		}
		if (cameraState == 1) {
			if (jumpState == 0)
			{
				placePlayer();
				glm::mat4 modelMatrix = glm::mat4(1);
				modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, 0.35, 3));
				modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
				if (renderType == 0) {
					RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
				}
				else if (renderType == 1) {
					modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
					RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
				}
				else if (renderType == 2) {
					RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

				}
			}
			else {
				if (descend == 0) {
					jumpSpeed += 1.75f * deltaTimeSeconds;
					glm::mat4 modelMatrix = glm::mat4(1);
					modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
					if (renderType == 0) {
						RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
					}
					else if (renderType == 1) {
						modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
						RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
					}
					else if (renderType == 2) {
						RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

					}
				}
				else {
					jumpSpeed -= 1.75f * deltaTimeSeconds;
					if (jumpSpeed < 0.35) {
						jumpSpeed = 0.35f;
					}
					glm::mat4 modelMatrix = glm::mat4(1);
					modelMatrix = glm::translate(modelMatrix, glm::vec3(pos_x, jumpSpeed, 3));
					modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5, 0.5, 0.5));
					if (renderType == 0) {
						RenderColorMesh(meshes["sphere"], shaders["ColorShader"], modelMatrix, sphereColor);
					}
					else if (renderType == 1) {
						modelMatrix = glm::rotate(modelMatrix, RADIANS(90), glm::vec3(0, 1, 1));
						RenderSphere(meshes["sphere"], shaders["SphereShader"], modelMatrix);
					}
					else if (renderType == 2) {
						RenderSphere(meshes["sphere"], shaders["SphereShader2"], modelMatrix);

					}
				}
			}
		}
		else {
			if (jumpState == 0)
			{
				placePlayer();
			}
			else {
				if (descend == 0) {
					camera_y += 1.75f * deltaTimeSeconds;
				}
				else {
					camera_y -= 1.75f * deltaTimeSeconds;
					if (camera_y < 0.5) {
						camera_y = 0.5f;
					}
				}
				camera->changeCamera(cameraPos, cameraState, camera_x, camera_y);
			}
		}
		if (vecPlatforms[0].offset + vecPlatforms[0].limit < 0 && z == 0) {
			fixVector2();
			vecPlatforms[0].offset = 0;
			vecPlatforms[0].auxLimit = 0;

		}
		renderPlatforms();
	}
}

void Game_Final::FrameEnd()
{
	DrawCoordinatSystem(camera->GetViewMatrix(), projectionMatrix);
}

void Game_Final::RenderObjects(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix, char* obj) {
	if (!mesh || !shader || !shader->program)
		return;

	// render an object using the specified shader and the specified position
	shader->Use();


	int light_position = glGetUniformLocation(shader->program, "light_position");
	glUniform3f(light_position, lightPosition.x, lightPosition.y, lightPosition.z);

	int light_direction = glGetUniformLocation(shader->program, "light_direction");
	glUniform3f(light_direction, lightDirection.x, lightDirection.y, lightDirection.z);

	glm::vec3 eyePosition = cameraPos;
	int eye_position = glGetUniformLocation(shader->program, "eye_position");
	glUniform3f(eye_position, eyePosition.x, eyePosition.y, eyePosition.z);

	int material_shininess = glGetUniformLocation(shader->program, "material_shininess");
	glUniform1i(material_shininess, materialShininess);

	int material_kd = glGetUniformLocation(shader->program, "material_kd");
	glUniform1f(material_kd, materialKd);

	int material_ks = glGetUniformLocation(shader->program, "material_ks");
	glUniform1f(material_ks, materialKs);

	glUniformMatrix4fv(shader->loc_view_matrix, 1, GL_FALSE, glm::value_ptr(camera->GetViewMatrix()));
	glUniformMatrix4fv(shader->loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));
	glUniformMatrix4fv(shader->loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));

	int aux_loc = glGetUniformLocation(shader->program, "aux");
	glUniform1f(aux_loc, delta);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, mapText[obj]->GetTextureID());
	glUniform1i(glGetUniformLocation(shader->program, "texture_1"), 0);

	glBindVertexArray(mesh->GetBuffers()->VAO);
	glDrawElements(mesh->GetDrawMode(), static_cast<int>(mesh->indices.size()), GL_UNSIGNED_SHORT, 0);
}

void Game_Final::RenderSphere(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix)
{
	if (!mesh || !shader || !shader->program)
		return;

	// render an object using the specified shader and the specified position
	shader->Use();
	int dist_pos = glGetUniformLocation(shader->program, "dist");
	glUniform1f(dist_pos, dist);
	
	int light_position = glGetUniformLocation(shader->program, "light_position");
	glUniform3f(light_position, lightPosition.x, lightPosition.y, lightPosition.z);

	int light_direction = glGetUniformLocation(shader->program, "light_direction");
	glUniform3f(light_direction, lightDirection.x, lightDirection.y, lightDirection.z);

	glm::vec3 eyePosition = cameraPos;
	int eye_position = glGetUniformLocation(shader->program, "eye_position");
	glUniform3f(eye_position, eyePosition.x, eyePosition.y, eyePosition.z);

	int material_shininess = glGetUniformLocation(shader->program, "material_shininess");
	glUniform1i(material_shininess, materialShininess);

	int material_kd = glGetUniformLocation(shader->program, "material_kd");
	glUniform1f(material_kd, materialKd);

	int material_ks = glGetUniformLocation(shader->program, "material_ks");
	glUniform1f(material_ks, materialKs);

	glUniformMatrix4fv(shader->loc_view_matrix, 1, GL_FALSE, glm::value_ptr(camera->GetViewMatrix()));
	glUniformMatrix4fv(shader->loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));
	glUniformMatrix4fv(shader->loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));
	
	mesh->Render();
}

void Game_Final::RenderColorMesh(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix, const glm::vec3 & color)
{
	if (!mesh || !shader || !shader->program)
		return;

	// render an object using the specified shader and the specified position
	shader->Use();
	
	int color_pos = glGetUniformLocation(shader->program, "color_pos");
	glUniform3fv(color_pos, 1, glm::value_ptr(color));

	int light_position = glGetUniformLocation(shader->program, "light_position");
	glUniform3f(light_position, lightPosition.x, lightPosition.y, lightPosition.z);

	int light_direction = glGetUniformLocation(shader->program, "light_direction");
	glUniform3f(light_direction, lightDirection.x, lightDirection.y, lightDirection.z);

	glm::vec3 eyePosition = cameraPos;
	int eye_position = glGetUniformLocation(shader->program, "eye_position");
	glUniform3f(eye_position, eyePosition.x, eyePosition.y, eyePosition.z);

	int material_shininess = glGetUniformLocation(shader->program, "material_shininess");
	glUniform1i(material_shininess, materialShininess);

	int material_kd = glGetUniformLocation(shader->program, "material_kd");
	glUniform1f(material_kd, materialKd);

	int material_ks = glGetUniformLocation(shader->program, "material_ks");
	glUniform1f(material_ks, materialKs);

	glUniformMatrix4fv(shader->loc_view_matrix, 1, GL_FALSE, glm::value_ptr(camera->GetViewMatrix()));
	glUniformMatrix4fv(shader->loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));
	glUniformMatrix4fv(shader->loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));

	glActiveTexture(GL_TEXTURE0);

	glBindTexture(GL_TEXTURE_2D, mapText["sphere"]->GetTextureID());

	glUniform1i(glGetUniformLocation(shader->program, "texture_1"), 0);

	glBindVertexArray(mesh->GetBuffers()->VAO);
	glDrawElements(mesh->GetDrawMode(), static_cast<int>(mesh->indices.size()), GL_UNSIGNED_SHORT, 0);
}

void Game_Final::RenderFixedMesh(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix, const glm::vec3 & color) {

	if (!mesh || !shader || !shader->program)
		return;

	// render an object using the specified shader and the specified position
	shader->Use();

	int color_pos = glGetUniformLocation(shader->program, "color_pos");
	glUniform3fv(color_pos, 1, glm::value_ptr(color));

	glUniformMatrix4fv(shader->loc_view_matrix, 1, GL_FALSE, glm::value_ptr(camera->GetViewMatrix()));
	glUniformMatrix4fv(shader->loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));
	glUniformMatrix4fv(shader->loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));

	mesh->Render();
}

void Game_Final::RenderPlatformMesh(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix, const glm::vec3 & color) {
	if (!mesh || !shader || !shader->program)
		return;

	// render an object using the specified shader and the specified position
	shader->Use();

	int color_pos = glGetUniformLocation(shader->program, "color_pos");
	glUniform3fv(color_pos, 1, glm::value_ptr(color));

	int light_position = glGetUniformLocation(shader->program, "light_position");
	glUniform3f(light_position, lightPosition.x, lightPosition.y, lightPosition.z);

	int light_direction = glGetUniformLocation(shader->program, "light_direction");
	glUniform3f(light_direction, lightDirection.x, lightDirection.y, lightDirection.z);

	glm::vec3 eyePosition = cameraPos;
	int eye_position = glGetUniformLocation(shader->program, "eye_position");
	glUniform3f(eye_position, eyePosition.x, eyePosition.y, eyePosition.z);

	int material_shininess = glGetUniformLocation(shader->program, "material_shininess");
	glUniform1i(material_shininess, materialShininess);

	int material_kd = glGetUniformLocation(shader->program, "material_kd");
	glUniform1f(material_kd, materialKd);

	int material_ks = glGetUniformLocation(shader->program, "material_ks");
	glUniform1f(material_ks, materialKs);

	glUniformMatrix4fv(shader->loc_view_matrix, 1, GL_FALSE, glm::value_ptr(camera->GetViewMatrix()));
	glUniformMatrix4fv(shader->loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));
	glUniformMatrix4fv(shader->loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));
	
	glActiveTexture(GL_TEXTURE0);

	glBindTexture(GL_TEXTURE_2D, mapText["box"]->GetTextureID());

	glUniform1i(glGetUniformLocation(shader->program, "texture_1"), 0);

	glBindVertexArray(mesh->GetBuffers()->VAO);
	glDrawElements(mesh->GetDrawMode(), static_cast<int>(mesh->indices.size()), GL_UNSIGNED_SHORT, 0);
}

void Game_Final::RenderMonsterMesh(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix, int monster_id) {
	if (!mesh || !shader || !shader->program)
		return;

	// render an object using the specified shader and the specified position
	shader->Use();


	int light_position = glGetUniformLocation(shader->program, "light_position");
	glUniform3f(light_position, lightPosition.x, lightPosition.y, lightPosition.z);

	int light_direction = glGetUniformLocation(shader->program, "light_direction");
	glUniform3f(light_direction, lightDirection.x, lightDirection.y, lightDirection.z);

	glm::vec3 eyePosition = cameraPos;
	int eye_position = glGetUniformLocation(shader->program, "eye_position");
	glUniform3f(eye_position, eyePosition.x, eyePosition.y, eyePosition.z);

	int material_shininess = glGetUniformLocation(shader->program, "material_shininess");
	glUniform1i(material_shininess, materialShininess);

	int material_kd = glGetUniformLocation(shader->program, "material_kd");
	glUniform1f(material_kd, materialKd);

	int material_ks = glGetUniformLocation(shader->program, "material_ks");
	glUniform1f(material_ks, materialKs);

	glUniformMatrix4fv(shader->loc_view_matrix, 1, GL_FALSE, glm::value_ptr(camera->GetViewMatrix()));
	glUniformMatrix4fv(shader->loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));
	glUniformMatrix4fv(shader->loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));

	int aux_loc = glGetUniformLocation(shader->program, "aux");
	glUniform1f(aux_loc, delta);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, mapText[monsters[monster_id]]->GetTextureID());
	glUniform1i(glGetUniformLocation(shader->program, "texture_1"), 0);

	glBindVertexArray(mesh->GetBuffers()->VAO);
	glDrawElements(mesh->GetDrawMode(), static_cast<int>(mesh->indices.size()), GL_UNSIGNED_SHORT, 0);

}

void Game_Final::RenderLogs(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix) {
	if (!mesh || !shader || !shader->program)
		return;

	// render an object using the specified shader and the specified position
	shader->Use();

	glUniformMatrix4fv(shader->loc_view_matrix, 1, GL_FALSE, glm::value_ptr(camera->GetViewMatrix()));
	glUniformMatrix4fv(shader->loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));
	glUniformMatrix4fv(shader->loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));

	int aux_loc = glGetUniformLocation(shader->program, "aux");
	glUniform1f(aux_loc, delta);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, mapText["log"]->GetTextureID());
	glUniform1i(glGetUniformLocation(shader->program, "texture_1"), 0);

	glBindVertexArray(mesh->GetBuffers()->VAO);
	glDrawElements(mesh->GetDrawMode(), static_cast<int>(mesh->indices.size()), GL_UNSIGNED_SHORT, 0);

}

void Game_Final::RenderBG(Mesh * mesh, Shader * shader, const glm::mat4 & modelMatrix) {
	if (!mesh || !shader || !shader->program)
		return;

	// render an object using the specified shader and the specified position
	shader->Use();

	glUniformMatrix4fv(shader->loc_view_matrix, 1, GL_FALSE, glm::value_ptr(camera->GetViewMatrix()));
	glUniformMatrix4fv(shader->loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));
	glUniformMatrix4fv(shader->loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, mapText["bg"]->GetTextureID());
	glUniform1i(glGetUniformLocation(shader->program, "texture_1"), 0);

	glBindVertexArray(mesh->GetBuffers()->VAO);
	glDrawElements(mesh->GetDrawMode(), static_cast<int>(mesh->indices.size()), GL_UNSIGNED_SHORT, 0);

}

void Game_Final::DrawCoordinatSystem(const glm::mat4 & viewMatrix, const glm::mat4 & projectionMaxtix)
{
	
}

void Game_Final::OnInputUpdate(float deltaTime, int mods)
{
	if (isFalling == 0) {
		if (window->KeyHold(GLFW_KEY_W) && changeSpeed == 1) {
			// TODO : translate the camera forward
			plat_aux_speed += 2 * deltaTime;
			if (plat_aux_speed >= 6) {
				plat_aux_speed = 6;
			}
		}
		if (window->KeyHold(GLFW_KEY_S) && changeSpeed == 1) {
			// TODO : translate the camera forward
			plat_aux_speed -= 2 * deltaTime;
			if (plat_aux_speed < 2) {
				plat_aux_speed = 2;
			}

		}
		if (cameraState == 1) {
			if (window->KeyHold(GLFW_KEY_D)) {
				// TODO : translate the camera forward
				pos_x += 2 * deltaTime;
				camera_x += 2 * deltaTime;
				lightPosition.x += 2 * deltaTime;
				if (pos_x > 2.25) {
					pos_x = 2.25;
					lightPosition.x = 2.25;
				}
				if (camera_x > 1.25) {
					camera_x = 1.25;
				}
			}
			if (window->KeyHold(GLFW_KEY_A)) {
				// TODO : translate the camera forward
				pos_x -= 2 * deltaTime;
				camera_x -= 2 * deltaTime;
				lightPosition.x -= 2 * deltaTime;
				if (pos_x < 0) {
					pos_x = 0;
					lightPosition.x = 0;
				}
				if (camera_x < -1.25) {
					camera_x = -1.25;
				}
			}
		}
		else {
			if (window->KeyHold(GLFW_KEY_D)) {
				// TODO : translate the camera forward

				pos_x += 2 * deltaTime;
				camera_x += 2 * deltaTime;
				if (pos_x > 3) {
					pos_x = 3;
				}
				if (camera_x > 1.25) {
					camera_x = 1.25;
				}

			}
			if (window->KeyHold(GLFW_KEY_A)) {
				// TODO : translate the camera forward
				pos_x -= 2 * deltaTime;
				camera_x -= 2 * deltaTime;
				if (pos_x < 0) {
					pos_x = 0;
				}
				if (camera_x < -1.25) {
					camera_x = -1.25;
				}
			}
			camera->changeCamera(cameraPos, cameraState, camera_x, camera_y);
			//camera->moveCamera(cameraState, camera_x, camera_y);
		}

		if (window->MouseHold(GLFW_MOUSE_BUTTON_RIGHT))
		{
			float cameraSpeed = 30.0f;

			if (window->KeyHold(GLFW_KEY_W)) {
				// TODO : translate the camera forward
				camera->TranslateForward(cameraSpeed * deltaTime);
			}

			if (window->KeyHold(GLFW_KEY_A)) {
				// TODO : translate the camera to the left
				camera->TranslateRight(-cameraSpeed * deltaTime);
			}

			if (window->KeyHold(GLFW_KEY_S)) {
				// TODO : translate the camera backwards
				camera->TranslateForward(-cameraSpeed * deltaTime);
			}

			if (window->KeyHold(GLFW_KEY_D)) {
				// TODO : translate the camera to the right
				camera->TranslateRight(cameraSpeed * deltaTime);
			}

			if (window->KeyHold(GLFW_KEY_Q)) {
				// TODO : translate the camera down
				camera->TranslateUpword(-cameraSpeed * deltaTime / 10);
			}

			if (window->KeyHold(GLFW_KEY_E)) {
				// TODO : translate the camera up
				camera->TranslateUpword(cameraSpeed * deltaTime / 10);
			}
		}
	}
}

void Game_Final::OnKeyPress(int key, int mods)
{
	// add key press event
	if (key == GLFW_KEY_C) {
		if (cameraState == 1) {
			camera->Set(cameraPos2, glm::vec3(1, 1, 0), glm::vec3(0, 1, 0));
			cameraState = 0;
		}
		else {
			camera->Set(cameraPos, glm::vec3(1, 1, 0), glm::vec3(0, 1, 0));
			cameraState = 1;
		}
		
	}
	if (key == GLFW_KEY_SPACE) {
		if (jumpState == 0 && (select == -1 || selectLevel2 == -1 || selectLevel3 == -1 || endLevel == -1 || menuSelect == -1 || endLevel == -1)) {
			jumpState = 1;
			jumpTimer = jumpLimit;
			jumpStart = pos_mat_y;
			vecPlatforms[0].auxLimit = roundf(vecPlatforms[0].auxLimit);
		}
	}
	if (key == GLFW_KEY_A || key == GLFW_KEY_LEFT) {
		if (select == 1) {
			select = 0;
		}
		if (selectLevel2 == 1) {
			selectLevel2 = 0;
		}
		if (selectLevel3 == 1) {
			selectLevel3 = 0;
		}
		if (endLevel == 1) {
			endLevel = 0;
		}
	}
	if (key == GLFW_KEY_W || key == GLFW_KEY_UP) {
		if (selectLevel != -1) {
			if (selectLevel > 0) {
				selectLevel--;
			}
		}
		if (menuSelect != -1) {
			if (menuSelect > 0) {
				menuSelect--;
			}
		}
		
	}
	if (key == GLFW_KEY_S || key == GLFW_KEY_DOWN) {
		if (selectLevel < 4) {
			selectLevel++;
		}
		if (menuSelect < 2) {
			menuSelect++;
		}
	}
	if (key == GLFW_KEY_D || key == GLFW_KEY_RIGHT) {
		if (select == 0) {
			select = 1;
		}
		if (selectLevel2 == 0) {
			selectLevel2 = 1;
		}
		if (selectLevel3 == 0) {
			selectLevel3 = 1;
		}
		if (endLevel == 0) {
			endLevel = 1;
		}
	}
	if (key == GLFW_KEY_ENTER || key == GLFW_KEY_SPACE) {
		if (enter == 0 && (select != -1 || selectLevel2 != -1 || selectLevel3 != -1 || endLevel != -1)) {
			enter = 1;
		}
		if (menuSelect != -1 && enter2 == 0) {
			enter2 = 1;
		}
		if (selectLevel != -1 && enter3 == 0) {
			enter3 = 1;
		}
	}
}

void Game_Final::OnKeyRelease(int key, int mods)
{
	// add key release event
}

void Game_Final::OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY)
{

	if (window->MouseHold(GLFW_MOUSE_BUTTON_RIGHT))
	{
		float sensivityOX = 0.001f;
		float sensivityOY = 0.001f;

		if (window->GetSpecialKeyState() == 0) {
			renderCameraTarget = false;
			// TODO : rotate the camera in First-person mode around OX and OY using deltaX and deltaY
			// use the sensitivity variables for setting up the rotation speed
			camera->RotateFirstPerson_OX(-sensivityOX * deltaY);
			camera->RotateFirstPerson_OY(-sensivityOY * deltaX);
		}

		if (window->GetSpecialKeyState() && GLFW_MOD_CONTROL) {
			renderCameraTarget = true;
			// TODO : rotate the camera in Third-person mode around OX and OY using deltaX and deltaY
			// use the sensitivity variables for setting up the rotation speed
		}

	}
}

void Game_Final::OnMouseBtnPress(int mouseX, int mouseY, int button, int mods)
{
	// add mouse button press event
}

void Game_Final::OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods)
{
	// add mouse button release event
}

void Game_Final::OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY)
{
}

void Game_Final::OnWindowResize(int width, int height){
}
