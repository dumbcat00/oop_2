#include "arrr.h"

void (*univfoo(int sum, int* arr))(int* arr, int n) {

	void (*actions[]) (int* arr, int n) = { invert, sort1, sort2 };

	if (sum == arr[0]) {
		return actions[0];
	}
	if (sum > arr[0]) {
		return actions[1];
	}
	if (sum < arr[0]) {
		return actions[2];
	}
}

int summ(int* arr, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

int* allocate_arr(int n) {
	int* arr = new int[n];
	//for (int i=0; i<n; i++)
	return arr;
}

int* fill_arr(int n) {
	int* arr = allocate_arr(n);
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;	
	return arr;
}

void print_arr(int* arr, int n) {
	for (int i = 0; i < n; i++) 
		std::cout << arr[i] << "\t";
}

void delete_arr(int* arr, int n) {
	delete[n] arr;

}

void invert(int* arr, int n) {
	for (int i = 0, j = n - 1; i < j; ++i, --j) {
		int a = arr[i];
		arr[i] = arr[j];
		arr[j] = a;
	}
}
void sort1(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
}

void sort2(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
};