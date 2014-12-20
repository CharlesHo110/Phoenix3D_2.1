// Copyright 2013-2014 LinkJoy, Inc. All Rights Reserved.

#ifndef PX2EVENTFACTORYIMPLEMENT_HPP
#define PX2EVENTFACTORYIMPLEMENT_HPP

#include "PX2Event.hpp"

namespace PX2
{
	class Event;
	class EventSpace;

	/// �¼�����ʵ����
	class EventFactoryImplement
	{
	public:
		EventFactoryImplement ();
		~EventFactoryImplement ();

		// �¼�
		Event* CreateEventX ();
		void DestoryEvent (Event* event);

		// �¼��ռ�
		void RegisterEventSpace (EventSpace* eventSpace);
		void UnRegisterEventSpace (const std::string &name);
		EventSpace* GetEventSpace (const std::string &name) const;
		EventSpace* FindEventSpace (Event* event) const;

	private:
		typedef std::map<std::string, EventSpace*> EventSpaceMap;

		EventSpaceMap mSpaces;
		int mEventQuantity;
	};

}

#endif