/*
 ============================================================================
 Name        : arkenstone.cpp
 Author      : Tyler Jones
 ============================================================================
 */

#include "production.h"

int main(int argc, char* argv[]) {
	cout << "Dynamic Programming" << endl << endl;

	Production* p = new Production();

	int arr[8][8] = {
			{79, 71, 18, 20, 34, 51, 93, 65},
			{73, 38, 24, 49, 18, 6, 40, 74},
			{31, 5, 63, 10, 32, 40, 14, 13},
			{13, 78, 48, 19, 78, 11, 90, 94},
			{22, 93, 68, 11, 56, 63, 49, 35},
			{85, 52, 27, 5, 94, 91, 82, 62},
			{46, 23, 99, 77, 10, 42, 1, 72},
			{89, 70, 73, 83, 90, 22, 44, 92}
	};

	p->production(arr);

	delete p;
	return 0;
}
