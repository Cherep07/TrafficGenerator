
#ifndef GLOBAL_DEFS_HPP
#define GLOBAL_DEFS_HPP

#include <functional>

using GeneratorType=std::function<void (int, char*)>;

class NonCopyable
{
	public:
		NonCopyable(){}
		virtual ~NonCopyable(){};
	private:
		NonCopyable(const NonCopyable &) = delete;
		NonCopyable& operator= (const NonCopyable &) = delete;
};

#endif //GLOBAL_DEFS_HPP