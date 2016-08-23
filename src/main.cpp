
#include "main.hpp"
#include "Logger.hpp"
#include "Configurator.hpp"
#include "PacketGenerator.hpp"


#ifndef CXXTEST_RUNNING
int main(void)
{
	Configurator configurator;
	configurator.readCommandLine();
	configurator.readConfig();
	
    LOG(INFO) << "init done";

    PacketGenerator testGenerator(SimpleTestTrafficGenerator, 100);

    LOG(INFO) << testGenerator.generate(555);

	std::cout << std::endl;
	return 0;
}
#endif
