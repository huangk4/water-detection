
// ��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨App: 
// �йش����ʵ�֣������ ��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨.cpp
//

class C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨App : public CWinApp
{
public:
	C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨App theApp;