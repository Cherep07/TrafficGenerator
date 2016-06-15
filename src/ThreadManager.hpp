
#ifndef THREAD_MANAGER_HPP
#define THREAD_MANAGER_HPP

#include "GlobalDefs.hpp"
#include "PacketGenerator.hpp"

class TrafficParams
{
	public:
		TrafficParams();
	private:
		int packetSize;
		int interval;
		int numPacketsAtOnce;
		
};

class TrafficStats
{

};

class TrafficThread: public NonCopyable
{
	public:
		TrafficThread();
		virtual ~TrafficThread();

};

class ClientThread: public TrafficThread
{
	public:
		ClientThread();
		~ClientThread();
	private:
		ClientThread(const ClientThread &) = delete;
		ClientThread& operator= (const ClientThread &) = delete;
		int currntPacketNumber;
		PacketGenerator * packetGenerator;
		TrafficParams params;
};

class ServerThread: public TrafficThread
{
	public:
		ServerThread();
	private:
		TrafficStats stats;
};

class ThreadManager
{
	public:
		ThreadManager();
		int addServerThread();
		int addClientThread();
	private:
		std::list<ServerThread> serverThreads;
		std::list<ClientThread> clientThreads;
};

#endif //THREAD_MANAGER_HPP