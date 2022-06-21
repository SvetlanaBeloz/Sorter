#include "Sorter.h"

int main()
{
	int arr[]{ 23, 15, 45, 4, 78, 9, 96, 12, 33, 56 };
	Sorter<int>::BubleSort(arr, 10);
	Sorter<int>::Show(arr, 10);

	int arr2[]{ 23, 15, 45, 4, 78, 9, 96, 12, 33, 56 };
	Sorter<int>::InsertionSort(arr2, 10);
	Sorter<int>::Show(arr2, 10);
	
	int arr3[]{ 23, 15, 45, 4, 78, 9, 96, 12, 33, 56 };
	Sorter<int>::SelectionSort(arr3, 10);
	Sorter<int>::Show(arr3, 10);

	int arr4[]{ 23, 15, 45, 4, 78, 9, 96, 12, 33, 56 };
	Sorter<int>::QuickSort(arr4, 10);
	Sorter<int>::Show(arr4, 10);

	int arr5[]{ 23, 15, 45, 4, 78, 9, 96, 12, 33, 56 };
	Sorter<int>::Shell(arr5, 10);
	Sorter<int>::Show(arr5, 10);
}
