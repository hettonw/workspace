// BattleOfSolitaire.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CBattleOfSolitaireMain:
// �йش����ʵ�֣������ BattleOfSolitaire.cpp
//

class CBattleOfSolitaireMain : public CWinApp
{
public:
	CBattleOfSolitaireMain();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CBattleOfSolitaireMain theApp;