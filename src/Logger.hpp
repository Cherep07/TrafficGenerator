
#include <iostream>

#define INFO 3
#define LOG(SEVERITY)  std::cout << std::endl << #SEVERITY << " " << __FUNCTION__ << ": "
#define LOG_SIMPLE(SEVERITY)  std::cout
