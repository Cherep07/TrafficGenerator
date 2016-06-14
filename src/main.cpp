
#include "main.hpp"
#include "Configurator.hpp"
#include <iostream>

#define LOG(SEVERITY)  std::cout << std::endl << "(SEVERITY) "

#ifndef CXXTEST_RUNNING
int main(void)
{
	Configurator configurator;
	configurator.readCommandLine();
	configurator.readConfig();
	
	LOG(INFO) << "init done 2";
	std::cout << std::endl;
	return 0;
}
#endif
