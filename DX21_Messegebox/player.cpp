
#include "Main.h"
#include "texture.h"
#include "Sprite.h"


static int	g_PlayerTexture;

D3DXVECTOR2	   g_PlayerPosition;

//float			rot = 0.0f;

int player_A_t;

void InitPlayer()
{

	g_PlayerTexture = Texture_SetTextureLoadFile("rom/player_test.png");

	//PlayBGM(BGM_01);

	g_PlayerPosition.x = 640;
	g_PlayerPosition.y = 400;

	player_A_t = 0;
}


void UninitPlayer()
{

	Texture_Release(&g_PlayerTexture,1);

	//StopBGM();
}


void UpdatePlayer()
{
	float stick_x = 0.0f;
	float stick_y = 0.0f;


	// ç∂âEà⁄ìÆ
	if (GetKeyState(VK_LEFT) & 0x80)
	{
		stick_x = -0.5f;

		player_A_t = 1;

	}
	

	if (GetKeyState(VK_RIGHT) & 0x80)
	{
		stick_x = 0.5f;

	}
	

	g_PlayerPosition.x += stick_x * 20.0f;


	// è„â∫à⁄ìÆ
	if (GetKeyState(VK_UP) & 0x80)
	{
		stick_y = -0.5f;

	}

	if (GetKeyState(VK_DOWN) & 0x80)
	{
		stick_y = 0.5f;
		
	}


	g_PlayerPosition.y += stick_y * 20.0f;

	// èdóÕ
	g_PlayerPosition.y += 5;


	if (g_PlayerPosition.x < 0)
		g_PlayerPosition.x = 0;

	if (g_PlayerPosition.x > 1280 - 100)
		g_PlayerPosition.x = 1280 - 100;

	if (g_PlayerPosition.y < 0 - 100 )
		g_PlayerPosition.y = 0 - 100 ;

	if (g_PlayerPosition.y > 500 - 100)
		g_PlayerPosition.y = 500 - 100;
}


void DrawPlayer()
{

	Sprite_Draw(g_PlayerTexture,g_PlayerPosition.x, g_PlayerPosition.y, 100.0f, 100.0f,
	 0, 0, 250, 160);
}


D3DXVECTOR2 GetPlayerPosition()
{
	return g_PlayerPosition;
}