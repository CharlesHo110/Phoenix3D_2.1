// PX2UIObjectCtrl.hpp

#ifndef PX2UIOBJECTCTRL_HPP
#define PX2UIOBJECTCTRL_HPP

#include "PX2EditPre.hpp"
#include "PX2EventHandler.hpp"
#include "PX2Movable.hpp"
#include "PX2Vector2.hpp"
#include "PX2SwitchNode.hpp"

namespace PX2
{

	class Renderer;

	class UIObjectCtrl : public PX2::EventHandler
	{
	public:
		UIObjectCtrl ();
		virtual ~UIObjectCtrl ();

		enum ShapeType
		{
			ST_NONE = 0,
			ST_RECT,
			ST_CROSS,
			ST_MAX_TYPE
		};
		void SetShapeType (ShapeType type);
		ShapeType GetShapeType ();

		// -1Ϊû��drag��0 Ϊdrag����
		// �����¿�ʼ����ʱ��Ϊ1-8
		void SetDragIndex (int index);
		int GetDragIndex ();

		PX2::Movable *GetCtrlsGroup ();

		// PX2 Event
		virtual void DoEnter ();
		virtual void DoExecute (PX2::Event *event);
		virtual void DoLeave ();

		void OnLeftMouseDown (PX2::Renderer *renderer, const PX2::Vector2f &point);
		void OnLeftMouseUp (PX2::Renderer *renderer, const PX2::Vector2f &point);
		void OnMouseWheel (PX2::Renderer *renderer, float wheelDelta);
		void OnMouseMove (bool leftDown, PX2::Renderer *renderer, PX2::Vector2f posNow, 
			PX2::Vector2f posBefore);

	protected:
		void UpdateOnSelectUI();
		int _GetDragIndex (PX2::Renderer *renderer, const PX2::Vector2f &point);

		ShapeType mShapeType;

		int mDragIndex;
		PX2::SwitchNodePtr mCtrlsGroup;
		PX2::NodePtr mRectCtrl;
		PX2::NodePtr mCrossCtrl;
		float mSmallRectSize;
	};

#include "PX2UIObjectCtrl.inl"

}

#endif