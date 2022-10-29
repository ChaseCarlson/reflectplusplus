#pragma once

#include <string>
#include <vector>
#include "detail/string_util.h"

namespace rpp {
	class type {
		std::string name;
		size_t size;
		std::vector<std::string> ancestorNames;
		type(std::string name)
		{
			this->name = name;
		}
			
	public:
		std::string get_name() { return name; }
		size_t get_size() { return size; }


		template<typename T>
		static rpp::type create(std::string name, std::string ancestorNamesCommaSeparated)
		{
			rpp::type newType(name);
			newType.size = sizeof(T);

			ancestorNamesCommaSeparated = detail::string_util::replace(ancestorNamesCommaSeparated, ' ', "");
			std::vector<std::string> ancestorNames = detail::string_util::split(ancestorNamesCommaSeparated, ',');

			newType.ancestorNames = ancestorNames;

			return newType;
		}
	};
}