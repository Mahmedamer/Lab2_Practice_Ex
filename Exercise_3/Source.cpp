#include <iostream>
using namespace std;
void merge(int* A1, int* A2, int s1, int s2, int*& newarray) {
	int newsize = s1 + s2;
	newarray = new int[newsize];
	int j = 0;
	for (int i = 0;i < s1;i++)
		newarray[j++] = A1[i];
	for (int i = 0;i < s2;i++)
		newarray[j++] = A2[i];
	// this function takes as an input int array “A1”, “A2” of sizes “s1” and “s2”
	//respectively.
		// the function generates a new array consists of all elements in the two arrays
		//“A1”, ”A2”(elements of A1 then elements of A2).
		// the function is void.
		// The input arrays should not be changed.
		// add parameters to the function as needed, this should be justified in the
		//discussion
		// hint what should be the size of the new generated array ?
		// and how it should be passed to the function ?
}
int main()
{
	// the main function
	// generates two integer arrays
	// gets the arrays elements from the user
	// then it calls the "merge" function
	// then it prints the merged array.
	int n1;
	cout << "Enter The Array Number of Elements" << endl;
	cin >> n1;
	int* A1 = new int[n1];
	cout << "Enter The Array Elements : ";
	for (int i = 0;i < n1;i++)
		cin >> A1[i];	int n;
	int n2;
	cout << "Enter The Array Number of Elements" << endl;
	cin >> n2;
	int* A2 = new int[n2];
	cout << "Enter The Array Elements : ";
	for (int i = 0;i < n2;i++)
		cin >> A2[i];
	int* A3;
	merge(A1, A2, n1, n2, A3);
	for (int i = 0;i < (n1 + n2); i++)
		cout << A3[i] << " ";
	delete[] A1;
	delete[] A2;
	delete[] A3;
	return 0;
}
// make sure you deallocate any dynamically allocated memory.