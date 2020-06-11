#include "Eye.h"


Eye::Eye(bool left)
{
	this->left = left;
	isopened = false; // �ʱ⿡���� ���� ����
}
void Eye::Close()
{
	// ���� �����ִٸ�
	if (isopened)
	{
		if (left)
		{
			cout << "���� ���� ����" << endl;
		}
		else
		{
			cout << "������ ���� ����." << endl;
		}
		isopened = false;
	}
}
void Eye::Open()
{
	if (isopened == false)
	{
		if (left)
		{
			cout << "���� ���� �ߴ�" << endl;
		}
		else
		{
			cout << "������ ���� �ߴ�" << endl;
		}
		isopened = true;
	}
}
void Eye::See()
{
	Open();
	if (left)
	{
		cout << "���� ������ ����" << endl;
	}
	else
	{
		cout << "������ ������ ����" << endl;
	}
}
bool Eye::isOpened()const
{
	return isopened;
}