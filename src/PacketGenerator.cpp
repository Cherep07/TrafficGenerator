
#include "PacketGenerator.hpp"

char* SimpleTestTrafficGenerator(int packetNumber, char* buffer)
{
	return buffer;
}


PacketGenerator::PacketGenerator(GeneratorType p_generator, int bufferSize):
	generator(p_generator)
{
	buffer = new char[bufferSize];
}

PacketGenerator::~PacketGenerator()
{
	delete[] buffer;
}

char * PacketGenerator::generate(int packetNumber)
{
	generator(packetNumber, buffer);
	return buffer;
}

