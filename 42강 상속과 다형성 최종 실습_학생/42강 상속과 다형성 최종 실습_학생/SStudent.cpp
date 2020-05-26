#include "SStudent.h"

// 2. 학사 학생
// 멤버 필드로 더미 뇌가 있음
// 더미 뇌는 생성 시 0 이며 공부한 회수가 5의 배수가 될 때마다 1씩 증가
// 공부하다.
// 체력 5소모, 지력: scnt + 더미 뇌 증가, 스트레스 : 2감소
// 강의를 받다.
// 체력 3소모, 지력 : scnt 증가, 스트레스 : scnt증가
// 잠자다.
// 체력 10회복, 스트레스 : 5감소     *scnt는 연속 공부한 회수
// 휴식하다.
// 체력 3회복, 스트레스 : 25감소
// 음료 섭취
// 체력 5회복, 지력 : 10감소, 스트레스 : 2증가
// 노래하다.
// 체력 10 소모, 지력 : 5 - scnt감소, 스트레스 : 5 - scnt증가
// 독서하다.
// 더미 뇌 1증가, 스트레스 : 5감소

SStudent::SStudent(string name) :Student(name)
{
	dummy = 0; // 더미 뇌는 생성시 0
	total_scnt = 0;
}
void SStudent::Study()
{
	// Student class에서 Protect로 정의했기 때문에 파생형식에서 사용 가능
	SetHP(GetHP() - 5);
	SetIQ(GetIQ() + GetSCnt() + dummy);
	SetStress(GetStress() - 2);
	SetScnt(GetSCnt() + 1);
	total_scnt++;
	if (total_scnt % 5 == 0)
	{
		dummy++;
	}
}
void SStudent::ListenLecture()
{
	SetHP(GetHP() - 3);
	SetIQ(GetIQ() + GetSCnt());
	SetStress(GetStress() + GetSCnt());
	SetScnt(0);
}
void SStudent::Sleep()
{
	SetHP(GetHP() + 10);
	SetStress(GetStress() - 5);
	SetScnt(0);
}
void SStudent::Relax()
{
	SetHP(GetHP() + 3);
	SetStress(GetStress() - 25);
	SetScnt(0);
}
void SStudent::Drink()
{
	SetHP(GetHP() + 5);
	SetIQ(GetIQ() - 10);
	SetStress(GetStress() + 2);
	SetScnt(0);
}
void SStudent::Sing()
{
	SetHP(GetHP() - 10);
	SetIQ(GetIQ() - (5 - GetSCnt()));
	SetStress(GetStress() + (5 - GetSCnt()));
	SetScnt(0);
}

void SStudent::View()const
{
	cout << "학사학생";
	Student::View();
	cout << "더미 뇌 : " << dummy << "연속으로 공부한 횟수 : " << total_scnt << endl;
}
void SStudent::Reading()
{
	dummy++;
	SetStress(GetStress() - 5);
}
