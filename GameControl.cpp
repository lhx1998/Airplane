#include "GameControl.h"
#include "easyx.h"
#include "Control.h"

CGameControl::CGameControl()
{
	m_nScore = 0;
}

CGameControl::~CGameControl()
{

}

void CGameControl::ShowScore()
{
	TCHAR scoretext[50];
	setfillcolor(BLACK);
	solidrectangle(0, 0, 100, 20);
	setbkmode(TRANSPARENT);				// ×ÖÌåÍ¸Ã÷
	settextcolor(LIGHTBLUE);
	settextstyle(20, 10, _T("ËÎÌå"));
	swprintf(scoretext, _T("Score:%d"), m_nScore);
	outtextxy(0, 0, scoretext);
}