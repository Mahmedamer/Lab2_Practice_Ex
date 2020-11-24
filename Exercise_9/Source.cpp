#include<iostream>
using namespace std;

bool PositiveEvens(int* A, int n,int *& R, int& size)
{
	bool result = false;
	size = 0;
	bool *check = new bool[n];  // True if it is a duplicate
	for (int i = 0;i < n;i++)
		check[i] = false;		// defaults all to false (i.e. not a duplicate)
	for (int i = 0;i < n; i++)
	{
		if (check[i] == true)   // if it is a duplicate don't check it
		{
			continue;
		}
		for (int j = i + 1;j < n;j++)
		{
			if (A[i] == A[j])
			{
				result = true;
				check[j] = true; // change the duplicate to true
			}
		}
		size++; // increase size of unique by one
	}
	R = new int[size];
	int k = 0;
	for (int i = 0;i < n; i++)
	{
		if (check[i] == false) // if it is not a duplicate add it to result array
		{
			R[k++] = A[i];
		}
	}
	delete[] check;
	return result;
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
	int* B;
	bool result = PositiveEvens(A, n, B,newn);
	for (int i = 0;i < newn;i++)
		cout << B[i] << " ";
	cout << endl;
	if (result)
	{
		cout << "Original array has duplicates" << endl;
	}
	else
	{
		cout << "No duplicates in original array" << endl;
	}
	delete[] A;
	delete[] B;
	return 0;
}