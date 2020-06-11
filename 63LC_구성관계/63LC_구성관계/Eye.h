#pragma once
#include <iostream>
#include <string>
using namespace std;


class Eye
{
	bool isopened;
	bool left;
public:
	Eye(bool left);
	void Close();
	void Open();
	void See();
	bool isOpened()const; // 현재 눈의 상태를 보고자하는 멤버 메서드
};

