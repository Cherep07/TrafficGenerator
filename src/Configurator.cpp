
#include "Configurator.hpp"
#include "Logger.hpp"

int Configurator::dummy_function()
{
    LOG(INFO) << "dummy_function called";
	return 5;
}

void Configurator::readCommandLine()
{

    LOG(INFO) << "readCommandLine called";
}

void Configurator::readConfig()
{
    LOG(INFO) << "readConfig called";
}
