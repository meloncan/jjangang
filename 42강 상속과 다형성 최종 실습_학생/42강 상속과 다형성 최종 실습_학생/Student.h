#pragma once
#include "StuConst.h"
#include <iostream>
#include <string>
using namespace std;

//1. 학생
//멤버 필드로 이름, 주민번호, 체력, 지력, 스트레스가 있음
//주민번호 : 순차적 부여
//	이름 : 생성 시 전달
//	지력 : 100(최소 0, 최대 200)
//	체력 : 100 (최소 0, 최대 200)
//	스트레스 : 0 (최소 0, 최대 100)
//	연속으로 공부한 횟수 : 0 (0, 5), 공부를 하면 1 증가, 그 외의 행위를 하면 0으로 리셋, scnt로 부름

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
	// 생성자
	Student(string name);
	// 순수 가상 메서드 cpp에서 구현하지않고 파생형식에서 구현한다.
	virtual void Study() = 0;
	virtual void ListenLecture() = 0;
	virtual void Sleep() = 0;
	virtual void Relax() = 0;
	virtual void Drink() = 0;
	virtual void Sing() = 0;

	// 개체의 상태를 확인하기 위한
	virtual void View()const;
	int GetPN()const;
	string GetName()const;
	int GetIQ()const;
	int GetHP()const;
	int GetStress()const;
	int GetSCnt()const;
protected:
	// private 멤버 필드를 바꿀 수 있는 설정자
	// protect 접근자로 파생형식에서도 접근할 수 있도록 만듬
	void SetIQ(int iq);
	void SetHP(int hp);
	void SetStress(int stress);
	void SetScnt(int scnt);
};

