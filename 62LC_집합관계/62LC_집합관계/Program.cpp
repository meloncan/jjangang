#include "PensilCase.h"

int main()
{
	PensilCase pc(5);

	pc.PushBack(new Pencil("연필좋아", 1000));
	pc.PushBack(new Pencil("연필나라", 1200));
	pc.PushBack(new Pencil("연필좋아", 1300));
	pc.PushBack(new Pencil("연필나라", 1200));
	pc.PushBack(new Pencil("연필나라", 1600));
	pc.PushBack(new Pencil("연필좋아", 1100));
	pc.PushBack(new Pencil("연필좋아", 1500));
	pc.PushBack(new Pencil("연필나라", 1000));
	pc.List();
	size_t count = pc.GetCount();
	for (size_t i = 0; i < count; i++)
	{
		delete pc[i];
	}

	return 0;
}