
#include "Main.h"
#include "texture.h"
#include "Sprite.h"

static int g_TextureBG;


void InitBG(void)
{

	//g_TextureBG = Texture_SetTextureLoadFile("rom/haike.png");	//�w�i�摜

}


void UninitBG(void)
{

	Texture_Release(&g_TextureBG, 1);

}


void DrawBG(void)
{

	//// �X�v���C�g��`��
	//Sprite_Draw(g_TextureBG, 0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT,
	//	0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

}