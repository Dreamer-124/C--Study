#include <iostream>

#define LOG(x) std::cout << x << std::endl

void point_heap()
{
	char* buffer = new char[8];
	memset(buffer, 0, 8);  // 在堆中申请内存

	char** ptr = &buffer;  // 双指针
	delete[] buffer;  // 释放内存
}

void point_stack()
{
	int var = 8;  // 在栈中申请内存
	int* ptr = &var;
	*ptr = 10;
	LOG(var);
}

void Increment(int& value)
{
	value++;
}

void reference()
{
	int a = 5;
	Increment(a);
	LOG(a);
}

class Player
{
	public:
		int x, y;
		int speed;

		void Move(int xa, int ya)
		{
			x += xa * speed;
			y += ya * speed;
		}
};

void class_implement()
{
	Player player;
	player.Move(1, -1);
}

class Log
{
public:
	enum Level
	{
		levelError = 0, levelWarning, levelInfo
	};
private:
	Level m_LogLevel = levelInfo;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= levelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= levelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= levelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

void log()
{
	Log log;
	log.SetLevel(Log::levelWarning);
	log.Error("Hello");
	log.Warn("Hello");
	log.Info("Hello");
}

void Function()
{
	static int i = 0;  // 生存周期是程序的
	i++;
	std::cout << i << std::endl;
}

void local_static()
{
	for (int j = 0; j < 5; j++)
	{
		Function();
	}
}

class Singleton
{
public:
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}

	void Hello() {}
};

void get_instance()
{
	Singleton::Get().Hello();
}

int main()
{
	log();
	std::cin.get();
}
 