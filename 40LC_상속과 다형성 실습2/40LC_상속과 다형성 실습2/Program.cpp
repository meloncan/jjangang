//여러분께서 먼저 작성해 본 후에 비교해 보세요.작성하다 막히면 앞에 상속과 다형성에 관한 내용을 보시면서 하시기 바랍니다.여기에 작성한 것을 보면서 그대로 따라하는 것은 큰 의미가 없어요.
#include <iostream>
#include <string>
using namespace std;



class Diagram // 기반 형식
{
	//도형
	//도형 ID를 순차적으로 부여합니다.
	// C++에서 정적 멤버란 클래스에는 속하지만, 
	// 정적 멤버 static : 객체 별로 할당되지 않고 클래스의 모든 객체가 공유하는 멤버를 의미합니다
	const int id; // 비정적 상수화 멤버
	static int last_id; // 가장 최근에 부여한 ID(정적 멤버)
public:
	// 비 정적 상수화 멤버 필드는 생성자에서 반드시 초기화 기법으로 상수 값을 설정해야 합니다.
	Diagram():id(++last_id)
	{
		
	}
	//순수 가상 메서드로 Draw 메서드를 제공합니다.
	virtual void Draw() = 0;
protected:
	//파생 형식에서도 접근 가능한 GetID 접근자를 제공합니다.
	int GetID()const
	{
		return id;
	}
};

//static 멤버 필드는 멤버 필드 선언을 해야 함, 선언문에서 static 키워드 사용 안 함
int Diagram::last_id; // 정적 멤버 필드 선언

class Point : public Diagram
{
	//점
	//x와 y 좌표 멤버를 갖습니다.
	int y;
	int x;
public:
	//생성자에서 x, y 좌표를 입력 인자로 받습니다.
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	//Draw 메서드를 재정의합니다.
	virtual void Draw()
	{
		cout << GetID() << " 점(" << x << "," << y << ")" << endl;
	}
};

class Line : public Diagram
{
	//선
	//두 개의 점을 멤버로 갖습니다.
	//Point type
	Point *p1;
	Point *p2;
public:
	//생성자에서 두 점의 x, y 좌표를 입력 인자로 받습니다.
	Line(int x1, int y1, int x2, int y2)
	{
		p1 = new Point(x1, y1);
		p2 = new Point(x2, y2);
	}
	// 자기 내에서 생성한게 있다라면 자기 자신이 소멸할 때 해당 개체를 소멸해야한다.
	~Line()
	{
		delete p1;
		delete p2;
	}
	//Draw 메서드를 재정의합니다.
	virtual void Draw()
	{
		cout << GetID() << "선" << endl;
		cout << "  ";
		p1->Draw();
		cout << "  ";
		p2->Draw();
	}
};

#define interface struct
interface IGetArea
{
	//IGetArea
	//GetArea 순수 가상 메서드를 멤버로 갖는 인터페이스입니다.
	virtual int GetArea()const = 0; // = 0; : 메서드 내부를 정의하지 않겠다
};

class Rectangle : public IGetArea, public Diagram
{
	//사각형
	//왼쪽 상단 좌표(left, top)와 우측 하단 좌표(right, bottom)를 멤버로 갖습니다.
	int bottom;
	int left;
	int right;
	int top;
public:
	//생성자에서 왼쪽 상단 좌표와 우측 하단 좌표를 입력 인자로 받습니다.
	Rectangle(int left, int top, int right, int bottom)
	{
		this->bottom = bottom;
		this->left = left;
		this->right = right;
		this->top = top;
	}
	//Draw 메서드를 재정의합니다.
	virtual void Draw()
	{
		cout << GetID() << " 사각형";
		cout << "(" << left << "," << top << ")" << "(" << right << "," << bottom << ")" << endl;
	}
	//GetArea 메서드를 재정의합니다.
	virtual int GetArea()const
	{
		int width = right - left;
		if (width<0) //폭이 음수일 때
		{
			width = -width; //양수로 전환
		}

		int height = bottom - top;
		if (height<0) //폭이 음수일 때
		{
			height = -height; //양수로 전환
		}
		return width * height;
	}
};

void TestGetArea(IGetArea *iga)
{
	cout << "  면적:" << iga->GetArea() << endl;;
}

int main()
{
	Diagram *diagrams[3]; // 포인터 배열 변수
	diagrams[0] = new Point(3, 4);
	diagrams[1] = new Line(0, 0, 5, 5);
	diagrams[2] = new Rectangle(0, 0, 10, 10);


	for (int i = 0; i<3; i++)
	{
		diagrams[i]->Draw();
		// 이중에서 면적을 계산할 수 있는 개체와 없는 개체가 있는데
		// 런타임에 dynamic_cast 이용해서 해당되는 개체가 IGetArea 개체인지 확인하는것
		IGetArea *iga = dynamic_cast<IGetArea *>(diagrams[i]);
		if (iga)
		{
			TestGetArea(iga);
		}
	}
	for (int i = 0; i<3; i++)
	{
		delete diagrams[i];
	}
	return 0;
}