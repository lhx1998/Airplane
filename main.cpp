//////////////////////////////////////////////
// 程序名称：飞机大战
// 程序作者：刘华欣
// 作者邮箱：1359240780@qq.com
// 编译环境：Visual Studio 2013 + EasyX_20190219(beta) 
// 发布时间：2019-2-10
// 最后修改：2019-2-24
//
#pragma comment(lib, "WINMM.LIB")
#include <stdio.h>
#include <easyx.h>
#include <time.h>
#include <vector>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include "Enemy.h"
#include "Ship.h"
#include "Bullet.h"
#include "control.h"
#include "view.h"
#include "GameRole.h"

int main()
{
	srand((unsigned)time(NULL));
	initgraph(GAMEWIDTH, GAMEHIGHT);

	int nSign = 1;

	while (nSign != -1)
	{
		InitGame();
		GetNewShip();
		GetNewEnemy();
		GetNewSmallEnemy();
		mygamecontrol.m_nScore = 0;
		RoleVector.push_back(&myship);
		RoleVector.push_back(&myenemy);
		RoleVector.push_back(&mysmallenemy);
		
		while (nSign > 0)
		{
			nSign = HandleGameOver();
			GetOrder();							// 获取键盘指令
			ShowInPut();						// 操作前掩盖飞船
			DealInPut();						// 处理操作
			EnemyMove();						// 敌机移动

			// 绘制游戏各个角色
			for (size_t i = 0; i < RoleVector.size(); i++)
			{
				RoleVector[i]->ShowClearLife();
				RoleVector[i]->ShowLife();
				RoleVector[i]->ShowClear();
				RoleVector[i]->Show();
				RoleVector[i]->ShowBoom();
			}
			ShowBullet();						// 显示飞船、敌机子弹		
			mygamecontrol.ShowScore();			// 显示分数
			
			MakeEnemyBullet();					// 产生敌机子弹
			DeleteMemory();						// 释放内存
			IsEnenmyHurt();						// 判断敌机是否中弹
			IsShipHurt();						// 判断飞船是否中弹					
			SmallHitShip();						// 判断小敌机是否撞到飞船		
			IsBullertHitSmall();				// 小敌机是否被击中
			HandleBoom();                       // 处理爆炸状态	
			nSign = HandleGameOver();
			HpSleep(10);						// 延时
		}
				
		RoleVector.pop_back();
		RoleVector.pop_back();
		RoleVector.pop_back();
		nSign = 1;
		
	}	
	closegraph();
	return 0;
}
