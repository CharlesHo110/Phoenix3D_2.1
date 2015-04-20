// PX2ServerLoop.cpp

#include "PX2ServerLoop.hpp"
#include "PX2Time.hpp"
#include "PX2LocalDateTime.hpp"
#include "PX2System.hpp"
using namespace PX2Server;
using namespace PX2;

//----------------------------------------------------------------------------
ServerLoop::ServerLoop() :
mIsShutdownServer(false),
mCurDay(-1)
{
}
//----------------------------------------------------------------------------
ServerLoop::~ServerLoop()
{
}
//----------------------------------------------------------------------------
void ServerLoop::Run()
{
	double lastReportTimeTime = GetTimeInSeconds();

	int cursaveday = -1;
	while (!mIsShutdownServer)
	{
		double curTime = GetTimeInSeconds();

		if (curTime - lastReportTimeTime > 600.0)
		{
			// ÿ10�������ʺŷ������㱨״̬

			lastReportTimeTime = curTime;

			// ÿ��3�㱣���ɫ����

			LocalDateTime time;
			int hour = time.Hour();
			int day = time.Day();
			if (3 == hour && mCurDay != day)
			{
				// save
			}

		}

		System::SleepSeconds(0.1f);
	}

}
//----------------------------------------------------------------------------