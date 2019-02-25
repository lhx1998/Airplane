#pragma once
#include "control.h"
#include "Ship.h"

void InitGame();				// 初始化游戏
void ShowBullet();				// 显示子弹
void ShowInPut();				// 根据操作显示
void LoadBoom();

extern IMAGE boom1, boom2, boom3, boom4;
extern IMAGE smallboom1, smallboom2, smallboom3, smallboom4;