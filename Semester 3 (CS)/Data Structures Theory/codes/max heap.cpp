#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void maxheapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i;
    int r = 2 * i + 1;

    if(l < n && arr[l] > arr[largest])
    {
    	largest = l;
	}
        

    if(r < n && arr[r] > arr[largest])
    {
    	largest = r;
	}
        

    if(largest != i)
	{
        swap(arr[i], arr[largest]);
        maxheapify(arr, n, largest);
    }
}

void minheapify(int arr[], int n, int i)
{
    int smallest = i;
    int l = 2 * i;
    int r = 2 * i + 1;

    if (l < n && arr[l] < arr[smallest])
    {
    	smallest = l;
	}
        

    if (r < n && arr[r] < arr[smallest])
    {
    	smallest = r;
	}
        

    if (smallest != i)
	{
        swap(arr[i], arr[smallest]);
        minheapify(arr, n, smallest);
    }
}

void insertmax(int arr[], int &n, int value)
{
	n=n++;
	int i = n-1;
	int parent;
	arr[n-1] = value;
	while(i > 1)
	{
		parent = i / 2;

		if(arr[i] > arr[parent]) 
		{
			swap(arr[i], arr[parent]);
		}
			
		
		i--;
	}
}


void maxdeletion(int arr[], int &n)
{
    int lastElement = arr[n-1];
    arr[1] = lastElement;

    n=n-1;

    maxheapify(arr, n, 1);
}

void insertmin(int arr[], int &n, int value)
{
	n=n++;
	int i=n-1;
	int parent;
	arr[n-1] = value;
	while(i > 1)
	{
		parent = i / 2;

		if(arr[i] < arr[parent]) 
		{
			swap(arr[i], arr[parent]);
		}
			
		
		i--;
	}
}

void mindeletion(int arr[], int &n)
{
    int lastElement=arr[n-1];

    arr[1] = lastElement;

    n = n - 1;

    minheapify(arr, n, 1);
}

void printArray(int arr[], int &n)
{
	for(int i = 1; i < n; i++)
	{
		cout << arr[i] << " ";
	}
		
	cout << endl;

}

void top(int arr[], int n)
{
	if(n > 1)
	{
		cout << "Top: " << arr[1] << endl;
	}
		
}

int main()
{
	cout << "Max Heap: " << endl;
	int arr[10]={5,7,2,1,9,11};
	int size = 6;
	
	printArray(arr, size);
	
	cout << "Insertion: ";
	
	insertmax(arr, size, 27);
	
	cout << endl;
	
	printArray(arr, size);
	
	top(arr, size);
	
	cout << "Deletion: ";
	
	maxdeletion(arr, size);
	
	cout << endl;
	
	printArray(arr, size);
	
	cout << "Min Heap: " << endl;
	
	int arr1[10] ={8,4,2,1,3,6};
	int size1 = 6;

	printArray(arr1, size1);
	
	cout << "Insertion: ";
	
	insertmin(arr1, size1, 20);
	
	cout << endl;
	
	printArray(arr1, size1);
	
	top(arr1, size1);
	
	cout << "Deletion: ";
	
	mindeletion(arr1, size1);
	
	cout << endl;
	
	printArray(arr1, size1);

	return 0;
}
