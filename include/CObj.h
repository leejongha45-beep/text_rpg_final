#pragma once

class CObj
{
public:
    CObj() {}
    virtual ~CObj() {}
public:
    virtual void ShowStatus() = 0;
};