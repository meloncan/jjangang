#include "MStudent.h"

//3. 마법 학생
//마법 학생은 내부적으로 지팡이가 있다.
//지팡이는 생성 시 0이며 마법 여행 시 1씩 증가
//공부하다.
//체력 3소모, 지력: scnt 증가, 스트레스 : 3증가
//강의를 받다.
//체력 2소모, 지력 : scnt 증가, 스트레스 : 5증가
//잠자다.
//체력 10회복, 스트레스 : 5감소
//휴식하다.
//체력 3회복, 스트레스 : 25감소
//음료 섭취
//체력 5 + 지팡이 회복, 지력 : 10 - 지팡이 감소, 스트레스 : 2감소
//노래하다.
//체력 10 - 지팡이 소모, 지력 : 5감소, 스트레스 : 5감소
//마법 여행을 가다.
//지팡이 1증가

MStudent::MStudent(string name) :Student(name)
{
	stick = 0; // 지팡이는 생성 시 0
}
void MStudent::Study()
{
	SetHP(GetHP() - 3);//체력 3소모
	SetIQ(GetIQ() + GetSCnt());//지력: scnt 증가
	SetStress(GetStress() + 3);//스트레스: 3증가
	SetScnt(GetSCnt() + 1);
}
void MStudent::ListenLecture()
{
	SetHP(GetHP() - 2); //체력 2소모
	SetIQ(GetIQ() + GetSCnt());//지력: scnt 증가
	SetStress(GetStress() + 5);// 스트레스: 5증가
	SetScnt(0);
}
void MStudent::Sleep()
{
	SetHP(GetHP() + 10); //체력 10회복    
	SetStress(GetStress() - 5); //스트레스: 5감소
	SetScnt(0);
}
void MStudent::Relax()
{
	SetHP(GetHP() + 3); //체력 3회복    
	SetStress(GetStress() - 25); //스트레스: 25감소
	SetScnt(0);
}
void MStudent::Drink()
{
	SetHP(GetHP() + 5 + stick); //체력 5+지팡이 회복
	SetIQ(GetIQ() - (10 - stick));//지력:  10-지팡이 감소
	SetStress(GetStress() - 2);//스트레스: 2감소
	SetScnt(0);
}
void MStudent::Sing()
{
	SetHP(GetHP() - (10 - stick)); //체력 10-지팡이 소모
	SetIQ(GetIQ() - 5);//지력: 5감소
	SetStress(GetStress() - 5);//스트레스: 5감소
	SetScnt(0);
}
void MStudent::View()const
{
	cout << "마법 학생";
	Student::View();
	cout << " 지팡이:" << stick << endl;
}
void MStudent::Travel()
{
	stick++;//지팡이 1증가 
}