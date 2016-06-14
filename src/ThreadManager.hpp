
#ifndef THREAD_MANAGER_HPP
#define THREAD_MANAGER_HPP

#include <functional>

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

class TrafficThread
{
	public:
		TrafficThread();
		virtual ~TrafficThread();

};

class ClientThread: public TrafficThread
{
	public:
		ClientThread();
	private:
		int currntPacketNumber;
		std::function<char* (int)> packetGenerator;
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