#pragma once

#include <string>
#include <vector>

namespace rpp {
	namespace detail {
		class string_util {
		public:
			static std::vector<std::string> split(std::string s, char delimiter);
			static std::string replace(std::string s, char oldValue, std::string newValue);
		};
	}
}