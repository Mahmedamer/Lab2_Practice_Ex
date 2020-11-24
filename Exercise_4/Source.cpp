#include<iostream>
using namespace std;
void AlternateSplit(int*&A, int n , int*& B , int*& C , int& sB, int& sC)
{
	sB = n / 2 + n % 2;
	sC = n / 2;
	B = new int[sB];
	C = new int[sC];
	int j = 0, k = 0;
	for (int i = 0 ; i < n;i++)
	{
		if (i % 2 == 0)
		{
			B[j++] = A[i];
		}
		else
		{
			C[k++] = A[i];
		}
	}
	delete[] A;
	A = NULL;
}
int* AlternateMerge(int*& B, int*& C, int& sB, int& sC)
{
	int n = sB + sC;
	int* A = new int[n];
	int j = 0 , k = 0;
	for (int i = 0; i < n;i++)
	{
		if (i % 2 == 0)
		{
			A[i] = B[j++];
		}
		else
		{
			A[i] = C[k++];
		}
	}
	return A;
}
int main()
{
	int n;
	cout << "Enter The Array Number of Elements" << endl;
	cin >> n;
	int* A = new int[n];
	cout << "Enter The Array Elements : ";
	for (int i = 0;i < n;i++)
		cin >> A[i];
	int* X, * Y;
	int sX, sY;
	AlternateSplit(A, n, X, Y, sX, sY);
	cout << "B = ";
	for (int i = 0; i < sX;i++)
		cout << X[i] << " ";
	cout << endl;
	cout << "C = ";
	for (int i = 0; i < sY;i++)
		cout << Y[i] << " ";
	cout << endl;
	cout << "A = "<<A << endl;
	int* Z = AlternateMerge(X, Y, sX, sY);
	cout << "A = ";
	for (int i = 0; i < n;i++)
		cout << Z[i] << " ";
	delete[] Z;
	delete[] X;
	delete[] Y;
	return 0;
}