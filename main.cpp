
#include "main.hpp"
#include <iostream>

#define LOG(SEVERITY)  std::cout << "SEVERITY"

int main(void)
{
	LOG(INFO) << "init done" << std::endl;
	return 0;
	
}