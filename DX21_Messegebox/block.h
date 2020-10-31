#pragma once


#define BLOCK_MAX 100	// �u���b�N��Max���i�z��̐��j

struct BLOCK			// �u���b�N�\����
{
	Float2	Position;
	int		Type;
	bool	Use;
};


void InitBlock();
void UninitBlock();
void UpdateBlock();
void DrawBlock();

// �u���b�N��z�u����֐�
void SetBlock(float x, float y, int type);

// �u���b�N�\���̂̐擪�A�h���X��Ԃ��֐�
BLOCK *GetBlock();


