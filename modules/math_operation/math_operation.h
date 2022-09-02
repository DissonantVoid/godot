#ifndef MATH_OPERATION
#define MATH_OPERATION

#include "core/object/ref_counted.h"

class MathOperation : public RefCounted
{
GDCLASS(MathOperation,RefCounted)
public:
	MathOperation();
	uint32_t get_pow(uint16_t num, uint16_t pow) const;
protected:
	static void _bind_methods();
};

#endif
