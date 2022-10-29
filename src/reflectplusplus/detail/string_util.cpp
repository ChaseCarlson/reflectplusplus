#include "string_util.h"

#include <sstream>
#include <algorithm>

namespace rpp {
	namespace detail {

			std::vector<std::string> string_util::split(std::string s, char delimiter)
			{
				std::istringstream ss(s);
				std::string data;
				std::vector<std::string> tokens;
				while (std::getline(ss, data, delimiter))
				{
					tokens.push_back(data);
				}
				return tokens;
			}

			std::string string_util::replace(std::string s, char oldValue, std::string newValue)
			{
				std::vector<std::string> splitAtOldValue = string_util::split(s, oldValue);
				std::string endString;
				for (int i = 0; i < splitAtOldValue.size(); i++)
				{
					endString += splitAtOldValue[i];
					if (i + 1 < splitAtOldValue.size())
					{
						endString += newValue;
					}
				}
				return endString;
			}
	}
}