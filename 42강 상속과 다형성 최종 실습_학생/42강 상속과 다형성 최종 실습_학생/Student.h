#pragma once
#include "StuConst.h"
#include <iostream>
#include <string>
using namespace std;

//1. �л�
//��� �ʵ�� �̸�, �ֹι�ȣ, ü��, ����, ��Ʈ������ ����
//�ֹι�ȣ : ������ �ο�
//	�̸� : ���� �� ����
//	���� : 100(�ּ� 0, �ִ� 200)
//	ü�� : 100 (�ּ� 0, �ִ� 200)
//	��Ʈ���� : 0 (�ּ� 0, �ִ� 100)
//	�������� ������ Ƚ�� : 0 (0, 5), ���θ� �ϸ� 1 ����, �� ���� ������ �ϸ� 0���� ����, scnt�� �θ�

class Student
{
	static int last_pn;
	const int pn;
	string name;
	int iq;
	int hp;
	int stress;
	int scnt;

public:
	// ������
	Student(string name);
	// ���� ���� �޼��� cpp���� ���������ʰ� �Ļ����Ŀ��� �����Ѵ�.
	virtual void Study() = 0;
	virtual void ListenLecture() = 0;
	virtual void Sleep() = 0;
	virtual void Relax() = 0;
	virtual void Drink() = 0;
	virtual void Sing() = 0;

	// ��ü�� ���¸� Ȯ���ϱ� ����
	virtual void View()const;
	int GetPN()const;
	string GetName()const;
	int GetIQ()const;
	int GetHP()const;
	int GetStress()const;
	int GetSCnt()const;
protected:
	// private ��� �ʵ带 �ٲ� �� �ִ� ������
	// protect �����ڷ� �Ļ����Ŀ����� ������ �� �ֵ��� ����
	void SetIQ(int iq);
	void SetHP(int hp);
	void SetStress(int stress);
	void SetScnt(int scnt);
};

