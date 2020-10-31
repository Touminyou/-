
#include "main.h"
#include "texture.h"
#include "sprite.h"
#include "block.h"


unsigned int	g_BlockTexture;

BLOCK			g_Block[BLOCK_MAX];


void InitBlock()
{
	// TEX�̓ǂݍ���
	g_BlockTexture = LoadTexture("rom/block.tga");

	// �u���b�N�\���̂̏�����
	for (int i = 0; i < BLOCK_MAX; i++)
	{
		g_Block[i].Use = false;
	}

	// �u���b�N��z�u���Ă���
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 8; x++)
		{	//			X���W,					Y���W,			Type�i�F�j
			SetBlock(-350.0f + x * 100.0f, -375.0f + y * 50.0f, y / 2);
		}
	}
}



void UninitBlock()
{

	UnloadTexture(g_BlockTexture);

}


void UpdateBlock()
{
	int blockCount = 0;

	// �����Ă�u���b�N�̐��𐔂��Ă��܂�
	for (int i = 0; i < BLOCK_MAX; i++)
	{
		if (g_Block[i].Use == true)
			blockCount++;
	}

	// �����������O��������S�����������Ď��ɂȂ�
	if (blockCount <= 0)
	{
		// �S�����������̏����������ɏ���

	}

}



void DrawBlock()
{
	// TEX���Z�b�g
	SetTexture(g_BlockTexture);

	// �u���b�N��`��
	for (int i = 0; i < BLOCK_MAX; i++)
	{	// �����Ă�u���b�N��`��
		if (g_Block[i].Use == true)
		{
			DrawSprite(g_Block[i].Position.x, g_Block[i].Position.y, 128.0f, 64.0f,
				0.0f, g_Block[i].Type * 0.25f, 1.0f, 0.25f,
				MakeFloat4(1.0f, 1.0f, 1.0f, 1.0f));
		}
	}
}

// �u���b�N��z�u����֐�
void SetBlock(float x, float y, int type)
{
	// ���g�p�̃u���b�N��T��
	for (int i = 0; i < BLOCK_MAX; i++)
	{
		// ���g�p�̃u���b�N���������珉�������Ďg�p���ɕς���
		if (g_Block[i].Use == false)
		{
			g_Block[i].Position.x = x;
			g_Block[i].Position.y = y;
			g_Block[i].Type = type;
			g_Block[i].Use = true;
			break;
		}
	}

}


// �u���b�N�\���̂̐擪�A�h���X��Ԃ��֐�
BLOCK *GetBlock()
{
	return g_Block;

	//return &g_Block[0];
}



