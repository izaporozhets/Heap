#include "pch.h"
#include "Heap.h"
#include <iostream>
Heap::Heap() {
	ptr = new int[SIZE];
	heap_size = 0;
}
Heap::~Heap() {
	delete ptr;
}

void Heap::swap(int i, int parent) {
	int temp = ptr[i];
	ptr[i] = ptr[parent];
	ptr[parent] = temp;
}

void Heap::add_elem(int n) {
	int i, parent;
	i = heap_size;
	ptr[i] = n;
	parent = (i - 1) / 2;
	while (parent >= 0 && i > 0) {
		if (ptr[i] > ptr[parent]) {
			swap(i,parent);
		}
		i = parent;
		parent = (i - 1) / 2;
	}
	heap_size++;
}

void Heap::heapify(int i) {
	int left, right;
	int temp;
	left = 2 * i + 1;
	right = 2 * i + 2;
	if (left < heap_size) {
		if (ptr[i] < ptr[left]) {
			swap(i,left);
			heapify(left);
		}
	}
	if (right < heap_size) {
		if (ptr[i] < ptr[right]) {
			swap(i,right);
			heapify(right);
		}
	}
}

int Heap::get_max() {
	int x;
	x = ptr[0];
	ptr[0] = ptr[heap_size - 1];
	heap_size--;
	heapify(0);
	return(x);
}

void Heap::show_heap() {
	for (int i = 0; i < heap_size; i++) {
		std::cout << ptr[i] << " ";
	}
	std::cout << std::endl;
}

int Heap::sorting_heap(int* sorted_arr) {
	int current_size = heap_size;
	for (int i = 0; i < current_size; i++) {
		sorted_arr[i] = get_max();
	}
	return current_size;
}

void show_sorted_arr(int* sorted_arr, int size) {
	for (int i = 0; i < size;i++) {
		std::cout << sorted_arr[i] << " ";
	}
}
