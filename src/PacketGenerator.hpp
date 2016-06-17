
#ifndef PACKET_GENERATOR_HPP
#define PACKET_GENERATOR_HPP

#include <memory>
#include "GlobalDefs.hpp"

void SimpleTestTrafficGenerator(int, char*);

class PacketGenerator
{
	public:
		PacketGenerator() = delete;
		PacketGenerator(GeneratorType, int);
		~PacketGenerator();
		char * generate(int);
	private:
		GeneratorType generator;
		std::unique_ptr<char[]> buffer;
};
#endif // PACKET_GENERATOR_HPP