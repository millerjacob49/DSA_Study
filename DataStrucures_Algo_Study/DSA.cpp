//DSA Sorting Algorithms 
//Ordered by efficiency
#include<iostream>


//Insertion Sort O(n^2)
void insertionSort(int arr[], int size) {
	for (int i = 1; i < size; i++) {	//main loop to iterate thru array **always starts at 2nd index**
		int temp = arr[i];				//temp int to store current value to sort
		int j = i - 1;					//a second iterator to compare values prior to temp

		while (j>=0 && arr[j]>=temp) {	//check, for each prior value, that its less than 'temp'
			arr[j + 1] = arr[j];		//if so, swap current two indices
			j--;						//decrement
		}
		arr[j + 1] = temp;				//Finally, "insert" 'temp' value and move on
	}
}

//Bubble Sort O(n^2)
void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int j = i + 1;
		if (arr[i] > arr[j]) {
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}

}

void selectionSort(int arr[], int size) {

}

int main(void) {
	int array[] = { 1, 6, 4, 5 };
	for (auto x : array) {
		std::cout << x;
	}

	bubbleSort(array, 4);

	std::cout << std::endl;
	for (auto x : array) {
		std::cout << x;
	}
	return 0;
}