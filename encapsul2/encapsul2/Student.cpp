#include "Student.h"

//1. ��� �ʵ�
int Student::last_pn = 10; // ���� �ֱٿ� �ο��� �ֹ� ��ȣ

const int Student::def_iq = 100;
const int Student::min_iq = 0;
const int Student::max_iq = 200;

const int Student::def_hp = 100;
const int Student::min_hp = 0;
const int Student::max_hp = 200;

const int Student::def_stress = 0;
const int Student::min_stress = 0;
const int Student::max_stress = 100;

const int Student::def_scnt = 0;
const int Student::min_scnt = 0;
const int Student::max_scnt = 5;


// 2. ����� �� �ִ� �޼���(���� ������ public)
Student::Student(string name):pn(++last_pn)
{
	this->name = name;
	SetIQ(def_iq);
	SetHP(def_hp);
	SetStress(def_stress);
	SetScnt(def_scnt);
}
//	����� �� �ִ� �޼���(���� ������ public)
void Student::Study()
{
	//	�����ϴ�(ü�� 5�Ҹ�, ����: scnt ��ŭ ����, ��Ʈ���� : 2����)
	cout << pn << "," << name << "�����ϴ�" << endl;
	SetHP(hp - 5);
	SetIQ(iq + scnt);
	SetStress(stress - 2);
	SetScnt(scnt + 1);
}
void Student::ListenLecture() 
{
	//	���Ǹ� �޴�.(ü�� 3�Ҹ�, ����: scnt ��ŭ ����, ��Ʈ���� : scnt ��ŭ ����)
	cout << pn << "," << name << "���ǹ޴�" << endl;
	SetHP(hp - 3);
	SetIQ(iq + scnt);
	SetStress(stress + 2);
	SetScnt(0);
}
void Student::Sleep() 
{
	//	���ڴ�.(ü�� 10ȸ��, ��Ʈ����: 5����)
	cout << pn << "," << name << "���ڴ�" << endl;
	SetHP(hp + 10);
	//SetIQ(iq + scnt);
	SetStress(stress - 5);
	SetScnt(0);
}
void Student::Relax() 
{
	//	�޽��ϴ�.(ü�� 3ȸ��, ��Ʈ����: 25����)
	cout << pn << "," << name << "�޽��ϴ�" << endl;
	SetHP(hp + 3);
	//SetIQ(iq + scnt);
	SetStress(stress - 25);
	SetScnt(0);
}
void Student::Drink() 
{
	//	���Ḧ ���ô�.(ü�� 5ȸ��, ����:  10����, ��Ʈ���� : 2����)
	cout << pn << "," << name << "���Ḧ ���ô�" << endl;
	SetHP(hp + 5);
	SetIQ(iq - 10);
	SetStress(stress + 2);
	SetScnt(0);
}
void Student::Sing()  //	�뷡�ϴ�.(ü�� 10 �Ҹ�, ����: 5 - scnt����, ��Ʈ���� : 5 - scnt����)
{
	cout << pn << "," << name << "�뷡�ϴ�" << endl;
	SetHP(hp  - 10);
	SetIQ(iq - (5-scnt));
	SetStress(stress + (5 - scnt));
	SetScnt(0);
}
string Student::GetName()const //	�̸� ��������, 
{
	return name;
}
int Student::GetPN()const // �ֹι�ȣ ��������, 
{
	return pn;
}
int Student::GetIQ()const // ���� ��������, 
{
	return iq;
}
int Student::GetHP()const // ü�� ��������, 
{
	return hp;
}
int Student::GetStress()const // ��Ʈ���� ��������
{
	return stress;
}


// ������ �޼���
void Student::SetIQ(int iq)
{
	if (iq > max_iq)
	{
		iq = max_iq;
	}
	if (iq < min_iq)
	{
		iq = min_iq;
	}
	this->iq = iq;
}
void Student::SetHP(int hp)
{
	if (hp > max_hp)
	{
		hp = max_hp;
	}
	if (hp < min_hp)
	{
		hp = min_hp;
	}
	this->hp = hp;
}
void Student::SetStress(int stress) 
{
	if (stress > max_stress)
	{
		stress = max_stress;
	}
	if (stress < min_stress)
	{
		stress = min_stress;
	}
	this->stress = stress;
}
void Student::SetScnt(int scnt)
{
	if (scnt > max_scnt)
	{
		scnt = max_scnt;
	}
	if (scnt < min_scnt)
	{
		scnt = min_scnt;
	}
	this->scnt = scnt;
}