#pragma once

#include "type.h"

#define RPP_TYPE() \
public:	\
virtual rpp::type& get_type() { return rpp::type::get_type_of(this); } \
private: