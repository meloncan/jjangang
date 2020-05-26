#include "SStudent.h"
#include "MStudent.h"
#include "PStudent.h"
#include "StuConst.h"
#include "Student.h"

int main()
{
	Student *stues[3];
	stues[0] = new SStudent("���� ����");
	stues[1] = new PStudent("� ����");
	stues[2] = new MStudent("�������");

	cout << "����" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->ListenLecture();
		stues[i]->View();
	}

	cout << "�ڽ�" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->Study();
		// ���߿��� ������ �� �� �ִ� ��ü�� ���� ��ü�� �ִµ�
		// ��Ÿ�ӿ� dynamic_cast �̿��ؼ� �ش�Ǵ� ��ü�� SStudent ��ü���� Ȯ���ϴ°�
		SStudent *ss = dynamic_cast<SStudent *>(stues[i]);
		if (ss) // True & False ��ȯ
		{
			ss->Reading();
		}
		stues[i]->View();
	}
	cout << "�ҵ�" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->Sleep();
		stues[i]->View();
	}
	cout << "���� �ð�" << endl;
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
	cout << "��Ƽ" << endl;
	for (int i = 0; i<3; i++)
	{
		stues[i]->Drink();
		stues[i]->View();
	}
	cout << "�뷡��" << endl;
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