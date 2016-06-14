
#ifndef THREAD_MANAGER_HPP
#define THREAD_MANAGER_HPP

class TrafficThread
{
	
};

class ClientThread: public TrafficThread
{
	
};

class ServerThread: public TrafficThread
{
	
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