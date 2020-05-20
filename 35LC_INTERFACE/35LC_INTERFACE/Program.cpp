
// 35. 인터페이스(Interface)

// 추상 클래스
	// 순수 가상 메서드를 갖고 있는 클래스
	// 실제 개체를 생설할 수 없다.
	// 기반 클래스로 사용할 수 있다.
	// 파생 클래스에서 순수 가상 메서드를 재정의하면 구상 클래스(개체를 생성할 수 있다.) 
	// 파생 클래스에서 순수 가상 메서드를 재정의하지 않으면 추상 클래스

// 인터페이스
	// 특정 기능을 구현할 것을 약속
	// 순수 가상 메서드만 멤버로 갖고 있고
	// 모든 멤버는 public 가시성을 갖는다.
	// C++언어에서는 인터페이스 형식을 제공하지 않는다.
	// 묵시적으로 추상 클래스
#include <iostream>
#include <string>
#define interface struct
using namespace std;

// 구조체는 디폴트 가시성이 public
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
		cout << name << " 연주하다" << endl;
	}
};

void Consert(IPlay *iplay);

int main()
{
	Man *man = new Man("홍길동");
	Consert(man);
	delete man;
	return 0;
}

void Consert(IPlay *iplay)
{
	iplay->Play();
}