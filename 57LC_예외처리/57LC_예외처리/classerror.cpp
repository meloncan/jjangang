//예외 클래스의 계층화 - 파생 예외 catch문을 맨 앞에
#include <iostream>
using namespace std;

class A
{
};

class B :public A
{
};

class C :public B
{
};

void FunctionA(int value);

int main()
{
	for (int i = 0; i<3; i++)
	{
		try
		{
			FunctionA(i);
		}
		//파생 예외 catch문을 맨 앞에
		catch (C *c)
		{
			cout << "예외 C" << endl;
		}
		catch (B *b)
		{
			cout << "예외 B" << endl;
		}
		catch (A *a)
		{
			cout << "예외 A" << endl;
		}
	}
	return 0;
}

void FunctionA(int value)
{
	switch (value)
	{
	case 0: throw new A();
	case 1: throw new B();
	case 2: throw new C();
	}
}