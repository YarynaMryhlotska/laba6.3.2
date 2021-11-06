#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int n, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(a, n, Low, High, i + 1);
}
void Print(int* a, const int n, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;
}
int Sum(int* a, const int n, int i)
{
	if (i < n)
		return a[i] + Sum(a, n, i + 1);
	else
		return 0;
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 10;
	int a[n];
	int Low = -50;
	int High = 50;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << "S = " << Sum(a, n, 0) << endl;
	return 0;
}