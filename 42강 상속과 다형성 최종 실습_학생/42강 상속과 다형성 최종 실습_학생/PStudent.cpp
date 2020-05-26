#include "PStudent.h"



PStudent::PStudent(string name):Student(name)
{
	air = 0;
}
void PStudent::Study()
{
	SetHP(GetHP() - 2);//ü�� 2�Ҹ�
	SetIQ(GetIQ() + GetSCnt() / 2);//����: scnt/2 ����
	air -= 3;
	SetStress(GetStress() - air * 3);//��Ʈ����: air*3����
	SetScnt(GetSCnt() + 1);
}
void PStudent::ListenLecture()
{
	SetHP(GetHP() - 1); //ü�� 1�Ҹ�
	SetIQ(GetIQ() + GetSCnt() / 2);//����: scnt/2 ����
	air -= 5;
	SetStress(GetStress() - air * 3);// ��Ʈ����: air*3 ����
	SetScnt(0);
}
void PStudent::Sleep()
{
	SetHP(GetHP() + 10); //ü�� 10ȸ��    
	SetStress(GetStress() - 5); //��Ʈ����: 5����
	SetScnt(0);
}
void PStudent::Relax()
{
	SetHP(GetHP() + 8); //ü�� 8ȸ��    
	SetStress(GetStress() - 25); //��Ʈ����: 25����
	SetScnt(0);
}
void PStudent::Drink()
{

	SetHP(GetHP() + 5); //ü�� 5 ȸ��
	SetIQ(GetIQ() - 3);//����:  3 ����
	SetStress(GetStress() - 2);//��Ʈ����: 2����
	SetScnt(0);
}
void PStudent::Sing()
{
	SetHP(GetHP() - 5); //ü�� 5 �Ҹ�
	SetIQ(GetIQ() + 2);//����: 5����
	SetStress(GetStress() - 5);//��Ʈ����: 5����
	SetScnt(0);
}
void PStudent::View()const
{
	cout << "� �л�";
	Student::View();
	cout << " air:" << air << endl;
}
void PStudent::Dance()
{
	SetHP(GetHP() - 5); //ü�� 5 �Ҹ�
	SetIQ(GetIQ() + 3);//����: 3����
	air++;//air 1����    
}