#pragma once
#include <iostream>
template <typename T>

class Sorter
{
	Sorter() {};
public:
	static void BubleSort(T* arr, unsigned int size)
	{

		for (int pr = 0; pr < size; pr++)
		{
			for (int k = size - 1; k > 0; k--)
			{
				if (arr[k - 1] > arr[k])
					std::swap(arr[k], arr[k - 1]);
			}
		}
	}

	static void InsertionSort(T* arr, unsigned int size)
	{
		for (int pr = 0; pr < size; pr++)
		{
			T value = arr[pr];
			int index;
			for (index = pr - 1; index >= 0 && arr[index] > value; index--)
				std::swap(arr[index + 1], arr[index]);
		}
	}

	static void SelectionSort(T* arr, unsigned int size)
	{
		for (int pr = 0; pr < size; pr++) {
			int minIndex = pr;
			T minValue = arr[pr];

			for (int j = pr + 1; j < size; j++)
			{
				if (arr[j] < minValue) {
					minIndex = j;
					minValue = arr[j];
				}
			}
			std::swap(arr[minIndex], arr[pr]);
		}
	}

	static void QuickSort(T* arr, unsigned int size)
	{
	    int i = 0;
		int j = size - 1;
		T mid = arr[size / 2];

		do {
			while (arr[i] < mid) {
				i++;
			}
			while (arr[j] > mid) {
				j--;
			}

			if (i <= j) {
				T tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;

				i++;
				j--;
			}
		} while (i <= j);

		if (j > 0) {
			QuickSort(arr, j + 1);
		}
		if (i < size) {
			QuickSort(&arr[i], size - i);
		}
	}

	static void Shell(T* arr, unsigned int size) 
	{
		int d = size / 2;
		while (d > 0)
		{
			for (int i = 0; i < size - d; i++)
			{
				int j = i;
				while (j >= 0 && arr[j] > arr[j + d])
				{
					T temp = arr[j];
					arr[j] = arr[j + d];
					arr[j + d] = temp;
					j--;
				}
			}
			d = d / 2;
		}
	}

	static void Show(T* arr, unsigned int size)
	{
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << "\t";
		std::cout << "\n";
	}
};

