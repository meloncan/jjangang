#include "Student.h"

Student::Student(void)
{
	num = 0;
	name = "";
}
Student::Student(int _num)
{
	num = _num;
	name = "";
}
Student::Student(int _num, string _name)
{
	num = _num;
	name = _name;
}
void Student::View()
{
	if (num)
	{
		cout << "��ȣ:" << num;
	}
	else
	{
		cout << "��ȣ:N/A";
	}
	if (name != "")
	{
		cout << " �̸�:" << name << endl;
	}
	else
	{
		cout << " �̸�:NA" << endl;
	}
}