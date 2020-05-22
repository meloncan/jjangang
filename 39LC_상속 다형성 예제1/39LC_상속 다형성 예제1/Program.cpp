
#include <iostream>
#include <string>
using namespace std;

//��ǰ
//��ǰ �̸��� ������ ��� �ʵ�� �����ϴ�.
//
//������ �� �̸��� ������ �Է� ���ڷ� �޽��ϴ�.
//
//���ݰ� �̸��� �����ڸ� �����ϸ� ���� �����ڴ� ���� �޼����Դϴ�.
//
//��ǰ ������ ����ϴ� ���� �޼��带 �����մϴ�.
//
//���� ���ο����� ���� ������ ���� �����ڿ� �̸� �����ڰ� �ֽ��ϴ�.
//
class Product
{
	string name;
	int price;
public:
	Product(string name, int price)
	{
		SetName(name);
		SetPrice(price);
	}
	virtual int GetPrice()const
	{
		return price;
	}
	string GetName()const
	{
		return name;
	}
	virtual void Print()const
	{
		// �� ������ ������ �Ʒ��� ���� �ڵ��� �� ��� ���� �� �������� ������� ���Ѵ�.
		// �ֳ��ϸ� �Ļ� ���Ŀ��� GetPrice()�� �������ؼ� ���� ���� �����Ա� ������ ������ price�� ������ �ְ� �����ڸ� ���ؼ� ���� ���� �����ϱ� ����
		// cout << name << "�ǸŰ���: " << price << endl;
		cout << name << "�ǸŰ���: " << GetPrice() << endl;
	}
private:
	void SetPrice(int price) // ������
	{
		this->price = price;
	}
	void SetName(string name)
	{
		this->name = name;
	}
};

//���� ��ǰ
//�������� ��� �ʵ�� �����ϴ�.
//
//��ǰ �̸��� ����, �������� �Է� ���ڷ� �޽��ϴ�.
//
//���� �����ڿ� ��ǰ ���� ����ϴ� �޼��带 �������մϴ�.
//
//�������� ������ �޼��带 �����մϴ�.
//
//���� ���ο����� ������ �� �ִ� ������ �����ڰ� �ֽ��ϴ�.
class DiscountProduct :public Product
{
	int discount;
public:
	DiscountProduct(string name, int price, int discount) :Product(name, price)
	{
		SetDiscount(discount);
	}
	int GetDiscount()const // ������ ������.
	{
		return discount;
	}
	virtual int GetPrice()const // ���� ������ ������
	{
		int origin_price = Product::GetPrice(); // ��ȿȭ�� ��� Ŭ������ �ִ� �޼ҵ� ȣ��
		int dc = origin_price * discount / 100;
		return origin_price - dc;
	}
	virtual void Print()const
	{
		cout << "��ǰ�� ���� : " << Product::GetPrice() << "  ������ : " << discount << " " << endl;
		Product::Print();
	}
private:
	void SetDiscount(int discount) // ������ ������
	{
		this->discount = discount;
	}
};

int main()
{
	Product *p1 = new Product("ġ��", 3000);
	Product *p2 = new DiscountProduct("ĩ��", 3000, 15);
	p1->Print();
	p2->Print();
	delete p1;
	delete p2;
	return 0;
}