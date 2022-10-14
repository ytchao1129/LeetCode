
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int reverse(int x) 
{
	auto str = to_string(x);
	string result = "";
	for (size_t i = str.length() - 1; i > 0; i--)
	{
		result += str[i];
	}

	if (x >= 0)
	{
		result += str[0];
	}
	else
	{
		result = "-" + result;
	}

	try {
		int iResult = stoi(result);
		return iResult;
	}
	catch (std::exception& e) {
		return 0;
	}
}

int main()
{
    std::cout << "Hello World!\n";

	reverse(-123);
}
