#include "pch.h"
#include "system.h"
#include "CBeginner.h"

void CBeginner::Initialize()
{
    m_pStatus = new PLAYERSTATUS();

    strcpy(m_pStatus->ClassName, "초보자");
    m_pStatus->iLevel = 1;
    m_pStatus->iHP = 100;
    m_pStatus->iMP = 10;
    m_pStatus->iATP = 10;
}

