
//메서드의 다형성
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
		cout << name << " 연주하다." << endl;
	}
	void Introduce()
	{
		cout << name << " 음악가: 안녕" << endl;
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
		cout << GetName() << " 연주하다." << endl;
		cout << "딩동댕 ♩♪♬" << endl;
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
		cout << GetName() << " 연주하다." << endl;
		cout << "두두둥~~~" << endl;
	}
};

void StartConcert(Musician *musician);
void StartConcert(Musician &musician);

int main()
{
	Pianist *pianist1 = new Pianist("피아노맨1");
	Drummer *drummer1 = new Drummer("두둥맨1");
	StartConcert(pianist1);
	StartConcert(drummer1);
	delete pianist1;
	delete drummer1;

	Pianist pianist2("피아노맨2");
	Drummer drummer2("두둥맨2");
	StartConcert(pianist2);
	StartConcert(drummer2);
	return 0;
}
void StartConcert(Musician *musician) // 기반 형식의 포인터(주소) 변수가 해당 파생개체를 가르치게 할 수 있음.
{
	musician->Introduce();
	musician->Play();
}
void StartConcert(Musician &musician) // 기반 형식의 참조자를 통해 컴파일시 할당된 해당 파생객체의 주소를 치환해서 받아오는 것이 됨.
{
	musician.Introduce();
	musician.Play();
}