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
	cout << "주민번호 : " << stu->GetPN() << "이름" << stu->GetName() << endl;
	cout << "지력 : " << stu->GetIQ() << "체력 : " << stu->GetHP() << "스트레스" << stu->GetStress() << endl;

}

void TestPN()
{
	Student *stu;
	cout << "10명의 학생 생성후 소멸(순차적으로 주민번호 부여 테스트" << endl;
	for (int i = 0; i < 10; i++)
	{
		stu = new Student("테스트");
		ViewStudentInfo(stu);
		delete stu;
	}
}
void TestStudy()
{
	Student *stu = new Student("홍길동");
	ViewStudentInfo(stu);
	cout << "공부하다 8회 실시" << endl;
	for (int i = 0; i < 8; i++)
	{
		stu->Study();
		ViewStudentInfo(stu);
	}
	delete stu;
}
void TestEtc()
{
	Student *stu = new Student("홍길동");
	ViewStudentInfo(stu);
	cout << "공부하다 3회 실시" << endl;
	for (int i = 0; i < 3; i++)
	{
		stu->Study();
		ViewStudentInfo(stu);
	}
	cout << "강의받다 3회 실시" << endl;
	for (int i = 0; i < 3; i++)
	{
		stu->ListenLecture();
		ViewStudentInfo(stu);
	}


	cout << "공부하다 1회 실시" << endl;
	stu->Study();
	ViewStudentInfo(stu);
	delete stu;
}
