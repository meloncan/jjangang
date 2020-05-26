#include <iostream>
#include "DCArray.h"
using namespace std;



int main()
{
	DCArray dcarr(10);
	dcarr[3] = 10;
	dcarr[9] = 9;

	for (int i = 0; i < 10; i++)
	{
		cout << dcarr[i] << " ";
	}
	cout << endl;
	return 0;
}