#include <iostream>
using namespace std;
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *mi = arr;
	int &a = arr[0];
	cout << *mi << endl;
	cout << a << endl;

	return 0;
}