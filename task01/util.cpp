#include"util.h"
void print(string s) {
	cout << s;
}

void init_user(int array[], int lenght) {
	cout << "Input your array elements: ";
	for (int index = 0; index < lenght; index++)
	{
		cin >> array[index];
	}
}

string convert(int array[], int lenght) {
	string s = "" ;
	for (int index = 0; index < lenght; index++)
	{
		s += " " + to_string(array[index]);
	}

	return s;
}

string get_time(long long start, long long finish) {
	if (start > finish) {
		int t = start;
		start = finish;
		finish = t;
	}
	string result = "";

	long long time = finish - start;

	result += to_string(time / 3600);

	result += " : " + to_string((time % 3600) / 60);

	result += " : " + to_string(time % 60);

	return result;
}