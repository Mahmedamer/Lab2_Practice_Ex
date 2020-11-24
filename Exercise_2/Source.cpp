#include<iostream>
using namespace std;
// Excerise 2 Function doubler
int* doubler(int a[], int size, int& newSize)
{
	newSize = 0;
	for (int i = 0;i < size;i++)
		if (a[i] != 0)
			newSize++;
	int* b = new int[newSize];
	int j = 0;
	for (int i = 0;i < newSize;i++)
		if (a[i] != 0)
			b[j++] = a[i] * a[i];
	return b;
	// this function takes as an input int array "a" of size "s"
	// the function generates a new array
	// and every element in this new array is the double value of its corresponding
	//element in the array "a"
		// Zero elements in the original array should not appear in the new array
		// the function returns a pointer to the doubled array.
		// The input array should not be changed
}
// Excerise 2 Main of doubler
int main()
{
	// the main function
	// generates an integer array
	// gets the array elements from the user
	// then it calls the "doubler" function
	// then it prints the doubled array.
	return 0;
}
// make sure you deallocate any dynamically allocated memory
