#include "Eye.h"


Eye::Eye(bool left)
{
	this->left = left;
	isopened = false; // 초기에서는 감은 상태
}
void Eye::Close()
{
	// 눈이 열려있다면
	if (isopened)
	{
		if (left)
		{
			cout << "왼쪽 눈을 감다" << endl;
		}
		else
		{
			cout << "오른쪽 눈을 감다." << endl;
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
			cout << "왼쪽 눈을 뜨다" << endl;
		}
		else
		{
			cout << "오른쪽 눈을 뜨다" << endl;
		}
		isopened = true;
	}
}
void Eye::See()
{
	Open();
	if (left)
	{
		cout << "왼쪽 눈으로 보다" << endl;
	}
	else
	{
		cout << "오른쪽 눈으로 보다" << endl;
	}
}
bool Eye::isOpened()const
{
	return isopened;
}