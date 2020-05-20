
// �߻� Ŭ����
	// ��� Ŭ������ ����� �� ������
	// ���� ��ü�� ������ �� ���� Ŭ������ �߻� Ŭ������ ���Ѵ�.
// ���� Ŭ����
	// ���� ��ü�� ������ �� �ִ� Ŭ������ ���� Ŭ������ ���մϴ�.

// ���� �޼��� - �Լ� ������ ������ �� �ִ�.
	// �Ļ� ���Ŀ��� �������ϸ� ���� ��ü�� �޼��带 �����Ѵ�.
	// virtual void Foo()
// ���� ���� �޼��� - �Լ� ������ ������ �� ����.
	// �Ļ� ���Ŀ��� �������ϸ� �Ļ� ���� ��ü�� ������ �� �ֽ��ϴ�.
	// �Ļ� ���Ŀ��� ���������� ������ �Ļ� ���� ��ü�� ������ �� �����ϴ�. - �߻�Ŭ����
	// virtual void Foo()=0;
#include <iostream>
#include <string>
using namespace std;

class Musician // �߻� Ŭ����(���� ���� �޼��带 ���� �ִ�)
{
	string name;
public:
	Musician(string name)
	{
		this->name = name;
	}
	virtual void Play() = 0; // ���� ���� �޼���
	void Introduce()
	{
		cout << name << "���ǰ� : �ȳ�" << endl;
	}
	string GetName()const
	{
		return name;
	}
};

class PIanist :public Musician
{
public:
	// ��������� �⺻�����ڰ� �����ϱ� ��Ȯ�ϰ� � �����ڸ� ���� ��ü�� ��������� �ʱ�ȭ ����� ��.
	PIanist(string name) :Musician(name)
	{
		
	}
	virtual void Play()
	{
		cout << GetName() << "�����ϴ�" << endl;
		cout << "������" << endl;
	}
};
class Drummer :public Musician
{
public:
	// ��������� �⺻�����ڰ� �����ϱ� ��Ȯ�ϰ� � �����ڸ� ���� ��ü�� ��������� �ʱ�ȭ ����� ��.
	Drummer(string name) :Musician(name)
	{

	}
	virtual void Play()
	{
		cout << GetName() << "�����ϴ�" << endl;
		cout << "�εε�" << endl;
	}
};

void StartConsert(Musician *musician);
void StartConsert(Musician &musician);

int main()
{
	PIanist *pianist = new PIanist("�ǾƳ��");
	Drummer *drummer = new Drummer("�巳��");
	StartConsert(pianist);
	StartConsert(drummer);
	delete drummer;
	delete pianist;

	PIanist pianist2("�ǾƳ��2");
	Drummer drummer2("�巳��2");
	StartConsert(pianist2);
	StartConsert(drummer2);
	return 0;
}

void StartConsert(Musician *musician)
{
	musician->Introduce();
	musician->Play();
}

void StartConsert(Musician &musician)
{
	musician.Introduce();
	musician.Play();
}