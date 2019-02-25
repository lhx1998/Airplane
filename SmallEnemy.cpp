#include "SmallEnemy.h"
#include "easyx.h"
#include "Control.h"
#include "View.h"

CSmallEnemy::CSmallEnemy(int nRow, int nCol) 
{
	m_nRow = nRow;
	m_nCol = nCol;	
}

CSmallEnemy::~CSmallEnemy()
{

}

void CSmallEnemy::ShowClear()
{
	putimage(m_nRow, m_nCol, &smallenemy1, SRCAND);
}

void CSmallEnemy::Show()
{
	putimage(m_nRow, m_nCol, &smallenemy, SRCPAINT);
}

void CSmallEnemy::ShowClearLife()
{

}

void CSmallEnemy::ShowLife()
{

}

void CSmallEnemy::GetNew()
{
	// 产生新小敌机
	m_nRow = rand() % (GAMEWIDTH - smallenemy.getwidth());
	m_nCol = 0;
	m_Boom = 0;
}

void CSmallEnemy::MoveDown()
{
	m_nCol += 20;
}

void CSmallEnemy::ShowBoom()
{
	if (m_Boom >= 1 && m_Boom <= 3)
	{

		putimage(m_nRow, m_nCol, smallenemy.getwidth(),
			smallenemy.getheight(), &smallboom1, 0, 0);
	}

	if (m_Boom >= 4 && m_Boom <= 6)
	{
		putimage(m_nRow, m_nCol, smallenemy.getwidth(),
			smallenemy.getheight(), &smallboom2, 0, 0);
	}

	if (m_Boom >= 7 && m_Boom <= 9)
	{
		putimage(m_nRow, m_nCol, smallenemy.getwidth(),
			smallenemy.getheight(), &smallboom3, 0, 0);
	}

	if (m_Boom >= 10 && m_Boom <= 12)
	{
		putimage(m_nRow, m_nCol, smallenemy.getwidth(),
			smallenemy.getheight(), &smallboom4, 0, 0);
	}

	if (m_Boom == 13)
	{
		cleardevice();
		m_Boom = 14;
	}
}



