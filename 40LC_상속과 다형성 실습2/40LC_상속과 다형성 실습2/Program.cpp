//�����в��� ���� �ۼ��� �� �Ŀ� ���� ������.�ۼ��ϴ� ������ �տ� ��Ӱ� �������� ���� ������ ���ø鼭 �Ͻñ� �ٶ��ϴ�.���⿡ �ۼ��� ���� ���鼭 �״�� �����ϴ� ���� ū �ǹ̰� �����.
#include <iostream>
#include <string>
using namespace std;



class Diagram // ��� ����
{
	//����
	//���� ID�� ���������� �ο��մϴ�.
	// C++���� ���� ����� Ŭ�������� ��������, 
	// ���� ��� static : ��ü ���� �Ҵ���� �ʰ� Ŭ������ ��� ��ü�� �����ϴ� ����� �ǹ��մϴ�
	const int id; // ������ ���ȭ ���
	static int last_id; // ���� �ֱٿ� �ο��� ID(���� ���)
public:
	// �� ���� ���ȭ ��� �ʵ�� �����ڿ��� �ݵ�� �ʱ�ȭ ������� ��� ���� �����ؾ� �մϴ�.
	Diagram():id(++last_id)
	{
		
	}
	//���� ���� �޼���� Draw �޼��带 �����մϴ�.
	virtual void Draw() = 0;
protected:
	//�Ļ� ���Ŀ����� ���� ������ GetID �����ڸ� �����մϴ�.
	int GetID()const
	{
		return id;
	}
};

//static ��� �ʵ�� ��� �ʵ� ������ �ؾ� ��, ���𹮿��� static Ű���� ��� �� ��
int Diagram::last_id; // ���� ��� �ʵ� ����

class Point : public Diagram
{
	//��
	//x�� y ��ǥ ����� �����ϴ�.
	int y;
	int x;
public:
	//�����ڿ��� x, y ��ǥ�� �Է� ���ڷ� �޽��ϴ�.
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	//Draw �޼��带 �������մϴ�.
	virtual void Draw()
	{
		cout << GetID() << " ��(" << x << "," << y << ")" << endl;
	}
};

class Line : public Diagram
{
	//��
	//�� ���� ���� ����� �����ϴ�.
	//Point type
	Point *p1;
	Point *p2;
public:
	//�����ڿ��� �� ���� x, y ��ǥ�� �Է� ���ڷ� �޽��ϴ�.
	Line(int x1, int y1, int x2, int y2)
	{
		p1 = new Point(x1, y1);
		p2 = new Point(x2, y2);
	}
	// �ڱ� ������ �����Ѱ� �ִٶ�� �ڱ� �ڽ��� �Ҹ��� �� �ش� ��ü�� �Ҹ��ؾ��Ѵ�.
	~Line()
	{
		delete p1;
		delete p2;
	}
	//Draw �޼��带 �������մϴ�.
	virtual void Draw()
	{
		cout << GetID() << "��" << endl;
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
	//GetArea ���� ���� �޼��带 ����� ���� �������̽��Դϴ�.
	virtual int GetArea()const = 0; // = 0; : �޼��� ���θ� �������� �ʰڴ�
};

class Rectangle : public IGetArea, public Diagram
{
	//�簢��
	//���� ��� ��ǥ(left, top)�� ���� �ϴ� ��ǥ(right, bottom)�� ����� �����ϴ�.
	int bottom;
	int left;
	int right;
	int top;
public:
	//�����ڿ��� ���� ��� ��ǥ�� ���� �ϴ� ��ǥ�� �Է� ���ڷ� �޽��ϴ�.
	Rectangle(int left, int top, int right, int bottom)
	{
		this->bottom = bottom;
		this->left = left;
		this->right = right;
		this->top = top;
	}
	//Draw �޼��带 �������մϴ�.
	virtual void Draw()
	{
		cout << GetID() << " �簢��";
		cout << "(" << left << "," << top << ")" << "(" << right << "," << bottom << ")" << endl;
	}
	//GetArea �޼��带 �������մϴ�.
	virtual int GetArea()const
	{
		int width = right - left;
		if (width<0) //���� ������ ��
		{
			width = -width; //����� ��ȯ
		}

		int height = bottom - top;
		if (height<0) //���� ������ ��
		{
			height = -height; //����� ��ȯ
		}
		return width * height;
	}
};

void TestGetArea(IGetArea *iga)
{
	cout << "  ����:" << iga->GetArea() << endl;;
}

int main()
{
	Diagram *diagrams[3]; // ������ �迭 ����
	diagrams[0] = new Point(3, 4);
	diagrams[1] = new Line(0, 0, 5, 5);
	diagrams[2] = new Rectangle(0, 0, 10, 10);


	for (int i = 0; i<3; i++)
	{
		diagrams[i]->Draw();
		// ���߿��� ������ ����� �� �ִ� ��ü�� ���� ��ü�� �ִµ�
		// ��Ÿ�ӿ� dynamic_cast �̿��ؼ� �ش�Ǵ� ��ü�� IGetArea ��ü���� Ȯ���ϴ°�
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