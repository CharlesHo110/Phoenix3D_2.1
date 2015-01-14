/*
*
* Filename	:	GamePlayApp.cpp
*
*/

#include "GamePlayApp.hpp"

PX2_IMPLEMENT_APPLICATION(GamePlayApp)
//----------------------------------------------------------------------------
GamePlayApp::GamePlayApp ()
{
#ifdef _DEBUG
	#if defined(_WIN64) || defined(WIN64)
		mWindowTitle = "GamePlayApp64D";
	#else
		mWindowTitle = "GamePlayAppD";
	#endif
#else
	#if defined(_WIN64) || defined(WIN64)
		mWindowTitle = "GamePlayApp64";
	#else
		mWindowTitle = "GamePlayApp";
	#endif
#endif
}
//----------------------------------------------------------------------------
GamePlayApp::~GamePlayApp ()
{
	// �����ڴ��ͷ�,��������������֮ǰ�ͷ�
}
//----------------------------------------------------------------------------