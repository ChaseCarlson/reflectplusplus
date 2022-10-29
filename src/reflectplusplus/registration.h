#pragma once

#include "type.h"

#define EXPAND(x) x
#define RPP_TYPE_OVERLOAD(_1, _2, _3, _4, _5, MACRO, ...) MACRO
#define RPP_TYPE_NAME(name) public: static rpp::type get_type() { static rpp::type t = rpp::type::create<name>(#name, ""); return t; } private:
#define RPP_TYPE_INHERIT(name, ...) public: static rpp::type get_type() { static rpp::type t = rpp::type::create<name>(#name, #__VA_ARGS__); return t; } private:

#define RPP_TYPE(...) EXPAND(RPP_TYPE_OVERLOAD(__VA_ARGS__, RPP_TYPE_INHERIT, RPP_TYPE_INHERIT, RPP_TYPE_INHERIT, RPP_TYPE_INHERIT, RPP_TYPE_NAME)(__VA_ARGS__))
	