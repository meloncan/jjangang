
#include <iostream>
#include <string>
using namespace std;

//상품
//상품 이름과 가격을 멤버 필드로 갖습니다.
//
//생성할 때 이름과 가격을 입력 인자로 받습니다.
//
//가격과 이름의 접근자를 제공하며 가격 접근자는 가상 메서드입니다.
//
//상품 정보를 출력하는 가상 메서드를 제공합니다.
//
//형식 내부에서만 접근 가능한 가격 설정자와 이름 설정자가 있습니다.
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
		// ※ 주의할 사항은 아래와 같은 코딩을 할 경우 할인 된 가격으로 출력하지 못한다.
		// 왜냐하면 파생 형식에서 GetPrice()를 재정의해서 할인 값을 가져왔기 때문에 기존의 price는 가만히 있고 접근자를 통해서 할인 값은 리턴하기 때문
		// cout << name << "판매가격: " << price << endl;
		cout << name << "판매가격: " << GetPrice() << endl;
	}
private:
	void SetPrice(int price) // 설정자
	{
		this->price = price;
	}
	void SetName(string name)
	{
		this->name = name;
	}
};

//할인 상품
//할인율을 멤버 필드로 갖습니다.
//
//상품 이름과 가격, 할인율을 입력 인자로 받습니다.
//
//가격 접근자와 상품 정보 출력하는 메서드를 재정의합니다.
//
//할인율의 접근자 메서드를 제공합니다.
//
//형식 내부에서만 접근할 수 있는 할인율 설장자가 있습니다.
class DiscountProduct :public Product
{
	int discount;
public:
	DiscountProduct(string name, int price, int discount) :Product(name, price)
	{
		SetDiscount(discount);
	}
	int GetDiscount()const // 할인율 접근자.
	{
		return discount;
	}
	virtual int GetPrice()const // 가격 접근자 재정의
	{
		int origin_price = Product::GetPrice(); // 무효화된 기반 클래스에 있는 메소드 호출
		int dc = origin_price * discount / 100;
		return origin_price - dc;
	}
	virtual void Print()const
	{
		cout << "상품의 가격 : " << Product::GetPrice() << "  할인율 : " << discount << " " << endl;
		Product::Print();
	}
private:
	void SetDiscount(int discount) // 할인율 설정자
	{
		this->discount = discount;
	}
};

int main()
{
	Product *p1 = new Product("치약", 3000);
	Product *p2 = new DiscountProduct("칫솔", 3000, 15);
	p1->Print();
	p2->Print();
	delete p1;
	delete p2;
	return 0;
}