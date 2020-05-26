#include "SStudent.h"
#include "MStudent.h"
#include "PStudent.h"
#include "StuConst.h"
#include "Student.h"

int main()
{
	Student *stues[3];
	stues[0] = new SStudent("공부 좋아");
	stues[1] = new PStudent("운동 잘해");
	stues[2] = new MStudent("빠쥬따꾸");

	cout << "강의" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->ListenLecture();
		stues[i]->View();
	}

	cout << "자습" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->Study();
		// 이중에서 리딩을 할 수 있는 개체와 없는 개체가 있는데
		// 런타임에 dynamic_cast 이용해서 해당되는 개체가 SStudent 개체인지 확인하는것
		SStudent *ss = dynamic_cast<SStudent *>(stues[i]);
		if (ss) // True & False 반환
		{
			ss->Reading();
		}
		stues[i]->View();
	}
	cout << "소등" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->Sleep();
		stues[i]->View();
	}
	cout << "자유 시간" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->Relax();
		MStudent *ms = dynamic_cast<MStudent *>(stues[i]);
		if (ms)
		{
			ms->Travel();
		}
		stues[i]->View();
	}
	cout << "파티" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->Drink();
		stues[i]->View();
	}
	cout << "노래방" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->Sing();
		PStudent *ps = dynamic_cast<PStudent *>(stues[i]);
		if (ps)
		{
			ps->Dance();
		}
		stues[i]->View();
	}
	for (int i = 0; i<3; i++)
	{
		delete stues[i];
	}
	return 0;
}