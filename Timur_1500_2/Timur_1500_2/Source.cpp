#include <iostream>
#include "OrderModule.h"
#include <stdlib.h>
#include <ctime>
#define sizeArr 100000

using namespace std;

int main() {
	int start = clock();
	int list[sizeArr];
	srand(time(0));
	for (int i = 0; i < sizeArr; i++)
		list[i] = rand() % sizeArr;
	BubbleSort(list, sizeArr);
	int finish = clock();
	cout << finish - start;
}