
// 35. �������̽�(Interface)

// �߻� Ŭ����
	// ���� ���� �޼��带 ���� �ִ� Ŭ����
	// ���� ��ü�� ������ �� ����.
	// ��� Ŭ������ ����� �� �ִ�.
	// �Ļ� Ŭ�������� ���� ���� �޼��带 �������ϸ� ���� Ŭ����(��ü�� ������ �� �ִ�.) 
	// �Ļ� Ŭ�������� ���� ���� �޼��带 ���������� ������ �߻� Ŭ����

// �������̽�
	// Ư�� ����� ������ ���� ���
	// ���� ���� �޼��常 ����� ���� �ְ�
	// ��� ����� public ���ü��� ���´�.
	// C++������ �������̽� ������ �������� �ʴ´�.
	// ���������� �߻� Ŭ����
#include <iostream>
#include <string>
#define interface struct
using namespace std;

// ����ü�� ����Ʈ ���ü��� public
interface IPlay
{
	virtual void Play() = 0;
};

class Man :public  IPlay
{
	string name;
public:
	Man(string name)
	{
		this->name = name;
	}
	virtual void Play()
	{
		cout << name << " �����ϴ�" << endl;
	}
};

void Consert(IPlay *iplay);

int main()
{
	Man *man = new Man("ȫ�浿");
	Consert(man);
	delete man;
	return 0;
}

void Consert(IPlay *iplay)
{
	iplay->Play();
}