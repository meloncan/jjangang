#pragma once
#include "Pencil.h"

class PensilCase
{
	Pencil **base; // ����� -> ���� ������
	const size_t capacity; // �뷮
	size_t count; // ���� ��� ����
public:
	PensilCase(size_t capacity);
	~PensilCase();
	bool PushBack(Pencil* pencil); // ���뿡 pensil�� �������� �� ���������� �����ϴ� �޼ҵ�
	void List()const; // ���ȭ
	size_t GetCount()const;
	Pencil *&operator[](size_t index); // �ε��� ������ �ߺ�����

};

