#pragma once
class Heap {
public:
	Heap(); 
	~Heap();
	void add_elem(int);
	void show_heap();
	int get_max();
	int sorting_heap(int*);
private:
	static const int SIZE = 100;
	void swap(int i, int parent);
	int* ptr;        
	int heap_size; 
	void heapify(int);
};

void show_sorted_arr(int* sorted_arr,int size);