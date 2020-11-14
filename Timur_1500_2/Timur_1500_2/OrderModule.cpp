#include <stdlib.h>
#include <ctime>


void QuickSort(int* arr, int l, int r) {
    int i = l;
    int j = r;
    int pivot = arr[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (j > l)
        QuickSort(arr, l, j);
    if (i < r)
        QuickSort(arr, i, r);

}


void BubbleSort(int* arr, size_t size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void BogoSort(int* arr, size_t size) {
    int temp = 0, indx = 0;
    srand(time(0));

    while (true) {
        bool flag = true;
        for (int i = 0; i < size - 1; i++) {
            if (arr[i + 1] < arr[i])
                flag = false;
        }
        if (!flag) {
            for (int i = 0; i < size; i++) {
                indx = rand() % size;
                temp = arr[i];
                arr[i] = arr[indx];
                arr[indx] = temp;
            }
        }
        else
            return;
    }
}

void CountingSort(char* arr, size_t size) {
    char *output = new char[size];
    int count[256], i;
    for (int i = 0; i < 256; i++)
        count[i] = 0;
    for (i = 0; arr[i]; i++)
        count[arr[i]]++;
    for (i = 1; i <= 255; i++)
        count[i] += count[i - 1];
    for (i = 0; arr[i]; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
}


size_t BinarySearch(int* arr, size_t size, int element) {
	int	l = 0, r = size - 1, m	= 0;
	while (l <= r) {
		m = (l + r) / 2;
		if (arr[m] == element)
			return m;
		else if (element < arr[m])
			r = m - 1;
		else
			l = m + 1;
	}
	return -1;
}