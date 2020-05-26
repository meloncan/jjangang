#include "SStudent.h"

// 2. �л� �л�
// ��� �ʵ�� ���� ���� ����
// ���� ���� ���� �� 0 �̸� ������ ȸ���� 5�� ����� �� ������ 1�� ����
// �����ϴ�.
// ü�� 5�Ҹ�, ����: scnt + ���� �� ����, ��Ʈ���� : 2����
// ���Ǹ� �޴�.
// ü�� 3�Ҹ�, ���� : scnt ����, ��Ʈ���� : scnt����
// ���ڴ�.
// ü�� 10ȸ��, ��Ʈ���� : 5����     *scnt�� ���� ������ ȸ��
// �޽��ϴ�.
// ü�� 3ȸ��, ��Ʈ���� : 25����
// ���� ����
// ü�� 5ȸ��, ���� : 10����, ��Ʈ���� : 2����
// �뷡�ϴ�.
// ü�� 10 �Ҹ�, ���� : 5 - scnt����, ��Ʈ���� : 5 - scnt����
// �����ϴ�.
// ���� �� 1����, ��Ʈ���� : 5����

SStudent::SStudent(string name) :Student(name)
{
	dummy = 0; // ���� ���� ������ 0
	total_scnt = 0;
}
void SStudent::Study()
{
	// Student class���� Protect�� �����߱� ������ �Ļ����Ŀ��� ��� ����
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
	cout << "�л��л�";
	Student::View();
	cout << "���� �� : " << dummy << "�������� ������ Ƚ�� : " << total_scnt << endl;
}
void SStudent::Reading()
{
	dummy++;
	SetStress(GetStress() - 5);
}
