// PX2E_LogicView.hpp

#ifndef PX2E_UILOGICVIEW_HPP
#define PX2E_UILOGICVIEW_HPP

#include "PX2EditorPre.hpp"
#include "PX2EditRenderView.hpp"
#include "PX2EventHandler.hpp"
#include "PX2EditRenderView.hpp"

namespace PX2Editor
{

	class LogicView : public wxWindow, public PX2::EventHandler
	{
		DECLARE_DYNAMIC_CLASS(LogicView)

	public:
		LogicView(wxWindow *parent);
		virtual ~LogicView();

		void OnTimer(wxTimerEvent& event);
		void OnSize(wxSizeEvent& e);
		void OnPaint(wxPaintEvent& e);
		void OnEraseBackground(wxEraseEvent& rEvent);
		void OnLeftDown(wxMouseEvent& e);
		void OnLeftUp(wxMouseEvent& e);
		void OnMiddleDown(wxMouseEvent& e);
		void OnMiddleUp(wxMouseEvent& e);
		void OnMouseWheel(wxMouseEvent& e);
		void OnRightDown(wxMouseEvent& e);
		void OnRightUp(wxMouseEvent& e);
		void OnMotion(wxMouseEvent& e);

		void OnMenuItem(wxCommandEvent &e);

		virtual void DoExecute(PX2::Event *event);

	protected:
		DECLARE_EVENT_TABLE()

		LogicView();
		PX2::APoint _wxPointToAPoint(wxPoint &point);

	protected:
		bool mIsInited;

		wxTimer mCtrlTimer;
		//PX2::EditRenderViewPtr mEditRenderView;
		float mCameraMoveSpeed;
		float mCurCameraMoveSpeed_W;
		float mCurCameraMoveSpeed_S;
		float mCurCameraMoveSpeed_A;
		float mCurCameraMoveSpeed_D;
		wxSize mSize;

		wxMenu *mEditMenu;
		bool mIsRightDown;
		bool mIsRightDownOnMotion;
	};

}

#endif