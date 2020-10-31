#include "Main.h"
#include "texture.h"
#include "Sprite.h"

static int g_TextureBlock;


void InitBlock(void)
{

	g_TextureBlock = Texture_SetTextureLoadFile("rom/buroltuku.png");	//�w�i�摜

}


void UninitBlock(void)
{

	Texture_Release(&g_TextureBlock, 1);

}


void DrawBlock(void)
{

	// �X�v���C�g��`��

	// ��\�w
	Sprite_Draw(g_TextureBlock, 581, 400, 64.0f, 32.0f,
		0, 0, 64, 32);
	// ���w
	for (int i = 0; i < 10; i++)
	{
		Sprite_Draw(g_TextureBlock, 293 + (i*(6 + 64)), 688, 64, 32,
			0, 0, 64, 32);
	}
	// ���w
	for (int i = 0; i < 9; i++)
	{
		Sprite_Draw(g_TextureBlock, 325 + (i*(6 + 64)), 656, 64, 32,
			0, 0, 64, 32);
	}
	// ��O�w
	for (int i = 0; i < 8; i++)
	{
		Sprite_Draw(g_TextureBlock, 357 + (i*(6 + 64)), 624, 64, 32,
			0, 0, 64, 32);
	}
	// ��l�w
	for (int i = 0; i < 7; i++)
	{
		Sprite_Draw(g_TextureBlock, 389 + (i*(6 + 64)), 592, 64, 32,
			0, 0, 64, 32);
	}
	// ��ܑw
	for (int i = 0; i < 6; i++)
	{
		Sprite_Draw(g_TextureBlock, 421 + (i*(6 + 64)), 560, 64, 32,
			0, 0, 64, 32);
	}
	// ��Z�w
	for (int i = 0; i < 5; i++)
	{
		Sprite_Draw(g_TextureBlock, 453 + (i*(6 + 64)), 528, 64, 32,
			0, 0, 64, 32);
	}
	// �掵�w
	for (int i = 0; i < 4; i++)
	{
		Sprite_Draw(g_TextureBlock, 485 + (i*(6 + 64)), 496, 64, 32,
			0, 0, 64, 32);
	}
	// �攪�w
	for (int i = 0; i < 3; i++)
	{
		Sprite_Draw(g_TextureBlock, 517 + (i*(6 + 64)), 464, 64, 32,
			0, 0, 64, 32);
	}
	// ���w
	for (int i = 0; i < 2; i++)
	{
		Sprite_Draw(g_TextureBlock, 549 + (i*(6 + 64)), 432, 64, 32,
			0, 0, 64, 32);
	}

}