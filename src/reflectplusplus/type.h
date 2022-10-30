#pragma once

#include <string>
#include <typeinfo>
#include <iostream>
#include "detail/string_util.h"
#include <map>

namespace rpp {
	class type {
		static std::map<size_t, rpp::type*> registry;

		size_t id;
		std::string name;
		size_t super;
		size_t size;
			
	public:
		std::string get_name() { return name; }
		size_t get_size() { return size; }

		bool operator==(rpp::type& other);

		template<typename T>
		static rpp::type& get_type()
		{
			return *registry[typeid(T).hash_code()];
		}

		template<typename T>
		static rpp::type& get_type_of(T* t)
		{
			return get_type<T>();
		}

		template<typename T>
		static rpp::type& create(std::string name)
		{
			rpp::type* newType = new rpp::type;
			newType->id = typeid(T).hash_code();
			newType->name = name;
			newType->size = sizeof(T);

			registry[newType->id] = newType;

			return *newType;
		}

		template<typename T, typename Super>
		static rpp::type create(std::string name)
		{
			rpp::type newType create<T>(name);
			newType.super = typeid(Super).hash_code();

			return newType;
		}
	};
}