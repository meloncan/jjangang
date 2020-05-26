#pragma once
#include "Student.h"

class SStudent : public Student
{
	//학사 학생은 더미 뇌가 멤버 필드로 필요합니다. 
	int dummy;
	//그리고 더미 뇌는 공부한 횟수가 5의 배수일 때마다 1씩 증가해야 하므로 공부한 횟수도 기억해야된다
	int total_scnt;
public:
	SStudent(string name);
	virtual void Study();
	virtual void ListenLecture();
	virtual void Sleep();
	virtual void Relax();
	virtual void Drink();
	virtual void Sing();

	virtual void View()const;
	void Reading();
};

