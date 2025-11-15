#pragma once
#include "CObj.h"
#include <vector>
#include "define.h"

class CItem;

class CPlayer : public CObj
{
public:
    CPlayer() : m_pStatus(nullptr), m_pInven{} {}
    ~CPlayer() {}
public:
    void ShowStatus() override;
    // 행동 함수 모음
    void Drink_HP_Potion();
    void Drink_MP_Potion();
    void ShowInven();
    void Buy_HP_Potion();
    void Buy_MP_Potion();
    void Buy_Weapon();
    void Buy_Armor();
public:
    PLAYERSTATUS* Get_Status() {return m_pStatus;}
protected:
    PLAYERSTATUS* m_pStatus;
    vector<CItem*> m_pInven;
};