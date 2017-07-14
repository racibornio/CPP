#include <iostream>
#include <conio.h>

const int INDEX_DEF_VAL = -1;
const int ARRAY_SIZE = 9;

//void printArray(int &arrayPtr, int size);
bool exists(int *indexes, int size, int index);
void add(int *indexes, int size, int index);
void printArray(int *arrayPtr, int size);
void min(int *array, int array_size, int *indexes, int indexes_size, int *out);
void sort(int *array, int array_size, int *indexes, int indexes_size);

int main() {
	int original[] = { 100, 4, 2, 56, 98, 34, 67, 84, 30 };
	int indexes[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1 };

	printArray(original, ARRAY_SIZE);
	sort(original, ARRAY_SIZE, indexes, ARRAY_SIZE);
	printArray(indexes, ARRAY_SIZE);
	
	_getch();
	return 0;
}

/**
* sort array. put sorted element's indexes to "indexes" array
* @param array needed to sort array
* @param array size
* @param indexes where sorted element's indexes should be placed
* @param indexes_size array size
*/
void sort(int *array, int array_size, int *indexes, int indexes_size) {
	int *result = new int[2];

	for (int i = 0; i < array_size; i++) {
		min(array, array_size, indexes, indexes_size, result);
		//printArray(result, 2);
		add(indexes, indexes_size, result[0]);
	}
}

/**
* checks if index already exists in indexes array
* @param indexes where index may be
* @param size indexes array size
* @param index to find
* @return true if index found in indexes array
*/
bool exists(int *indexes, int size, int index) {
	for (int i = 0; i < size; i++) {
		if (index == indexes[i]) {
			return true;
		}
	}
	return false;
}

/**
* add index to indexes array
* @param indexes where we have to put new index
* @param size indexes array size
* @param index to put in index array
*/
void add(int *indexes, int size, int index) {
	for (int i = 0; i < size; i++) {
		if (indexes[i] == INDEX_DEF_VAL) {
			indexes[i] = index;
			return;
		}
	}
}

/**
* find minimum.
* @param array for searching minimum value(number)
* @param indexes exceptions - new found minimum (actually its index)
* shouldn't be in this index array
* @param out array of 2 elements:
* first: index
* second: value
* */
void min(int *array, int array_size, int *indexes, int indexes_size, int *out) {
	int index = 0;
	int value = array[index];

	for (int i = 0; i < array_size; i++) {
		if (value > array[i] && !exists(indexes, indexes_size, i)) {
			value = array[i];
			index = i;
		}
	}
	out[0] = index;
	out[1] = value;
}

/**
* print array
* @param arrayPtr which should be printed
* @param size array size
*/
void printArray(int *arrayPtr, int size) {
	printf("printing array: %p with size: %d\n", arrayPtr, size);
	for (int i = 0; i < size; i++) {
		printf("i[%d]: %d\n", i, arrayPtr[i]);
	}
}