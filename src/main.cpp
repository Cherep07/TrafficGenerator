
#include "main.hpp"
#include <iostream>

#define LOG(SEVERITY)  std::cout << std::endl << "(SEVERITY) "

int Configurator::dummy_function()
{
	return 5;
}

void Configurator::readCommandLine()
{
	
}

void Configurator::readConfig()
{
	
}

#ifndef CXXTEST_RUNNING
int main(void)
{
	LOG(INFO) << "init done 2";
	std::cout << std::endl;
	return 0;
}
#endif
