#include <stdio.h>
#include <string.h>
typedef struct {
	int HP;
	int MP;
	double EXP;
	double speed;
	double power;
	double mental;
	char CharacterName[30];
}GamePlayer;

int main()
{
	GamePlayer GamePlayer;
	
	GamePlayer.HP = 5000;
	GamePlayer.MP = 3000;
	GamePlayer.EXP = 0;
	GamePlayer.speed = 7.4;
	GamePlayer.power = 50.8;
	GamePlayer.mental = 34.7;
	strcpy((char*)GamePlayer.CharacterName, "스카웃");

	printf("캐릭터 이름 : %s\n", GamePlayer.CharacterName);
	printf("HP : %d\tMP : %d\n", GamePlayer.HP, GamePlayer.MP);
	printf("경험치 : %lf\n", GamePlayer.EXP);
	printf("힘 : %lf\t지능 : %lf\n", GamePlayer.power, GamePlayer.mental);
	printf("이동속도 : %lf", GamePlayer.speed);

	getch();
	return 0;
}
