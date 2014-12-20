// Copyright 2013-2014 LinkJoy, Inc. All Rights Reserved.

#ifndef PX2EVENTWORLD_HPP
#define PX2EVENTWORLD_HPP

#include "PX2EventHandler.hpp"
#include "PX2Singleton.hpp"
#include "PX2SmartPointer.hpp"

namespace PX2
{

	/// ��Ϣ����
	class EventWorld : public Singleton<EventWorld>
	{
	public:
		EventWorld ();
		~EventWorld ();

		// ��Ϣ���
		void ComeIn (EventHandler *handler);
		void GoOut (EventHandler *handler);

		/// ����
		/**
		* 1.Ϊÿ���¼�������һ���µĸ�����Ϣ
		* 2.�ַ������¼������¼�������Ӧ����
		* 3.����ʱ�䵥λ���룩
		*/
		void Update (float detalTime);

		/// �㲥������Ϣ
		/**
		* ����Ϣֻ�ܹ㲥��ϵͳ��Ϣ�������һ��ϵͳ��Ϣ�������һ������ʧ�ܡ�
		*/
		void BroadcastingLocalEvent (Event* event);

		/// �㲥������Ϣ
		/**
		*
		*/
		void BroadcastingNetEvent (Event* event);

	private:
		bool _AddHandler (EventHandler* handler);
		void _RemoveHandler (EventHandler* handler);
		void _UpdateEvent (float detalTime);
		void _BroadcastingEvent (Event* event);
		void SwapEventList ();

		typedef std::vector<Event*> EventList;
		typedef std::vector<EventHandler*> EventHandlerList;

		EventList* mNowEventList;
		EventList* mNextEventList;
		EventHandlerList mAddingHandlers;
		EventHandlerList mHandlers;
	};

	typedef Pointer0<EventWorld> EventWorldPtr;

#define PX2_EW EventWorld::GetSingleton()

}

#endif