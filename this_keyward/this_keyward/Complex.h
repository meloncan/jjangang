#pragma once
class Complex
{
	double image; // ���
	double real; // �Ǽ�
public:
	Complex(double real = 0, double image = 0);
	double Getimage()const; // ������
	double GetReal()const;
	void SetImage(double image); // ������
	void SetReal(double real);

	void View()const; // �� ���� �ʿ� ���� �� ������ �����ϱ����� const���
};

