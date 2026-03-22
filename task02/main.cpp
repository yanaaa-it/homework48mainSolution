#include"util.h"

int main() {
	srand(time(NULL));
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size: ";
	cin >> size;

	init_user(array, size);

	Selection_Sort(array, size);


	print("\n\nAfter sorting: ");
	print(convert(array, size));


	return 0;
}