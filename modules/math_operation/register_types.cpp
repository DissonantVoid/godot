#include "register_types.h"

#include "core/object/class_db.h"
#include "math_operation.h"

void initialize_math_operation_module(ModuleInitializationLevel p_level) {
	if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE)
		ClassDB::register_class<MathOperation>();
}

void uninitialize_math_operation_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
		return;
}
