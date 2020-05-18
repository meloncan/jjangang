#pragma once

#include <iostream>
#include<string>
using namespace std;

// C++에서 정적 멤버란 클래스에는 속하지만, 객체 별로 할당되지 않고 클래스의 모든 객체가 공유하는 멤버를 의미합니다.

class Student
{
	//1. 멤버 필드
	//주민번호 : 순차적 부여
	const int pn;
	static int last_pn; // 가장 최근에 부여한 주민 번호
	//	이름 : 생성 시 전달
	string name;
	//	지력 : 100(최소 0, 최대 200)
	int iq;
	//	체력 : 100 (최소 0, 최대 200)
	int hp;
	//	스트레스 : 0 (최소 0, 최대 100)
	int stress;
	//	연속으로 공부한 횟수 : 0 (0, 5), 공부를 하면 1 증가, 그 외의 행위를 하면 0으로 리셋, scnt로 부름
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
	// 2. 명령할 수 있는 메서드(접근 지정이 public)
	Student(string name);
	//	명령할 수 있는 메서드(접근 지정이 public)
	void Study(); //	공부하다(체력 5소모, 지력: scnt 만큼 증가, 스트레스 : 2감소)
	void ListenLecture(); //	강의를 받다.(체력 3소모, 지력: scnt 만큼 증가, 스트레스 : scnt 만큼 증가)
	void Sleep(); //	잠자다.(체력 10회복, 스트레스: 5감소)
	void Relax(); //	휴식하다.(체력 3회복, 스트레스: 25감소)
	void Drink(); //	음료를 마시다.(체력 5회복, 지력:  10감소, 스트레스 : 2증가)
	void Sing();  //	노래하다.(체력 10 소모, 지력: 5 - scnt감소, 스트레스 : 5 - scnt증가)
	string GetName()const; //	이름 가져오기, 
	int GetPN()const; // 주민번호 가져오기, 
	int GetIQ()const; // 지력 가져오기, 
	int GetHP()const; // 체력 가져오기, 
	int GetStress()const; // 스트레스 가져오기

	// 설정자
private:
	void SetIQ(int iq);
	void SetHP(int hp);
	void SetStress(int stress);
	void SetScnt(int scnt);
};

