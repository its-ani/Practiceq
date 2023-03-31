// C++ program for the above approach

#include<iostream>
using namespace std;

// Function to swap two a & b value
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Function to print array element
void printArray(int arr[], int N)
{

	// Traverse the array
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
}

// Function to sort the array in O(N)
void sortArray(int arr[], int N)
{

	// Traverse the array
	for (int i = 0; i < N;) {

		// If the current element is
		// at correct position
		if (arr[i] == i + 1) {
			i++;
		}

		// Else swap the current element
		// with it's correct position
		else {
			swap(&arr[i], &arr[arr[i] - 1]);
		}
	}
}

// Driver Code
int main()
{

	int arr[] = { 2, 1, 5, 3, 4 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call to sort the array
	sortArray(arr, N);

	// Function call to print the array
	printArray(arr, N);
	return 0;
}
