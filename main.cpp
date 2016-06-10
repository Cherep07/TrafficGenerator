
#include "main.hpp"
#include <iostream>

#define LOG(SEVERITY)  std::cout << std::endl << "(SEVERITY) "

int main(void)
{
	LOG(INFO) << "init done 2";
	std::cout << std::endl;
	return 0;
}