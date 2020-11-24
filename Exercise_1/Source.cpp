#include<iostream>
using namespace std;
// Exercise 1 Function EvenFirst 
int* EvenFirst(int A[], int n)
{
	int* B = new int[n];
	int j = 0;
	for (int i = 0;i < n;i++)
		if (A[i] % 2 == 0)
			B[j++] = A[i];
	for (int i = 0;i < n;i++)
		if (A[i] % 2 == 1)
			B[j++] = A[i];
	return B;
}
// Excerise 1 Main of EvenFirst 
int main()
{
	int n;
	cout << "Enter The Array Number of Elements" << endl;
	cin >> n;
	int* A = new int[n];
	cout << "Enter The Array Elements : ";
	for (int i = 0;i < n;i++)
		cin >> A[i];
	int* B = EvenFirst(A, n);
	for (int i = 0;i < n;i++)
		cout << B[i] << " ";
	cout << endl;
	delete[] A;
	delete[] B;
}