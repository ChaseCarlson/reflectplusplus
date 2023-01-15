#pragma once

#include <iostream>

namespace rpp {
	template<typename Class, typename T>
	class property {
		rpp::type clazz;
		rpp::type type;
		std::string name;

	public:
		property(std::string name)
		{
			this->clazz = rpp::type::get_type<Class>();
			this->type = rpp::type::create<T>();
			this->name = name;
		}
	};
}