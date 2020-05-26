#include "DCArray.h"



DCArray::DCArray(int usage, int data)
{
	Init();
	if (usage > 0)
	{
		base = new int[usage];
		bcapacity = usage;
	}
	// 자기자신의 usage가 전달받은 usage 보다 작다고 하게되면
	// 해당되는 usage를 1씩 증가하면서 
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
	throw "유효하지 않은 인덱스를 사용하고 있습니다";
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