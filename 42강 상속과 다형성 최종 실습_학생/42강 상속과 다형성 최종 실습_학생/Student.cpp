#include "Student.h"
#define SC StuConst

// 정적 멤버 필드 초기화 : 초기화시 Static 키워드 없이 진행
int Student::last_pn;

// 비 정적 상수화 멤버 필드는 생성자에서 반드시 초기화 기법으로 상수 값을 설정해야 합니다.
Student::Student(string name):pn(++last_pn)
{
	this->name = name;
	SetIQ(SC::def_iq);
	SetHP(SC::def_hp);
	SetStress(SC::def_stress);
	SetScnt(SC::def_scnt);
}

// 개체의 상태를 확인하기 위한
void Student::View()const
{
	cout << "주민번호 : " << pn << " 이름 : " << name << endl;
	cout << " IQ: " << iq << " HP:" << hp << " Stress" << stress << endl;
	cout << " 연속으로 공부한 횟수:" << scnt << endl;
}

// 접근자 구현
int Student::GetPN()const
{
	return pn;
}
string Student::GetName()const
{
	return name;
}
int Student::GetIQ()const
{
	return iq;
}
int Student::GetHP()const
{
	return hp;
}
int Student::GetStress()const
{
	return stress;
}
int Student::GetSCnt()const
{
	return scnt;
}


// 설정자 구현
void Student::SetIQ(int iq)
{
	if (iq > SC::max_iq)
	{
		iq = SC::max_iq;
	}
	if (iq < SC::min_iq)
	{
		iq = SC::min_iq;
	}
	this->iq = iq;
}
void Student::SetHP(int hp)
{
	if (hp > SC::max_hp)
	{
		hp = SC::max_hp;
	}
	if (hp < SC::min_hp)
	{
		hp = SC::min_hp;
	}
	this->hp = hp;
}
void Student::SetStress(int stress)
{
	if (stress > SC::max_stress)
	{
		stress = SC::max_stress;
	}
	if (stress < SC::min_stress)
	{
		stress = SC::min_stress;
	}
	this->stress = stress;
}
void Student::SetScnt(int scnt)
{
	if (scnt > SC::max_scnt)
	{
		scnt = SC::max_scnt;
	}
	if (scnt < SC::min_scnt)
	{
		scnt = SC::min_scnt;
	}
	this->scnt = scnt;
}