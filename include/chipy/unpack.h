#pragma once

#include "chipy/Value.h"

namespace chipy
{

/// Helper functions to quickly convert from chipy to std

bool unpack_bool(ValuePtr val)
{
    auto bval = value_cast<BoolVal>(val);
    return bval->get();
}

int32_t unpack_integer(ValuePtr val)
{
    auto ival = value_cast<IntVal>(val);
    return ival->get();
}

}
