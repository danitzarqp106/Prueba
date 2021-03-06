
//          Copyright John McFarlane 2015 - 2016.
// Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file ../../LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include "sg14/auxiliary/integer.h"
#include <sg14/fixed_point>

#define TEST_SATURATED_OVERFLOW
#define TEST_LABEL saturated_integer_

#if defined(_MSC_VER)
#define TEST_IGNORE_MSVC_INTERNAL_ERRORS_SATURATED
#define TEST_IGNORE_MSVC_INTERNAL_ERRORS
#endif

////////////////////////////////////////////////////////////////////////////////
// integer types used as fixed_point Rep type

using test_int = sg14::saturated_integer<>;

////////////////////////////////////////////////////////////////////////////////
// perform fixed_point tests with this type of fixed_point specialization

#include "fixed_point_common.h"
