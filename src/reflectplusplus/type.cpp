#pragma once

#include "type.h"

std::map<size_t, rpp::type> rpp::type::registry;

bool rpp::type::operator==(rpp::type& other)
{
	return this->id == other.id;
}