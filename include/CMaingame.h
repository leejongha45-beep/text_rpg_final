#pragma once

class CObj;

class CMaingmae {
public:
  CMaingmae() : m_pPlayer(nullptr) {}
  ~CMaingmae() {}

public:
  void Initialize();
  void NewGame();

private:
  CObj *m_pPlayer;
};