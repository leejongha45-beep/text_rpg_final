#pragma once
#include "pch.h"
#include "system.h"

enum ITEMTYPE {HP_POTION = 0, MP_POTION, WEAPON, ARMOR, SHEILD, END};

typedef struct status_info
{
    char ClassName[32];
    char Location[32];
    int iLevel;
    int iHP;
    int iMP;
    int iEXP;
    int iATP;
    int iMTP;
    int iGold;
}PLAYERSTATUS;

