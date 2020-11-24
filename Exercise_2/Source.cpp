#include<iostream>
using namespace std;
// Excerise 2 Function doubler
int* doubler(int a[], int size, int& newSize)
{
	newSize = 0;
	for (int i = 0;i < size;i++)
	{
		if (a[i] != 0)
			newSize++;
	}
	int* b = new int[newSize];
	int j = 0;
	for (int i = 0;i < size;i++)
	{
		if (a[i] != 0)
			b[j++] = a[i] * a[i];
	}
	return b;
}
// Excerise 2 Main of doubler
int main()
{
	int n;
	cout << "Enter The Array Number of Elements" << endl;
	cin >> n;
	int* A = new int[n];
	cout << "Enter The Array Elements : ";
	for (int i = 0;i < n;i++)
		cin >> A[i];
	int newn;
	int* B = doubler(A, n,newn);
	for (int i = 0;i < newn;i++)
		cout << B[i] << " ";
	cout << endl;
	delete[] A;
	delete[] B;
	return 0;
}

