#pragma once
#include "Student.h"

class SStudent : public Student
{
	//�л� �л��� ���� ���� ��� �ʵ�� �ʿ��մϴ�. 
	int dummy;
	//�׸��� ���� ���� ������ Ƚ���� 5�� ����� ������ 1�� �����ؾ� �ϹǷ� ������ Ƚ���� ����ؾߵȴ�
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

