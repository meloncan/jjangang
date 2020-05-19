
// OOP의 3대 특징
// 캡슐화, 상속, 다형성

// 형식의 다형성
	// 기반 형식 변수로 파생 개체를 참조해서 사용할 수 있다.

// 메서드의 다형성 
	// 기반 형식에 정의한 가상 메서드를 파생 형식에서 재정의
	// 실제 참조하고 있는 개체의 메서드를 수행한다.

#include <iostream>
using namespace std;

class Musician
{
public:
	virtual void Play() // virtual을 사용해서 실제 참조하고 있는 개체의 메서드를 수행하도록 한다.
	{
		cout << "연주하다" << endl;
	}
};

class Drummer:public Musician
{
public:
	void Play() // 재정의
	{
		cout << "딩동댕" << endl;
	}
};

class Pianist : public Musician
{
	void Play() // 재정의
	{
		cout << "두두둥" << endl;
	}
};

class Band
{
	//Pianist *pianist;
	//Drummer *drummer;
	// 다음과 같이 표현했을 때 핸들링에 편함
	Musician *member[2]; // 기반 형식의 포인터 변수로 파생 개체를 참조해서 사용할 수 있다.
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