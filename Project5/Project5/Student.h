//Student.h
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
	int num;
	string name;
public:
	//������ �ߺ� ����
	Student(void);
	Student(int num);
	Student(int num, string name);
	void View();
};