
#ifndef PACKET_GENERATOR_HPP
#define PACKET_GENERATOR_HPP

#include <functional>

class PacketGenerator
{
	public:
		PacketGenerator() = delete;
		PacketGenerator(std::function<char* (int)>);
		char * generate(int);
	private:
		std::function<char* (int)>	generator;
};
#endif // PACKET_GENERATOR_HPP