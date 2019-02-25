#pragma once

class CGameRole
{
public:
	int m_nRow;
	int m_nCol;
	int m_nLife;
	int m_Boom;								// 爆炸状态

	CGameRole();
	~CGameRole();
	virtual void ShowClear();				// 掩盖角色
	virtual void Show();					// 显示角色
	virtual void ShowClearLife();			// 掩盖角色血量
	virtual void ShowLife();				// 显示角色血量
	virtual void ShowBoom();				// 显示爆炸
};

