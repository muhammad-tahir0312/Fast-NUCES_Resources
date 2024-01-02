#include <iostream>
using namespace std;

class MinHeap{
	int* array;
	int capacity;
	int size;
public:
	MinHeap(int cap){
		this->capacity = cap;
		array = new int[capacity];
		this->size =0;
	
	}
	int getSize(){
		return size;
	}
	int getParent(int child){
		if(child%2==0)
			return (child/2)+1;
		return (child/2);
	}
	int getLeft(int parent){
		return (2*parent+1);
	}
	int getRight(int parent){
		return (2*parent+2);
	}
	int getMax(){
		for(int i=0; i<size; i++)
			cout << array[i] << " ";
		cout << endl;
	}
	bool isLeaf(int i){
		if(i>=size)
			return true;
		return false;
	}
	void shiftUp(int i){
		if(i==0)
			return;
		int parent_index = getParent(i);
		
		if(array[parent_index] > array[i]){
			int temp = array[parent_index];
			array[parent_index] = array[i];
			array[i]= temp;
			shiftUp(parent_index);
		}
	}
	void shiftDown(int i){
		int l = getLeft(i);
		int r = getRight(i);
		
		if(isLeaf(l))
			return;
		int minIndex = i;
		if(array[l] < array[i])
			minIndex = l;
		if(!isLeaf(r) && (array[r] < array[minIndex])){
			minIndex = r;
		}
		if(minIndex != i){
			int temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;
			shiftDown(minIndex);
		}
	}
	void Insert(int key){
		array[size]= key;
		shiftDown(size);
		size++;
		Heapify(array,size);
		for(int i=0; i<size; i++){
			cout << array[i] << " ";
		}
		cout << endl;
	}
	int extractMax(){
		int max = array[0];
		array[0]= array[size-1];
		size--;
		shiftDown(0);
		return max;
	}
	int removeAt(int index){
		int r = array[index];
		array[index] = array[size-1];
		size--;
		int p = getParent(index);
		if(index == 0 || array[index] < array[p])
			shiftDown(index);
		else
			shiftUp(index);
		return r;
	}
	void Heapify(int *array, int len){
		size = len;
		this->array = array;
		for(int i=size-1; i>=0; i--)
			shiftDown(i);
	}
};

int main(){
	MinHeap heap(10);
	
	heap.Insert(20);
	heap.Insert(17);
	heap.Insert(23);
	heap.Insert(5);
	heap.Insert(30);
	heap.Insert(50);
	heap.Insert(11);
	heap.Insert(13);
	
	
	return 0;
}
