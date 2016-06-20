
#include <list>
#include "ThreadManager.hpp"


TrafficParams::TrafficParams():
	packetSize(0),
	interval(0),
	numPacketsAtOnce(0)
{}

TrafficThread::TrafficThread()
{}

TrafficThread::~TrafficThread()
{}
ClientThread::ClientThread():
	TrafficThread(),
	currntPacketNumber(0), 
	packetGenerator(nullptr),
	params()
{
}
		

ClientThread::~ClientThread()
{}		