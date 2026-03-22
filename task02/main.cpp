#include"util.h"

int main() {
	srand(time(NULL));
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size: ";
	cin >> size;

	init_user(array, size);


	long long start = time(NULL);

	insertion_Sort(array, size);

	long long finish = time(NULL);

	

	print("\n\nAfter sorting: ");
	print(convert(array, size));


	return 0;
}