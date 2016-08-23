
#ifndef PACKET_GENERATOR_HPP
#define PACKET_GENERATOR_HPP

#include <memory>
#include "GlobalDefs.hpp"
#include <iostream>

void SimpleTestTrafficGenerator(int, char*);

class PacketGenerator
{
public:
    PacketGenerator() = delete;
    PacketGenerator(GeneratorType, int);
    virtual ~PacketGenerator();
    virtual void operator()() = delete;
    char * generate(int);
    void printBuffer();
private:
    GeneratorType generator;
    std::unique_ptr<char[]> buffer;
    int bufferSize;
};



#endif // PACKET_GENERATOR_HPP
