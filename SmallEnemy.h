#pragma once
#include "GameRole.h"

class CSmallEnemy : public CGameRole
{
public:
	CSmallEnemy::CSmallEnemy(int nRow, int nCol);
	~CSmallEnemy();

	void ShowClear();				// 掩盖角色
	void Show();					// 显示角色
	void ShowClearLife();			// 掩盖角色血量
	void ShowLife();				// 显示角色血量
	void ShowBoom();				// 显示小敌机爆炸
	void GetNew();					// 获取新的
	void MoveDown();				//下移		
};

