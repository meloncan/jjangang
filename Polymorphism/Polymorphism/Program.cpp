
// OOP�� 3�� Ư¡
// ĸ��ȭ, ���, ������

// ������ ������
	// ��� ���� ������ �Ļ� ��ü�� �����ؼ� ����� �� �ִ�.

// �޼����� ������ 
	// ��� ���Ŀ� ������ ���� �޼��带 �Ļ� ���Ŀ��� ������
	// ���� �����ϰ� �ִ� ��ü�� �޼��带 �����Ѵ�.

#include <iostream>
using namespace std;

class Musician
{
public:
	virtual void Play() // virtual�� ����ؼ� ���� �����ϰ� �ִ� ��ü�� �޼��带 �����ϵ��� �Ѵ�.
	{
		cout << "�����ϴ�" << endl;
	}
};

class Drummer:public Musician
{
public:
	void Play() // ������
	{
		cout << "������" << endl;
	}
};

class Pianist : public Musician
{
	void Play() // ������
	{
		cout << "�εε�" << endl;
	}
};

class Band
{
	//Pianist *pianist;
	//Drummer *drummer;
	// ������ ���� ǥ������ �� �ڵ鸵�� ����
	Musician *member[2]; // ��� ������ ������ ������ �Ļ� ��ü�� �����ؼ� ����� �� �ִ�.
public:
	Band()
	{
		member[0] = new Pianist();
		member[1] = new Drummer();
	}
	void Play()
	{
		for (int i = 0; i < 2; i++)
		{
			member[i]->Play();
		}
	}
};

int main()
{
	Band *band = new Band();
	band->Play();
	delete band;

	//Musician *musi = new Pianist();
	//delete musi;
	//
	//Pianist pianist;
	//Musician &mu = pianist;

	return 0;
}