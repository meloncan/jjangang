
//57.예외처리
//예외
	//에러 - 사용자가 잘못 사용한 것
	//버그 - 개발자가 논리적 오류를 작성한 것
	//예외 - 프로그램을 더 이상 진행하지 못할 때
		//외부 시스템 오류

#include <iostream>

using namespace std;

void FunctionB(int value);
void FunctionA(int value);

int main()
{
	try {
		cout << "main - 1" << endl;
		FunctionB(3);
		cout << "main - 2" << endl;
		FunctionA(-2);
		cout << "main - 3" << endl;
	}
	catch(const char *exmsg) // 문자열로 던지기
	{
		cout << "예외 발생" << exmsg << endl;
	}
	return 0;
}

void FunctionB(int value)
{
	cout << "FunctionB -1" << endl;
	FunctionA(value);
	cout << "FunctionB -2" << endl;
}
void FunctionA(int value)
{
	cout << "FunctionA -1" << endl;
	if (value > 0)
	{
		cout << "값:" << value << endl;
	}
	else
	{
		throw "음의 값을 전달하였습니다";
	}
}