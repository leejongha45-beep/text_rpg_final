#include "pch.h"
#include "system.h"
#include "CPlayer.h"
#include "CPotion.h"
#include "CWeapon.h"

void CPlayer::ShowStatus()
{
    cout << "==================================" << endl;
    cout << "Location : " << m_pStatus->Location << endl;
    cout << "Class : " << m_pStatus->ClassName << "\tLevel : " << m_pStatus->iLevel << endl;
    cout << "HP : " << m_pStatus->iHP << "\tMP : " << m_pStatus->iMP << endl;
}

void CPlayer::ShowInven()
{
    int iInput(0), target(0);

    vector<CItem*>::iterator it = m_pInven.begin();

    while (true)
    {
        cout << "1. HP 포션 / 2. MP 포션 / 3. 무기 / 4. 갑옷 : ";
        cin >> iInput;

        switch (iInput)
        {
            case 1:
            {
                target = HP_POTION;
                for (vector<CItem*>::iterator iter = m_pInven.begin(); iter != m_pInven.end(); ++iter)
                {
                    if ((*iter)->Get_Type() == target)
                    {}
                    
                }
                cout << "HP Potion : ";
            }
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;
        }
    }
}

void CPlayer::Drink_HP_Potion()
{
    int target(MP_POTION);
    vector<CItem*>::iterator it = m_pInven.begin();

    for (vector<CItem*>::iterator iter = m_pInven.begin(); iter != m_pInven.end(); ++iter)
    {
        if ((*iter)->Get_Type() == target)
        {
            it = iter;
            break;
        }
    }

    if (it != m_pInven.end())
    {
        (*it)->DecreaseCount();
        m_pStatus->iHP += dynamic_cast<CPotion*>(*it)->Get_heal();
        cout << "포션을 마셨다" << endl;
    }

    else
    {
        cout << "포션이 없습니다" << endl;
    }
}

void CPlayer::Drink_MP_Potion()
{
    int target(MP_POTION);
    vector<CItem*>::iterator it = m_pInven.begin();
    
    for (vector<CItem*>::iterator iter = m_pInven.begin(); iter != m_pInven.end(); ++iter)
    {
        if ((*iter)->Get_Type() == target)
        {
            it = iter;
            break;
        }
    }
    
    if (it != m_pInven.end())
    {
        (*it)->DecreaseCount();
        m_pStatus->iMP += dynamic_cast<CPotion*>(*it)->Get_heal();
        cout << "포션을 마셨다" << endl;
    }
    
    else
    {
        cout << "포션이 없습니다" << endl;
    }
}

void CPlayer::Buy_HP_Potion()
{
    int target(HP_POTION);
    vector<CItem*>::iterator it = m_pInven.end();

    for (vector<CItem*>::iterator iter = m_pInven.begin(); iter != m_pInven.end(); ++iter)
    {
        if ((*iter)->Get_Type() == target)
        {
            it = iter;
            break;
        }
    }

    if (it != m_pInven.end())
    {
        m_pStatus->iGold -= (*it)->Get_Gold();
        (*it)->IncreaseCount();
        cout << "포션 구입 완료" << endl;
    }

    else
    {
        m_pInven.push_back(new CPotion(HP_POTION,50, 50));
        it = m_pInven.end();
        --it;
        m_pStatus->iGold -= (*it)->Get_Gold();
        (*it)->IncreaseCount();
        cout << "포션 구입 완료" << endl;
    }
}

void CPlayer::Buy_MP_Potion()
{
    int target(MP_POTION);
    vector<CItem*>::iterator it = m_pInven.end();
    
    for (vector<CItem*>::iterator iter = m_pInven.begin(); iter != m_pInven.end(); ++iter)
    {
        if ((*iter)->Get_Type() == target)
        {
            it = iter;
            break;
        }
    }
    
    if (it != m_pInven.end())
    {
        m_pStatus->iGold -= (*it)->Get_Gold();
        (*it)->IncreaseCount();
        cout << "포션 구입 완료" << endl;
    }
    
    else
    {
        m_pInven.push_back(new CPotion(MP_POTION,30,30));
        it = m_pInven.end();
        --it;
        m_pStatus->iGold -= (*it)->Get_Gold();
        (*it)->IncreaseCount();
        cout << "포션 구입 완료" << endl;
    }
}

void CPlayer::Buy_Weapon()
{
    int target(WEAPON);
    vector<CItem*>::iterator it = m_pInven.end();

    for (vector<CItem*>::iterator iter = m_pInven.begin(); iter != m_pInven.end(); ++iter)
    {
        if ((*iter)->Get_Type() == target)
        {
            it = iter;
            break;
        }
    }

    if (it != m_pInven.end())
    {
        m_pStatus->iGold -= (*it)->Get_Gold();
        (*it)->IncreaseCount();
    }
    
    else
    {
        m_pStatus->iGold -= (*it)->Get_Gold();
        m_pInven.push_back(new CWeapon(WEAPON, 100, 20));
        it = m_pInven.end();
        --it;
        (*it)->IncreaseCount();
    }
}

void CPlayer::Buy_Armor()
{
}
