// PX2ShineAmbientConstant.hpp

#ifndef PX2SHINEAMBIENTCONSTANT_HPP
#define PX2SHINEAMBIENTCONSTANT_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2ShaderFloat.hpp"
#include "PX2Shine.hpp"

namespace PX2
{

	class ShineAmbientConstant : public ShaderFloat
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(ShineAmbientConstant);

	public:
		ShineAmbientConstant (Shine* shine);
		virtual ~ShineAmbientConstant ();

		Shine* GetShine ();

		virtual void Update (const Renderable* renderable, const Camera* camera);

		virtual void Float_OnRegistProperties (Object *parObj);
		virtual void Float_OnPropertyChanged (Object *parObj, const PropertyObject &obj);

	protected:
		ShinePtr mShine;
	};

	PX2_REGISTER_STREAM(ShineAmbientConstant);
	typedef Pointer0<ShineAmbientConstant> ShineAmbientConstantPtr;

}

#endif
