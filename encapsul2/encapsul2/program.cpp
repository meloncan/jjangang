#include "Student.h"

void ViewStudentInfo(Student *stu);
void TestPN();
void TestStudy();
void TestEtc();
int main()
{
	TestPN();
	TestStudy();
	TestEtc();
	return 0;
}

void ViewStudentInfo(Student *stu)
{
	cout << "�ֹι�ȣ : " << stu->GetPN() << "�̸�" << stu->GetName() << endl;
	cout << "���� : " << stu->GetIQ() << "ü�� : " << stu->GetHP() << "��Ʈ����" << stu->GetStress() << endl;

}

void TestPN()
{
	Student *stu;
	cout << "10���� �л� ������ �Ҹ�(���������� �ֹι�ȣ �ο� �׽�Ʈ" << endl;
	for (int i = 0; i < 10; i++)
	{
		stu = new Student("�׽�Ʈ");
		ViewStudentInfo(stu);
		delete stu;
	}
}
void TestStudy()
{
	Student *stu = new Student("ȫ�浿");
	ViewStudentInfo(stu);
	cout << "�����ϴ� 8ȸ �ǽ�" << endl;
	for (int i = 0; i < 8; i++)
	{
		stu->Study();
		ViewStudentInfo(stu);
	}
	delete stu;
}
void TestEtc()
{
	Student *stu = new Student("ȫ�浿");
	ViewStudentInfo(stu);
	cout << "�����ϴ� 3ȸ �ǽ�" << endl;
	for (int i = 0; i < 3; i++)
	{
		stu->Study();
		ViewStudentInfo(stu);
	}
	cout << "���ǹ޴� 3ȸ �ǽ�" << endl;
	for (int i = 0; i < 3; i++)
	{
		stu->ListenLecture();
		ViewStudentInfo(stu);
	}


	cout << "�����ϴ� 1ȸ �ǽ�" << endl;
	stu->Study();
	ViewStudentInfo(stu);
	delete stu;
}
