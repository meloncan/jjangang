#pragma once
#include "Pencil.h"

class PensilCase
{
	Pencil **base; // 저장소 -> 이중 포인터
	const size_t capacity; // 용량
	size_t count; // 보관 요소 개수
public:
	PensilCase(size_t capacity);
	~PensilCase();
	bool PushBack(Pencil* pencil); // 필통에 pensil을 보관했을 때 순차적으로 보관하는 메소드
	void List()const; // 목록화
	size_t GetCount()const;
	Pencil *&operator[](size_t index); // 인덱스 연산자 중복정의

};

