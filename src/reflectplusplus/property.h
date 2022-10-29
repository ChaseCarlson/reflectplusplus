#pragma once

#include <iostream>

namespace rpp {
	template<typename Class, typename T>
	class property {
		property() {
			std::cout << "ok" << std::endl;
		}
	};
}