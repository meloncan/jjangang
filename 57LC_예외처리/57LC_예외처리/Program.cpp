
//57.����ó��
//����
	//���� - ����ڰ� �߸� ����� ��
	//���� - �����ڰ� ���� ������ �ۼ��� ��
	//���� - ���α׷��� �� �̻� �������� ���� ��
		//�ܺ� �ý��� ����

#include <iostream>

using namespace std;

void FunctionB(int value);
void FunctionA(int value);

int main()
{
	try {
		cout << "main - 1" << endl;
		FunctionB(3);
		cout << "main - 2" << endl;
		FunctionA(-2);
		cout << "main - 3" << endl;
	}
	catch(const char *exmsg) // ���ڿ��� ������
	{
		cout << "���� �߻�" << exmsg << endl;
	}
	return 0;
}

void FunctionB(int value)
{
	cout << "FunctionB -1" << endl;
	FunctionA(value);
	cout << "FunctionB -2" << endl;
}
void FunctionA(int value)
{
	cout << "FunctionA -1" << endl;
	if (value > 0)
	{
		cout << "��:" << value << endl;
	}
	else
	{
		throw "���� ���� �����Ͽ����ϴ�";
	}
}