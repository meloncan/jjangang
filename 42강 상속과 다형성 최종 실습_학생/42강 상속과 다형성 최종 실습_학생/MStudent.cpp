#include "MStudent.h"

//3. ���� �л�
//���� �л��� ���������� �����̰� �ִ�.
//�����̴� ���� �� 0�̸� ���� ���� �� 1�� ����
//�����ϴ�.
//ü�� 3�Ҹ�, ����: scnt ����, ��Ʈ���� : 3����
//���Ǹ� �޴�.
//ü�� 2�Ҹ�, ���� : scnt ����, ��Ʈ���� : 5����
//���ڴ�.
//ü�� 10ȸ��, ��Ʈ���� : 5����
//�޽��ϴ�.
//ü�� 3ȸ��, ��Ʈ���� : 25����
//���� ����
//ü�� 5 + ������ ȸ��, ���� : 10 - ������ ����, ��Ʈ���� : 2����
//�뷡�ϴ�.
//ü�� 10 - ������ �Ҹ�, ���� : 5����, ��Ʈ���� : 5����
//���� ������ ����.
//������ 1����

MStudent::MStudent(string name) :Student(name)
{
	stick = 0; // �����̴� ���� �� 0
}
void MStudent::Study()
{
	SetHP(GetHP() - 3);//ü�� 3�Ҹ�
	SetIQ(GetIQ() + GetSCnt());//����: scnt ����
	SetStress(GetStress() + 3);//��Ʈ����: 3����
	SetScnt(GetSCnt() + 1);
}
void MStudent::ListenLecture()
{
	SetHP(GetHP() - 2); //ü�� 2�Ҹ�
	SetIQ(GetIQ() + GetSCnt());//����: scnt ����
	SetStress(GetStress() + 5);// ��Ʈ����: 5����
	SetScnt(0);
}
void MStudent::Sleep()
{
	SetHP(GetHP() + 10); //ü�� 10ȸ��    
	SetStress(GetStress() - 5); //��Ʈ����: 5����
	SetScnt(0);
}
void MStudent::Relax()
{
	SetHP(GetHP() + 3); //ü�� 3ȸ��    
	SetStress(GetStress() - 25); //��Ʈ����: 25����
	SetScnt(0);
}
void MStudent::Drink()
{
	SetHP(GetHP() + 5 + stick); //ü�� 5+������ ȸ��
	SetIQ(GetIQ() - (10 - stick));//����:  10-������ ����
	SetStress(GetStress() - 2);//��Ʈ����: 2����
	SetScnt(0);
}
void MStudent::Sing()
{
	SetHP(GetHP() - (10 - stick)); //ü�� 10-������ �Ҹ�
	SetIQ(GetIQ() - 5);//����: 5����
	SetStress(GetStress() - 5);//��Ʈ����: 5����
	SetScnt(0);
}
void MStudent::View()const
{
	cout << "���� �л�";
	Student::View();
	cout << " ������:" << stick << endl;
}
void MStudent::Travel()
{
	stick++;//������ 1���� 
}