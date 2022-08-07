#pragma once

#include <vector>


template <typename T, typename R>
class IDataParser
{
	public:
		virtual T parser(R data) = 0;
};