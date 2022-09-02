#include "math_operation.h"

MathOperation::MathOperation()
{

}

uint32_t MathOperation::get_pow(uint16_t num, uint16_t pow) const
{
	uint32_t ret = num;
	for (uint16_t i = 1; i < pow; i++)
		ret *= num;

	return ret;
}

//protected
void MathOperation::_bind_methods()
{
	ClassDB::bind_method(D_METHOD("get_pow", "num", "pow"), &MathOperation::get_pow);
}
