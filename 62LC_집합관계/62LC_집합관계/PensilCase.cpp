#include "PensilCase.h"
#include <iomanip>


PensilCase::PensilCase(size_t capacity):capacity(capacity) // ������ �ʱ�ȭ
{
	// �ش� ũ�⸸ŭ �������� ������ �迭 �����.
	// ���⼭ base�� ���� �����ͷ� ������ �迭�� ù��° ��Ҹ� ����Ŵ
	base = new Pencil *[capacity]; 
	count = 0;
}
PensilCase::~PensilCase()
{
	delete[] base; // �ڱ� ������ �������� �����ߴ� ��ü ����
}
bool PensilCase::PushBack(Pencil* pencil) // ���뿡 pensil�� �������� �� ���������� �����ϴ� �޼ҵ�
{
	// ������ ��á���� Ȯ��
	if (count < capacity) // �� ���� �ʾ��� ��� �ش�Ǵ� ����ҿ� ����
	{
		base[count] = pencil;
		count++;
		return true;
	}
	return false;
}
void PensilCase::List()const // ���ȭ
{
	cout << left << setw(10) << "ȸ��" << right << setw(5) << "����" << endl;
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
Pencil *&PensilCase::operator[](size_t index) // �ε��� ������ �ߺ�����
{
	// ��ȿ�� �ε������� �˻�
	if ((index < 0) || (index >= count))
	{
		throw "�ε����� ������ ������ϴ�.";
	}
	return base[index];
}