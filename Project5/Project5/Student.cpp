//생성자 중복 정의
//Program.cpp
#include "Student.h"


int Student::last_num;
const string Student::titles[MAX_SUBJECT] = { "국어", "영어", "수학" };


int Student::GetStuCount() // 현재 학생 수
{
	return last_num;
}
Student::Student(string name):num(++last_num)
{
	this->name = name;
	for (int si = 0; si < MAX_SUBJECT; si++)
	{
		// 내부 메소드 호출
		SetScore(si, -1, 0); // 점수를 -1로 초기 설정
	}
}
bool Student::SetScore(int sindex, int score)
{
	if (AvailSlndex(sindex))
	{
		return SetScore(sindex, score, 0);
	}
	return false;
}
int Student::GetScore(int sindex)const
{
	if (AvailSlndex(sindex))
	{
		return scores[sindex];
	}
	return -1;
}
int Student::GetTotal()const
{
	int sum = 0;
	for (int i = 0; i < MAX_SUBJECT; i++)
	{
		if (scores[i] != -1)
		{
			sum += scores[i];
		}
	}
	return sum;
}
double Student::GetAverage()const
{
	return GetTotal() / (double)(MAX_SUBJECT);
}
bool Student::AvailSlndex(int sindex)const
{
	return (sindex >= 0) && (sindex < MAX_SUBJECT);
}
void Student::View()const
{
	cout << "번호 : " << num << "이름 : " << name << endl;
	for (int i = 0; i < MAX_SUBJECT; i++)
	{
		if (scores[i] == -1)
		{
			cout << titles[i] << "입력 안 함" << endl;
		}
		else
		{
			cout << titles[i] << ":" << scores[i] << endl;
		}
	}
	cout << "총점:" << GetTotal() << "평균:" << GetAverage() << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++" << endl;
}

bool Student::SetScore(int sindex, int score, int)
{
	if ((score < 0) || (score > 100))
	{
		scores[sindex] = -1;
		return false;
	}
	scores[sindex] = score;
	return true;
}