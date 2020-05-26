//���� Ŭ������ ����ȭ - �Ļ� ���� catch���� �� �տ�
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
		//�Ļ� ���� catch���� �� �տ�
		catch (C *c)
		{
			cout << "���� C" << endl;
		}
		catch (B *b)
		{
			cout << "���� B" << endl;
		}
		catch (A *a)
		{
			cout << "���� A" << endl;
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