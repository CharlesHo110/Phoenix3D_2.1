// PX2BitHacks.hpp

#ifndef PX2BITHACKS_HPP
#define PX2BITHACKS_HPP

#include "PX2MathematicsPre.hpp"

namespace PX2
{

	bool IsPowerOfTwo (unsigned int value);
	bool IsPowerOfTwo (int value);

	unsigned int Log2OfPowerOfTwo (unsigned int powerOfTwo);
	int Log2OfPowerOfTwo (int powerOfTwo);

	/// ���ٽ�������[0,1]��Χ�ڵ�32bit�ĸ�����F��ת����������[0,2^P-1]��32bit��
	// ����I��value��ʾF��power��ʾP������ֵ��ʾI��
	inline int ScaledFloatToInt (float value, int power);

#include "PX2BitHacks.inl"

}

#endif
