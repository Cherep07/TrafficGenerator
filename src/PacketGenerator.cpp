
#include "PacketGenerator.hpp"

void SimpleTestTrafficGenerator(int packetNumber, char* buffer)
{
	*(int*)buffer = packetNumber;
}


PacketGenerator::PacketGenerator(GeneratorType p_generator, int bufferSize):
	generator(p_generator),
	buffer(new char[bufferSize])
{
	
}

PacketGenerator::~PacketGenerator()
{
}

char * PacketGenerator::generate(int packetNumber)
{
	generator(packetNumber, buffer.get());
	return buffer.get();
}

