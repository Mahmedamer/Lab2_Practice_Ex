#include<iostream>
using namespace std;

int* PositiveEvens(int* A, int n,  int& size)
{
	size = 0;
	for (int i = 0;i < n; i++)
	{
		if (A[i] > 0 && A[i] % 2 == 0)
		{
			size++;
		}
	}
	int* R = new int[size];
	int j = 0;
	for (int i = 0;i < n; i++)
	{
		if (A[i] > 0 && A[i] % 2 == 0)
		{
			R[j++] = A[i];
		}
	}
	return R;
}


int main()
{
	int n;
	cout << "Enter The Array Number of Elements : ";
	cin >> n;
	int* A = new int[n];
	cout << "Enter The Array Elements : ";
	for (int i = 0;i < n;i++)
		cin >> A[i];
	int newn;
	int* B = PositiveEvens(A, n, newn);
	for (int i = 0;i < newn;i++)
		cout << B[i] << " ";
	cout << endl;
	delete[] A;
	delete[] B;
	return 0;
}