#pragma once
#include "Eye.h"

class Man
{
	// �Ǽ�����ü�� �����ϰԲ� ǥ���� �� ����
	// Man��ü�� ������ �� �ڵ����� ����ü�� ������, �Ҹ�ÿ��� ����
	// �̿� ���� ǥ���ϴ� ���� ���������� �� �ַ� ���
	Eye *eyes[2];
public:
	Man();
	~Man();
	void Sleep();
	void Walk();
	void Wink();
};

