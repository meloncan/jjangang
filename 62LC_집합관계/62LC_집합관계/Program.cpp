#include "PensilCase.h"

int main()
{
	PensilCase pc(5);

	pc.PushBack(new Pencil("��������", 1000));
	pc.PushBack(new Pencil("���ʳ���", 1200));
	pc.PushBack(new Pencil("��������", 1300));
	pc.PushBack(new Pencil("���ʳ���", 1200));
	pc.PushBack(new Pencil("���ʳ���", 1600));
	pc.PushBack(new Pencil("��������", 1100));
	pc.PushBack(new Pencil("��������", 1500));
	pc.PushBack(new Pencil("���ʳ���", 1000));
	pc.List();
	size_t count = pc.GetCount();
	for (size_t i = 0; i < count; i++)
	{
		delete pc[i];
	}

	return 0;
}