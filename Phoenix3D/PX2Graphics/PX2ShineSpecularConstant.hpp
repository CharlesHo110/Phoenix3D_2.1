// PX2ShineSpecularConstant.hpp

#ifndef PX2MATERIALSPECULARCONSTANT_HPP
#define PX2MATERIALSPECULARCONSTANT_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2ShaderFloat.hpp"
#include "PX2Shine.hpp"

namespace PX2
{

	class ShineSpecularConstant : public ShaderFloat
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(ShineSpecularConstant);

	public:
		ShineSpecularConstant (Shine* shine);
		virtual ~ShineSpecularConstant ();

		Shine* GetShine ();

		virtual void Update (const Renderable* renderable, const Camera* camera);

		virtual void Float_OnRegistProperties (Object *parObj);
		virtual void Float_OnPropertyChanged (Object *parObj, const PropertyObject &obj);

	protected:
		ShinePtr mShine;
	};

	PX2_REGISTER_STREAM(ShineSpecularConstant);
	typedef Pointer0<ShineSpecularConstant> ShineSpecularConstantPtr;

}

#endif
