/*
* Phoenix 3D ��Ϸ���� Version 2.0
*
* Copyright (C) 2009-2011 http://www.Phoenix3d.org/
*
* �ļ�����	��	PX2LightNode.hpp
*
* �汾		:	1.0 (2011/02/01)
*
* ����		��	more
*
*/

#ifndef PX2LIGHTNODE_H
#define PX2LIGHTNODE_H

#include "PX2GraphicsPre.hpp"
#include "PX2Light.hpp"
#include "PX2Node.hpp"

namespace PX2
{

	/// ��Դ�ڵ㣨Node����
	/**
	* Node������任������Light�Ŀռ䷽λ��Node��������ת��������Light����
	* ���᷽������任�ĵ�0���ǹ�Դ����direction����������1���ǹ�Դ���ϣ�up��
	* ��������2���ǹ�Դ���ң�right��������
	*/
	class LightNode : public Node
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(LightNode);

	public:
		/// ���캯��
		/**
		* �ڹ��캯���У���Դ�ĵ�ǰ����ϵͳ����ΪNode�ı��ر任��
		*	local translation		= light location
		*	local rotation column 0 = light direction
		*	local rotation column 1 = light up
		*	local rotation column 2 = light right
		*/
		LightNode (Light* light = 0);
		virtual ~LightNode ();

		/// ���ù�Դ
		/**
		* ��Դ�ĵ�ǰ����ϵͳ������ΪNode�ı��ر任,Ȼ�����Update����
		* ������任;
		*/
		void SetLight (Light* light);

		inline Light* GetLight ();
		inline const Light* GetLight () const;

		virtual void OnAttach ();
		virtual void OnDetach ();

	protected:
		virtual void UpdateWorldData (double applicationTime);

		LightPtr mLight;
	};

	PX2_REGISTER_STREAM(LightNode);
	typedef Pointer0<LightNode> LightNodePtr;
#include "PX2LightNode.inl"

}

#endif