#include "PensilCase.h"
#include <iomanip>


PensilCase::PensilCase(size_t capacity):capacity(capacity) // 생성자 초기화
{
	// 해당 크기만큼 동적으로 포인터 배열 만든다.
	// 여기서 base는 이중 포인터로 포인터 배열의 첫번째 요소를 가르킴
	base = new Pencil *[capacity]; 
	count = 0;
}
PensilCase::~PensilCase()
{
	delete[] base; // 자기 내에서 동적으로 생성했던 개체 삭제
}
bool PensilCase::PushBack(Pencil* pencil) // 필통에 pensil을 보관했을 때 순차적으로 보관하는 메소드
{
	// 필통이 꽉찼는지 확인
	if (count < capacity) // 꽉 차지 않았을 경우 해당되는 저장소에 보관
	{
		base[count] = pencil;
		count++;
		return true;
	}
	return false;
}
void PensilCase::List()const // 목록화
{
	cout << left << setw(10) << "회사" << right << setw(5) << "가격" << endl;
	for (size_t i = 0; i < count; i++)
	{
		cout << left << setw(10) << base[i]->GetCompany();
		cout << right << setw(5) << base[i]->GetPrice() << endl;
	}
}
size_t PensilCase::GetCount()const
{
	return count;
}
Pencil *&PensilCase::operator[](size_t index) // 인덱스 연산자 중복정의
{
	// 유효한 인덱스인지 검사
	if ((index < 0) || (index >= count))
	{
		throw "인덱스가 범위를 벗어났습니다.";
	}
	return base[index];
}