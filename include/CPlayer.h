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
    void Drink_HP_Potion();
    void Drink_MP_Potion();
    void ShowInven();
    void Buy_HP_Potion();
public:
    PLAYERSTATUS* Get_Status() {return m_pStatus;}
protected:
    PLAYERSTATUS* m_pStatus;
    vector<CItem*> m_pInven;
};