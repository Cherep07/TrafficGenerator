
#include "main.hpp"
#include <iostream>

#define LOG(SEVERITY)  std::cout << std::endl << "(SEVERITY) "

int Configurator::dummy_function()
{
	return 5;
}

void init()
{
	return;
}

#ifndef CXXTEST_RUNNING
int main(void)
{
	//int i = 0;
	init();
	LOG(INFO) << "init done 2";
	std::cout << std::endl;
	return 0;
}
#endif
