// AppPlayerApp.cpp

#include "AppPlayerApp.hpp"

PX2_IMPLEMENT_APPLICATION(AppPlayerApp)
//----------------------------------------------------------------------------
AppPlayerApp::AppPlayerApp ()
{
#ifdef _DEBUG
	#if defined(_WIN64) || defined(WIN64)
		mWindowTitle = "AppPlayerApp64D";
	#else
		mWindowTitle = "AppPlayerAppD";
	#endif
#else
	#if defined(_WIN64) || defined(WIN64)
		mWindowTitle = "AppPlayerApp64";
	#else
		mWindowTitle = "AppPlayerApp";
	#endif
#endif
}
//----------------------------------------------------------------------------
AppPlayerApp::~AppPlayerApp ()
{
	// �����ڴ��ͷ�,��������������֮ǰ�ͷ�
}
//----------------------------------------------------------------------------