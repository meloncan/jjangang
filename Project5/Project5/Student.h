#pragma once
#include <iostream>
#include <string>
using namespace std;

enum Slndex
{
	KOREAN, ENGLISH, MATH, MAX_SUBJECT
};

class Student
{
	static int last_num;
	const int num;
	string name;
	int scores[MAX_SUBJECT];
	static const string titles[MAX_SUBJECT];
public:
	static int GetStuCount();
	Student(string nmae);
	bool SetScore(int sindex, int score);
	int GetScore(int sindex)const;
	int GetTotal()const;
	double GetAverage()const;
	bool AvailSlndex(int sindex)const;
	void View()const;
private:
	bool SetScore(int sindex, int score, int);
};