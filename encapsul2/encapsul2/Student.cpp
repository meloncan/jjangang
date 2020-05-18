#include "Student.h"

//1. 멤버 필드
int Student::last_pn = 10; // 가장 최근에 부여한 주민 번호

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


// 2. 명령할 수 있는 메서드(접근 지정이 public)
Student::Student(string name):pn(++last_pn)
{
	this->name = name;
	SetIQ(def_iq);
	SetHP(def_hp);
	SetStress(def_stress);
	SetScnt(def_scnt);
}
//	명령할 수 있는 메서드(접근 지정이 public)
void Student::Study()
{
	//	공부하다(체력 5소모, 지력: scnt 만큼 증가, 스트레스 : 2감소)
	cout << pn << "," << name << "공부하다" << endl;
	SetHP(hp - 5);
	SetIQ(iq + scnt);
	SetStress(stress - 2);
	SetScnt(scnt + 1);
}
void Student::ListenLecture() 
{
	//	강의를 받다.(체력 3소모, 지력: scnt 만큼 증가, 스트레스 : scnt 만큼 증가)
	cout << pn << "," << name << "강의받다" << endl;
	SetHP(hp - 3);
	SetIQ(iq + scnt);
	SetStress(stress + 2);
	SetScnt(0);
}
void Student::Sleep() 
{
	//	잠자다.(체력 10회복, 스트레스: 5감소)
	cout << pn << "," << name << "잠자다" << endl;
	SetHP(hp + 10);
	//SetIQ(iq + scnt);
	SetStress(stress - 5);
	SetScnt(0);
}
void Student::Relax() 
{
	//	휴식하다.(체력 3회복, 스트레스: 25감소)
	cout << pn << "," << name << "휴식하다" << endl;
	SetHP(hp + 3);
	//SetIQ(iq + scnt);
	SetStress(stress - 25);
	SetScnt(0);
}
void Student::Drink() 
{
	//	음료를 마시다.(체력 5회복, 지력:  10감소, 스트레스 : 2증가)
	cout << pn << "," << name << "음료를 마시다" << endl;
	SetHP(hp + 5);
	SetIQ(iq - 10);
	SetStress(stress + 2);
	SetScnt(0);
}
void Student::Sing()  //	노래하다.(체력 10 소모, 지력: 5 - scnt감소, 스트레스 : 5 - scnt증가)
{
	cout << pn << "," << name << "노래하다" << endl;
	SetHP(hp  - 10);
	SetIQ(iq - (5-scnt));
	SetStress(stress + (5 - scnt));
	SetScnt(0);
}
string Student::GetName()const //	이름 가져오기, 
{
	return name;
}
int Student::GetPN()const // 주민번호 가져오기, 
{
	return pn;
}
int Student::GetIQ()const // 지력 가져오기, 
{
	return iq;
}
int Student::GetHP()const // 체력 가져오기, 
{
	return hp;
}
int Student::GetStress()const // 스트레스 가져오기
{
	return stress;
}


// 설정자 메서드
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