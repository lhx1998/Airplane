#include <time.h>
#include "Enemy.h"
#include "easyx.h"
#include "View.h"

CEnemy::CEnemy(int nRow, int nCol, int nLife)
{
	m_nRow = nRow;
	m_nCol = nCol;
	m_nLife = nLife;
	m_Boom = 0;
}

CEnemy::~CEnemy()
{

}

void CEnemy::MoveDown()
{
	m_nCol += 10;
}

void CEnemy::MoveLeft()
{
	m_nRow -= 10;
}

void CEnemy::MoveRight()
{
	m_nRow += 10;
}

void CEnemy::ShowClear()					// ÑÚ¸ÇµÐ»ú
{
	putimage(m_nRow, m_nCol, &enemy1, SRCAND);
}

void CEnemy::ShowClearLife()					// ÑÚ¸ÇµÐ»úÑªÁ¿
{
	setfillcolor(BLACK);
	solidrectangle(m_nRow, m_nCol - 10, m_nRow + m_nLife, m_nCol - 5);
}

void CEnemy::Show()						// »æÖÆµÐ»ú		
{
	putimage(m_nRow, m_nCol, &enemy, SRCPAINT);
}

void CEnemy::ShowLife()					// ÏÔÊ¾µÐ»úÑªÁ¿
{
	setfillcolor(RED);
	fillroundrect(m_nRow, m_nCol - 10, m_nRow + m_nLife, m_nCol - 5, 6, 3);
}

void CEnemy::GetHit()							// µÐ»úÖÐµ¯
{
	if (m_nLife > 0)
	{
		m_nLife -= 5;
	}
}

void CEnemy::ShowBoom()							// ÏÔÊ¾±¬Õ¨
{	
	if (m_Boom >= 1 && m_Boom <= 3)
	{	
		putimage(m_nRow, m_nCol, enemy.getwidth(),
			enemy.getheight(), &boom1, 0, 0);
	}

	if (m_Boom >= 4 && m_Boom <= 6)
	{
		putimage(m_nRow, m_nCol, enemy.getwidth(),
			enemy.getheight(), &boom2, 0, 0);
	}
		
	if(m_Boom >= 7 && m_Boom <= 9)
	{
		putimage(m_nRow, m_nCol, enemy.getwidth(),
			enemy.getheight(), &boom3, 0, 0);
	}

	if (m_Boom >= 10 && m_Boom <= 13)
	{
		putimage(m_nRow, m_nCol, enemy.getwidth(),
			enemy.getheight(), &boom4, 0, 0);
	}
	
	if (m_Boom == 14)
	{
		cleardevice();
		m_Boom = 15;
	}
}
