
#include "PacketGenerator.hpp"
#include "Logger.hpp"
#include <cstring>

void SimpleTestTrafficGenerator(int packetNumber, char* buffer)
{
    buffer[0] = '0' + packetNumber/1000;
    buffer[1] = '0' + packetNumber%1000/100;
    buffer[2] = '0' + packetNumber%100/10;
    buffer[3] = '0' + packetNumber%10;
    LOG(INFO) << "pn:" << packetNumber << " buffer:" << *(int*)buffer;
}


PacketGenerator::PacketGenerator(GeneratorType p_generator, int p_bufferSize):
    generator(p_generator),
    buffer(new char[bufferSize]),
    bufferSize(p_bufferSize)
{
    char * buff = buffer.get();
    std::memset(buffer.get(), '-', bufferSize);
    for (int i=0; i<bufferSize/sizeof(int); i++, buff=buff+sizeof(int))
    {
        itoa(i+7777, buff, 10);
    }
    printBuffer();
    LOG(INFO) << buffer.get();
}

PacketGenerator::~PacketGenerator()
{
}

void PacketGenerator::printBuffer()
{
    LOG(INFO) << "BUFFER: ";
    for (int i=0; i<bufferSize; i++)
        LOG_SIMPLE(INFO) << "|" << buffer.get()[i];
}

char * PacketGenerator::generate(int packetNumber)
{

    LOG(INFO) << buffer.get();
	generator(packetNumber, buffer.get());
    LOG(INFO) << buffer.get();
	return buffer.get();
}

