#include "pch.h"
#include "system.h"
#include "CPlayer.h"
#include "CPotion.h"

void CPlayer::ShowStatus()
{
    cout << "==================================" << endl;
    cout << "Location : " << m_pStatus->Location << endl;
    cout << "Class : " << m_pStatus->ClassName << "\tLevel : " << m_pStatus->iLevel << endl;
    cout << "HP : " << m_pStatus->iHP << "\tMP : " << m_pStatus->iMP << endl;
}

void CPlayer::Drink_HP_Potion()
{
}

void CPlayer::Drink_MP_Potion()
{
}

void CPlayer::Buy_HP_Potion()
{
    int target(HP_POTION);
    vector<CItem*>::iterator it = m_pInven.end();

    for (vector<CItem*>::iterator iter = m_pInven.begin(); iter != m_pInven.end(); ++iter)
    {
        if ((*iter)->Get_Type()==target)
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
        m_pInven.push_back(new CPotion(HP_POTION,50));
        it = m_pInven.end();
        --it;
        m_pStatus->iGold -= (*it)->Get_Gold();
        (*it)->IncreaseCount();
    }
}
