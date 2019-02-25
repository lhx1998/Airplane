#include <easyx.h>
#include "Bullet.h"

void CBullet::MoveUp()
{
	m_nCol -= 3;
}

void CBullet::ShowYellow()
{
	setfillcolor(YELLOW);
	solidcircle(m_nRow, m_nCol, 5);
}

void CBullet::ShowClear()				// ¸²¸Ç×Óµ¯
{
	setfillcolor(BLACK);
	solidcircle(m_nRow, m_nCol, 5);
}

void CBullet::MoveDown()
{
	m_nCol += 3;
}

CBullet::CBullet(int nRow, int nCol)
{
	m_nRow = nRow;
	m_nCol = nCol;
}

void CBullet::ShowRed()
{
	setfillcolor(RED);
	solidcircle(m_nRow, m_nCol, 5);
}

