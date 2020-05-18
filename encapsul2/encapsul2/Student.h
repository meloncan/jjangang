#pragma once

#include <iostream>
#include<string>
using namespace std;

// C++���� ���� ����� Ŭ�������� ��������, ��ü ���� �Ҵ���� �ʰ� Ŭ������ ��� ��ü�� �����ϴ� ����� �ǹ��մϴ�.

class Student
{
	//1. ��� �ʵ�
	//�ֹι�ȣ : ������ �ο�
	const int pn;
	static int last_pn; // ���� �ֱٿ� �ο��� �ֹ� ��ȣ
	//	�̸� : ���� �� ����
	string name;
	//	���� : 100(�ּ� 0, �ִ� 200)
	int iq;
	//	ü�� : 100 (�ּ� 0, �ִ� 200)
	int hp;
	//	��Ʈ���� : 0 (�ּ� 0, �ִ� 100)
	int stress;
	//	�������� ������ Ƚ�� : 0 (0, 5), ���θ� �ϸ� 1 ����, �� ���� ������ �ϸ� 0���� ����, scnt�� �θ�
	int scnt;

	static const int def_iq;
	static const int min_iq;
	static const int max_iq;

	static const int def_hp;
	static const int min_hp;
	static const int max_hp;

	static const int def_stress;
	static const int min_stress;
	static const int max_stress;

	static const int def_scnt;
	static const int min_scnt;
	static const int max_scnt;

public:
	// 2. ����� �� �ִ� �޼���(���� ������ public)
	Student(string name);
	//	����� �� �ִ� �޼���(���� ������ public)
	void Study(); //	�����ϴ�(ü�� 5�Ҹ�, ����: scnt ��ŭ ����, ��Ʈ���� : 2����)
	void ListenLecture(); //	���Ǹ� �޴�.(ü�� 3�Ҹ�, ����: scnt ��ŭ ����, ��Ʈ���� : scnt ��ŭ ����)
	void Sleep(); //	���ڴ�.(ü�� 10ȸ��, ��Ʈ����: 5����)
	void Relax(); //	�޽��ϴ�.(ü�� 3ȸ��, ��Ʈ����: 25����)
	void Drink(); //	���Ḧ ���ô�.(ü�� 5ȸ��, ����:  10����, ��Ʈ���� : 2����)
	void Sing();  //	�뷡�ϴ�.(ü�� 10 �Ҹ�, ����: 5 - scnt����, ��Ʈ���� : 5 - scnt����)
	string GetName()const; //	�̸� ��������, 
	int GetPN()const; // �ֹι�ȣ ��������, 
	int GetIQ()const; // ���� ��������, 
	int GetHP()const; // ü�� ��������, 
	int GetStress()const; // ��Ʈ���� ��������

	// ������
private:
	void SetIQ(int iq);
	void SetHP(int hp);
	void SetStress(int stress);
	void SetScnt(int scnt);
};

