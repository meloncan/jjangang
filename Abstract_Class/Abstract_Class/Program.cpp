
// 추상 클래스
	// 기반 클래스로 사용할 수 있지만
	// 실제 개체를 생성할 수 없는 클래스를 추상 클래스라 말한다.
// 구상 클래스
	// 실제 개체를 생성할 수 있는 클래스를 구상 클래스라 말합니다.

// 가상 메서드 - 함수 본문을 정의할 수 있다.
	// 파생 형식에서 재정의하면 실제 개체의 메서드를 수행한다.
	// virtual void Foo()
// 순수 가상 메서드 - 함수 본문을 정의할 수 없다.
	// 파생 형식에서 재정의하면 파생 형식 개체는 생성할 수 있습니다.
	// 파생 형식에서 재정의하지 않으면 파생 형식 개체도 생성할 수 없습니다. - 추상클래스
	// virtual void Foo()=0;
#include <iostream>
#include <string>
using namespace std;

class Musician // 추상 클래스(순수 가상 메서드를 갖고 있다)
{
	string name;
public:
	Musician(string name)
	{
		this->name = name;
	}
	virtual void Play() = 0; // 순수 가상 메서드
	void Introduce()
	{
		cout << name << "음악가 : 안녕" << endl;
	}
	string GetName()const
	{
		return name;
	}
};

class PIanist :public Musician
{
public:
	// 기반형식의 기본생성자가 없으니까 명확하게 어떤 생성자를 통해 개체를 만들것인지 초기화 해줘야 함.
	PIanist(string name) :Musician(name)
	{
		
	}
	virtual void Play()
	{
		cout << GetName() << "연주하다" << endl;
		cout << "딩동댕" << endl;
	}
};
class Drummer :public Musician
{
public:
	// 기반형식의 기본생성자가 없으니까 명확하게 어떤 생성자를 통해 개체를 만들것인지 초기화 해줘야 함.
	Drummer(string name) :Musician(name)
	{

	}
	virtual void Play()
	{
		cout << GetName() << "연주하다" << endl;
		cout << "두두둥" << endl;
	}
};

void StartConsert(Musician *musician);
void StartConsert(Musician &musician);

int main()
{
	PIanist *pianist = new PIanist("피아노맨");
	Drummer *drummer = new Drummer("드럼맨");
	StartConsert(pianist);
	StartConsert(drummer);
	delete drummer;
	delete pianist;

	PIanist pianist2("피아노맨2");
	Drummer drummer2("드럼맨2");
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