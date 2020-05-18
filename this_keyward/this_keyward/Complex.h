#pragma once
class Complex
{
	double image; // 허수
	double real; // 실수
public:
	Complex(double real = 0, double image = 0);
	double Getimage()const; // 접근자
	double GetReal()const;
	void SetImage(double image); // 설정자
	void SetReal(double real);

	void View()const; // 값 변경 필요 없을 시 오류를 방지하기위해 const사용
};

