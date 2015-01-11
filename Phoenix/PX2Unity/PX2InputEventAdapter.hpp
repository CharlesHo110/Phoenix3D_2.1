/*
*
* �ļ�����	��	PX2InputEventHandler.hpp
*
*/

#ifndef PX2INPUTEVENTADAPTER_HPP
#define PX2INPUTEVENTADAPTER_HPP

#include "PX2UnityPre.hpp"
#include "PX2Keyboard.hpp"
#include "PX2Mouse.hpp"
#include "PX2MultiTouch.hpp"
#include "PX2InputManager.hpp"
#include "PX2InputEventListener.hpp"

namespace PX2
{

	class InputEventAdapter : public Singleton<InputEventAdapter>
	{
	public:
		InputEventAdapter ();
		~InputEventAdapter ();

		// ʹ�ô˺�����Ӵ��ھ��
		void AddParam (int windowID);

		bool Initlize (); // ����ڱ༭���в���Ҫ������Щ
		bool Ternamate (); // ����ڱ༭���в���Ҫ������Щ

		void SetRect (const Rectf &rect);
		const Rectf &GetRect () const;

		void Convert2Touch (bool convert);
		bool IsConverted2Touch ();

		void Update ();

		InputManager *GetInputManager ();
		InputEventListener *GetInputEventListener ();

		Keyboard *GetKeyboard ();
		Mouse *GetMouse ();

		static void CoordinateToPX2 (Axis &Y, const Sizef &winSize);

	protected:
		Rectf mRect;
		ParamList mParamList;
		InputManager *mInputManager;
		Keyboard *mKeyboard;
		Mouse *mMouse;
		MultiTouch *mMultiTouch;
		bool mIsConverted2Touch;
		InputEventListener *mEventListener;
	};

#include "PX2InputEventAdapter.inl"

#define PX2_IEA InputEventAdapter::GetSingleton()

}

#endif