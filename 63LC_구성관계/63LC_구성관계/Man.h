#pragma once
#include "Eye.h"

class Man
{
	// 피소유개체를 소유하게끔 표현할 수 있음
	// Man개체가 생성될 때 자동으로 눈개체가 생성됨, 소멸시에도 동일
	// 이와 같이 표현하는 것은 구성관계일 때 주로 사용
	Eye *eyes[2];
public:
	Man();
	~Man();
	void Sleep();
	void Walk();
	void Wink();
};

