#include <iostream>
#include <vector>
using namespace std;

int testCase;
int N;
int M;

//vector<vector<int>> vect;
int vect[50][3];
int Mtable[50];

void init()
{
	cin >> testCase;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> vect[i][j];
		}
	}
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int x;
		cin >> x;
		Mtable[i] = x;
	}
}

int main()
{
	cin >> testCase;
	cin >> N;
	for (int i = 0; i < (N-1); i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> vect[i][j];
		}
	}
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int x;
		cin >> x;
		Mtable[i] = x;
	}

	//freopen("Text.txt", "r", stdin);
	init();
	return 0;
}
// 테스트 케이스 개수
// N = 4
// t2 = 1, a2 = 0, b2 = 1
// t3 = 2, a3 = 2, b3 = 2
// t4 = 3, a4 = 2, b4 = 3
// M = 4
// x1 = 0, x2 = 1, x3 = 2, x4 = 3