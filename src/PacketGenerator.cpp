
#include "PacketGenerator.hpp"

PacketGenerator::PacketGenerator(std::function<char* (int)> p_generator):
	generator(p_generator)
{}

char * PacketGenerator::generate(int packetNumber)
{
	return generator(packetNumber);
}

