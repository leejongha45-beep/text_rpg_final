#pragma once
#include "define.h"
#include "CItem.h"

class CPotion : public CItem
{
public:
    CPotion() : m_iHeal(0) {}
    CPotion(const int Type, const int Gold) {m_iType = Type; m_iGold = Gold;}
    ~CPotion() {}
private:
    int m_iHeal;
};