#pragma once
#include "CItem.h"

class CWeapon : public CItem
{
public:
    CWeapon() {}
    CWeapon(const int Type, const int Gold, const int ATP) : CItem(Type, Gold), m_iATP(ATP) {}
    ~CWeapon() {}
private:
    int m_iATP;
};