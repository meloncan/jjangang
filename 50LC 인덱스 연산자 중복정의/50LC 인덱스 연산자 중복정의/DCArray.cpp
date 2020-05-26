#include "DCArray.h"



DCArray::DCArray(int usage, int data)
{
	Init();
	if (usage > 0)
	{
		base = new int[usage];
		bcapacity = usage;
	}
	// �ڱ��ڽ��� usage�� ���޹��� usage ���� �۴ٰ� �ϰԵǸ�
	// �ش�Ǵ� usage�� 1�� �����ϸ鼭 
	for (; this->usage < usage; this->usage++)
	{
		base[this->usage] = data;
	}
}
DCArray::DCArray(const DCArray &src)
{
	Init();
	Copy(src);
}
DCArray::~DCArray()
{
	if (base)
	{
		delete[] base;
	}
}
void DCArray::Copy(const DCArray &src)
{
	bcapacity = src.bcapacity;
	if (base)
	{
		delete[] base;
	}
	base = new int[bcapacity];
	usage = src.usage;
	for (int i = 0; i < usage; i++)
	{
		base[i] = src.base[i];
	}
}
DCArray &DCArray::operator = (const DCArray &src)
{
	Copy(src);
	return (*this);
}
int &DCArray::operator[] (int index)
{
	if (IsAvailIndex(index))
	{
		return base[index];
	}
	throw "��ȿ���� ���� �ε����� ����ϰ� �ֽ��ϴ�";
}
bool DCArray::IsAvailIndex(int index)const
{
	return (index >= 0 && (index < usage));
}

void DCArray::Init()
{
	base = 0;
	bcapacity = usage = 0;
}