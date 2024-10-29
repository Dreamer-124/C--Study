#include <iostream>

#define LOG(x) std::cout << x << std::endl


void point_heap()
{
	char* buffer = new char[8];
	memset(buffer, 0, 8);  // �ڶ��������ڴ�

	char** ptr = &buffer;  // ˫ָ��
	delete[] buffer;  // �ͷ��ڴ�
}

void point_stack()
{
	int var = 8;  // ��ջ�������ڴ�
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

int main()
{
	class_implement();
	std::cin.get();
}
 