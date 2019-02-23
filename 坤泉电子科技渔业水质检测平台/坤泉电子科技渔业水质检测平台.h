
// 坤泉电子科技渔业水质检测平台.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// C坤泉电子科技渔业水质检测平台App: 
// 有关此类的实现，请参阅 坤泉电子科技渔业水质检测平台.cpp
//

class C坤泉电子科技渔业水质检测平台App : public CWinApp
{
public:
	C坤泉电子科技渔业水质检测平台App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern C坤泉电子科技渔业水质检测平台App theApp;