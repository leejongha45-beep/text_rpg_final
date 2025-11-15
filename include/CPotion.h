#pragma once
#include "define.h"
#include "CItem.h"

class CPotion : public CItem
{
public:
    CPotion() : m_iHeal(0) {}
    CPotion(const int Type, const int Gold, const int Heal) : CItem(Type, Gold), m_iHeal(Heal) {}
    ~CPotion() {}
public:
    int Get_heal() {return m_iHeal;}
private:
    int m_iHeal;
};