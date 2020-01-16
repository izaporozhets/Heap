// АСД_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Heap.h"
int main()
{
	Heap heap;
	heap.add_elem(4);
	heap.add_elem(1);
	heap.add_elem(3);
	heap.add_elem(2);
	heap.add_elem(16);
	heap.add_elem(9);
	heap.add_elem(10);
	heap.add_elem(14);
	heap.add_elem(8);
	heap.add_elem(7);

	heap.show_heap();
	std::cout << std::endl << "Max elem " << heap.get_max();
	std::cout << std::endl << "Heap now "  << std::endl;
	heap.show_heap();
	std::cout << "SORTED ARRAY" << std::endl;
	int* sorted_arr = new int[100];
	int size = heap.sorting_heap(sorted_arr);
	show_sorted_arr(sorted_arr, size);
	delete sorted_arr;
	system("pause");
	return 0;
}