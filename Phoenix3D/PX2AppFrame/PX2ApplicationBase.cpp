/*
*
* �ļ�����	��	PX2ApplicationBase.cpp
*
*/

#include "PX2ApplicationBase.hpp"
#include "PX2EngineLoop.hpp"
#include "PX2Project.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
bool ApplicationBase::msIsInitlized = false;
ApplicationBase::AppInitlizeFun ApplicationBase::msAppInitlizeFun = 0;
ApplicationBase::AppTernamateFun ApplicationBase::msAppTernamateFun = 0;
ApplicationBase* ApplicationBase::msApplication = 0;
ApplicationBase::EntryPoint ApplicationBase::msEntry = 0;
//----------------------------------------------------------------------------
ApplicationBase::ApplicationBase() :
mXPosition(0),
mYPosition(0),
mWidth(800),
mHeight(600),
mAllowResize(true),
mInitScreenWidth(960.0f),
mInitScreenHeight(640.0f),
mScreenSuitType(AST_960X640)
{
	mWindowTitle = "Application";
}
//----------------------------------------------------------------------------
ApplicationBase::~ApplicationBase ()
{
}
//----------------------------------------------------------------------------
bool ApplicationBase::IsInitlized ()
{
	return msIsInitlized;
}
//----------------------------------------------------------------------------
void ApplicationBase::SetInitScreenWidthHeight (float width, float height)
{
	//mInitScreenWidth = width;
	//mInitScreenHeight = height;

	//if (width > height)
	//{
	//	float widthAdjuge = 640.0f * mInitScreenWidth/mInitScreenHeight;
	//	if (Mathf::FAbs(1136.0f-widthAdjuge) < Mathf::FAbs(960.0f-widthAdjuge))
	//	{
	//		mScreenSuitType = AST_1136X640;
	//	}
	//	else
	//	{
	//		mScreenSuitType = AST_960X640;
	//	}
	//}
	//else
	//{
	//	float heightAdjuge = 640.0f * mInitScreenHeight/mInitScreenWidth;
	//	if (Mathf::FAbs(1136.0f-heightAdjuge) < Mathf::FAbs(960.0f-heightAdjuge))
	//	{
	//		mScreenSuitType = AST_640X1136;
	//	}
	//	else
	//	{
	//		mScreenSuitType = AST_640X960;
	//	}
	//}
}
//----------------------------------------------------------------------------
int ApplicationBase::GetProjSuitType () const
{
	return mScreenSuitType;
}
//----------------------------------------------------------------------------
bool ApplicationBase::Initlize ()
{
	/*_*/
	return true;
}
//----------------------------------------------------------------------------
int ApplicationBase::GetWidth ()
{
	return mWidth;
}
//----------------------------------------------------------------------------
int ApplicationBase::GetHeight ()
{
	return mHeight;
}
//----------------------------------------------------------------------------
bool ApplicationBase::OnIdle ()
{
	PX2_ENGINELOOP.Tick();

	return true;
}
//----------------------------------------------------------------------------
bool ApplicationBase::Ternamate ()
{
	//mInfoFrame = 0;
	//mBackPic = 0;
	//mFrameText = 0;
	//mCurTotalMemory = 0;
	//mMaxTotalMemory = 0;
	//mDebugText = 0;

	PX2_ENGINELOOP.Ternamate();

	return true;
}
//----------------------------------------------------------------------------
void ApplicationBase::OnSize (int width, int height)
{
	PX2_ENGINELOOP.SetSize(Sizef((float)width, (float)height));
}
//----------------------------------------------------------------------------
void ApplicationBase::WillEnterForeground(bool isFirstTime)
{
	PX2_ENGINELOOP.WillEnterForeground(isFirstTime);
}
//----------------------------------------------------------------------------
void ApplicationBase::DidEnterBackground ()
{
	PX2_ENGINELOOP.DidEnterBackground();
}
//----------------------------------------------------------------------------
int ApplicationBase::Main (int numArguments, char** arguments)
{
	PX2_UNUSED(numArguments);
	PX2_UNUSED(arguments);
	return 1;
}
//----------------------------------------------------------------------------
bool ApplicationBase::_LoadProject(const std::string &projFilename)
{
	Project *newProj = new0 Project();
	if (newProj->Load(projFilename))
	{
		const std::string &sceneFilename = newProj->GetSceneFilename();
		if (!sceneFilename.empty())
		{
			_LoadScene(sceneFilename);
		}

		PX2_ENGINELOOP.SetSize(newProj->GetSize());

		return true;
	}
	else
	{
		Project::Destory();
		return false;
	}
}
//----------------------------------------------------------------------------
bool ApplicationBase::_LoadScene(const std::string &sceneFilename)
{
	Scene *newscene = DynamicCast<Scene>(PX2_RM.BlockLoad(sceneFilename));
	if (newscene)
	{
		Project::GetSingleton().SetScene(newscene);
		Project::GetSingleton().SetSceneFilename(sceneFilename);

		return true;
	}

	return false;
}
//----------------------------------------------------------------------------