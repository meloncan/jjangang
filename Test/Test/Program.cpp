
//�޼����� ������
//Program.cpp
#include <iostream>
#include <string>
using namespace std;
class Musician
{
	string name;
public:
	Musician(string name)
	{
		this->name = name;
	}
	virtual void Play()
	{
		cout << name << " �����ϴ�." << endl;
	}
	void Introduce()
	{
		cout << name << " ���ǰ�: �ȳ�" << endl;
	}
	string GetName()const
	{
		return name;
	}
};

class Pianist :public Musician
{
public:
	Pianist(string name) :Musician(name)
	{
	}
	virtual void Play()
	{
		cout << GetName() << " �����ϴ�." << endl;
		cout << "������ �ۢܢ�" << endl;
	}
};
class Drummer :public Musician
{
public:
	Drummer(string name) :Musician(name)
	{
	}
	virtual void Play()
	{
		cout << GetName() << " �����ϴ�." << endl;
		cout << "�εε�~~~" << endl;
	}
};

void StartConcert(Musician *musician);
void StartConcert(Musician &musician);

int main()
{
	Pianist *pianist1 = new Pianist("�ǾƳ��1");
	Drummer *drummer1 = new Drummer("�εո�1");
	StartConcert(pianist1);
	StartConcert(drummer1);
	delete pianist1;
	delete drummer1;

	Pianist pianist2("�ǾƳ��2");
	Drummer drummer2("�εո�2");
	StartConcert(pianist2);
	StartConcert(drummer2);
	return 0;
}
void StartConcert(Musician *musician) // ��� ������ ������(�ּ�) ������ �ش� �Ļ���ü�� ����ġ�� �� �� ����.
{
	musician->Introduce();
	musician->Play();
}
void StartConcert(Musician &musician) // ��� ������ �����ڸ� ���� �����Ͻ� �Ҵ�� �ش� �Ļ���ü�� �ּҸ� ġȯ�ؼ� �޾ƿ��� ���� ��.
{
	musician.Introduce();
	musician.Play();
}