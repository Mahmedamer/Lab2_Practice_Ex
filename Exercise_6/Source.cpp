#include<iostream>
using namespace std;

int* MultiplesOfValue(int* A,int n, int val , int &size)
{
	size = 0;
	for (int i = 0;i < n; i++)
	{
		if (A[i] % val == 0)
		{
			size++;
		}
	}
	int* R = new int[size];
	int j = 0;
	for (int i = 0;i < n; i++)
	{
		if (A[i] % val == 0)
		{
			R[j++] = A[i];
		}
	}
	return R;
}


int main()
{
	int n;
	cout << "Enter The Array Number of Elements : " ;
	cin >> n;
	int* A = new int[n];
	cout << "Enter The Array Elements : ";
	for (int i = 0;i < n;i++)
		cin >> A[i];
	int value;
	cout << "Enter The Value : ";
	cin >> value;
	int newn;
	int* B = MultiplesOfValue(A, n,value, newn);
	for (int i = 0;i < newn;i++)
		cout << B[i] << " ";
	cout << endl;
	delete[] A;
	delete[] B;
	return 0;
}