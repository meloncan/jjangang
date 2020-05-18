//생성자 중복 정의
//Program.cpp
#include "Student.h"

int main()
{
	Student *arr[3];

	arr[0] = new Student("홍길동");
	arr[1] = new Student("강감찬");
	arr[2] = new Student("이순신");

	// 정적멤버를 클래스 이름으로 접근
	cout << "현재 학생 수:" << Student::GetStuCount() << endl;
	for (int i = 0; i < 3; i++)
	{
		arr[i]->View();
	}

	arr[0]->SetScore(0, 90);
	arr[0]->SetScore(1, 80);
	arr[0]->SetScore(3, 90);

	arr[1]->SetScore(0, 100);
	arr[1]->SetScore(1, 180);
	arr[1]->SetScore(2, 80);

	arr[2]->SetScore(0, 80);
	arr[2]->SetScore(1, 90);
	arr[2]->SetScore(2, 90);

	for (int i = 0; i < 3; i++)
	{
		arr[i]->View();
	}

	for (int i = 0; i < 3; i++)
	{
		delete arr[i];
	}

	return 0;
}