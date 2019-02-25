#pragma once
#include "GameRole.h"

class CShip :public CGameRole
{
public:
	CShip(int nRow, int nCol, int nLife);
	~CShip();
	void ShowClear();				// ÑÚ¸Ç·É´¬
	void Show();					// ÏÔÊ¾·É´¬
	void ShowClearLife();			// ÑÚ¸Ç·É´¬ÑªÁ¿
	void GetHit();					// ·É´¬ÊÕµ½ÉËº¦
	void ShowLife();				// ÏÔÊ¾·É´¬ÑªÁ¿
	void ShowBoom();                // ÏÔÊ¾±¬Õ¨	
};


