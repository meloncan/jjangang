//������ �ߺ� ����
//Program.cpp
#include "Student.h"

int main()
{
	Student *arr[3];

	arr[0] = new Student("ȫ�浿");
	arr[1] = new Student("������");
	arr[2] = new Student("�̼���");

	// ��������� Ŭ���� �̸����� ����
	cout << "���� �л� ��:" << Student::GetStuCount() << endl;
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