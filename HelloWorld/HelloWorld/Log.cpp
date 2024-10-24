#include <iostream>  // 预处理，#之后的都是预处理语句，在编译发生之前就被处理了

void Log(const char* message)
{
	std::cout << message << std::endl;
}