
#ifndef CONFIGURATOR_HPP
#define CONFIGURATOR_HPP

class Configurator
{
	public:
		static int dummy_function();
		void readCommandLine();
		void readConfig();
	private:
		int param;
};

#endif //CONFIGURATOR_HPP