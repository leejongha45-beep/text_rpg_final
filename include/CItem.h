#pragma once

class CObj;

class CItem
{
public:
    CItem() : m_pPlayer(nullptr), m_iCount(0), m_iGold(0), m_iType(0) {}
    CItem(const int Type, const int Gold) : m_iType(Type), m_iGold(Gold), m_iCount(0), m_pPlayer(nullptr) {}
    virtual ~CItem() {}
public:
    int Get_Type() {return m_iType;}
    int Get_Gold() {return m_iGold;}
public:
    void IncreaseCount() {m_iCount++;}
    void DecreaseCount() {m_iCount--;}
protected:
    CObj* m_pPlayer;
    int m_iCount;
    int m_iGold;
    int m_iType;
};