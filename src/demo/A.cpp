#pragma once

#include "A.h"
#include "reflectplusplus/type.h"
#include "reflectplusplus/property.h"

static const rpp::type t_A = rpp::type::create<A>("A");

static rpp::property<A, std::string> prop_name("prop_on_A");