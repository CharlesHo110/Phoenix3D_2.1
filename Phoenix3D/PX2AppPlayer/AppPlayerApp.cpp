// AppPlayerApp.cpp

#include "AppPlayerApp.hpp"
#include "PX2Renderer.hpp"

PX2_IMPLEMENT_APPLICATION(AppPlayerApp)
//----------------------------------------------------------------------------
AppPlayerApp::AppPlayerApp ()
{
	mWindowTitle = "AppPlayer";
	mWindowTitle += Renderer::GetRenderTag();

#if defined(_WIN64) || defined(WIN64)
	mWindowTitle += "64";
#endif

#ifdef _DEBUG
	mWindowTitle += "D";
#endif
}
//----------------------------------------------------------------------------
AppPlayerApp::~AppPlayerApp ()
{
	// �����ڴ��ͷ�,��������������֮ǰ�ͷ�
}
//----------------------------------------------------------------------------