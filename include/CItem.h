#pragma once

class CObj;

class CItem
{
public:
    CItem() : m_pPlayer(nullptr), m_iCount(0), m_iGold(0), m_iType(0) {}
    virtual ~CItem() {}
public:
    int Get_Type() {return m_iType;}
    void IncreaseCount() {m_iCount++;}
    int Get_Gold() {return m_iGold;}
protected:
    CObj* m_pPlayer;
    int m_iCount;
    int m_iGold;
    int m_iType;
};