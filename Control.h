#pragma once
#include <vector>
#include <time.h>
#include "Ship.h"
#include "Bullet.h"
#include "SmallEnemy.h"
#include "GameControl.h"

#define GAMEWIDTH 640
#define GAMEHIGHT 480
using namespace std;

void InitGame();							// 初始化游戏
bool GameOver();							// 判断游戏结束
void GetOrder();							// 获取键盘指令
void EnemyMove();							// 飞船移动
void MakeEnemyBullet();						// 产生飞船子弹
void ShowBullet();							// 显示飞船、敌机子弹
void DeleteMemory();						// 释放内存
void IsEnenmyHurt();						// 判断敌机是否中弹
void IsShipHurt();							// 判断飞船是否中弹
void SmallHitShip();						// 判断小敌机是否撞到飞船
void GetNewSmallEnemy();					// 获得新小敌机
void GetNewEnemy();						// 获得新敌机
void DealInPut();							// 处理操作
bool IsBullertHitSmall();					// 子弹是否击中小敌机
bool SmallHitLow();							// 小敌机到底部
void HpSleep(int ms);						// 精确延时
int  HandleGameOver();						// 处理游戏结束
void HandleBoom();							// 处理爆炸状态
void GetNewShip();

class CShip;
class CEnemy;
class IMAGE;

enum Direction
{
	DOWN,
	Left,
	Right
};

extern IMAGE background, ship, ship1, enemy, enemy1, smallenemy, smallenemy1;
extern vector<CBullet*> VectorBullets;
extern vector<CBullet*> VectorEnenyBullets;
extern vector<CBullet*>::iterator Iter;
extern vector<CGameRole*> RoleVector;

extern CShip myship;				// 飞船位置，血量
extern CEnemy myenemy;				// 敌机位置，血量
extern CSmallEnemy mysmallenemy;	// 小敌机
extern CGameControl mygamecontrol;  // 游戏控制

enum GAMEINPUT
{
	UPINPUT		=	0X1,
	DOWNINPUT	=	0X2,
	LEFTINPUT	=	0X4,
	RIGHTINPUT	=	0X8,
	FIREINPUT	=	0X10,
	ESCINPUT	=	0X20,
	SPACEINPUT  =	0X40,
	NOINPUT		=	0X80
};

extern int myinput;