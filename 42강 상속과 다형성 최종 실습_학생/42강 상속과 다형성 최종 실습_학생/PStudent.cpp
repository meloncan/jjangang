#include "PStudent.h"



PStudent::PStudent(string name):Student(name)
{
	air = 0;
}
void PStudent::Study()
{
	SetHP(GetHP() - 2);//체력 2소모
	SetIQ(GetIQ() + GetSCnt() / 2);//지력: scnt/2 증가
	air -= 3;
	SetStress(GetStress() - air * 3);//스트레스: air*3감소
	SetScnt(GetSCnt() + 1);
}
void PStudent::ListenLecture()
{
	SetHP(GetHP() - 1); //체력 1소모
	SetIQ(GetIQ() + GetSCnt() / 2);//지력: scnt/2 증가
	air -= 5;
	SetStress(GetStress() - air * 3);// 스트레스: air*3 감소
	SetScnt(0);
}
void PStudent::Sleep()
{
	SetHP(GetHP() + 10); //체력 10회복    
	SetStress(GetStress() - 5); //스트레스: 5감소
	SetScnt(0);
}
void PStudent::Relax()
{
	SetHP(GetHP() + 8); //체력 8회복    
	SetStress(GetStress() - 25); //스트레스: 25감소
	SetScnt(0);
}
void PStudent::Drink()
{

	SetHP(GetHP() + 5); //체력 5 회복
	SetIQ(GetIQ() - 3);//지력:  3 감소
	SetStress(GetStress() - 2);//스트레스: 2감소
	SetScnt(0);
}
void PStudent::Sing()
{
	SetHP(GetHP() - 5); //체력 5 소모
	SetIQ(GetIQ() + 2);//지력: 5증가
	SetStress(GetStress() - 5);//스트레스: 5감소
	SetScnt(0);
}
void PStudent::View()const
{
	cout << "운동 학생";
	Student::View();
	cout << " air:" << air << endl;
}
void PStudent::Dance()
{
	SetHP(GetHP() - 5); //체력 5 소모
	SetIQ(GetIQ() + 3);//지력: 3증가
	air++;//air 1증가    
}