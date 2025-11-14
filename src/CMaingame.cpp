#include "pch.h"
#include "system.h"
#include "CMaingame.h"
#include "CBeginner.h"

void CMaingmae::Initialize()
{
    int iInput(0);

    while (true)
    {
        cout << "1. New Game" << endl << "2. Load Game" << endl << "3. Exit" << endl;
        cin >> iInput;

        switch (iInput)
        {
            case 1:
                NewGame();
                break;
            case 2:
                cout << "미구현" << endl;
                break;
            case 3:
                return;
        }
    }


}

void CMaingmae::NewGame()
{
    m_pPlayer = new CBeginner();
    dynamic_cast<CBeginner*>(m_pPlayer)->Initialize();
    
}