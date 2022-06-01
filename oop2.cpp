#include "arrr.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int n;
	cout << "Число элементов в массиве:\n";
	cin >> n;
	cout << endl;

	//проверка на ошибки
	if (n <= 0)
		cout << "Ошибочка вышла." << endl;
	else {

		cout << "Исходный массив:" << endl;
		int* arr1 = fill_arr(n);
		print_arr(arr1, n);
		cout << endl;

		int sum = summ(arr1, n);

		cout << "Результат:" << endl;

		univfoo(sum, arr1)(arr1, n);
		for (int i = 0; i < n; i++) {
			cout << arr1[i] << "\t";
		}

		delete_arr(arr1, n);

	}
	return 0;
}