#include<iostream>
#include<fstream>

using namespace std;

template <class F> class Sorter{
	private:
		int size;
		F *array;
	
	public:
		Sorter(){ }
		Sorter(int s)		{
			size=s;
			array=new F(s);
		}
	
	void sortint(){	
		for(int i=0; i < size; i++)
		{
			cout << "Enter ["<<i+1<<"] element for Integer sorting: ";
			cin >> array[i];
       	}
       		
    	for (int k = 0; k < size - 1; k++){
    		for (int j = 0; j < size - k - 1; j++){
    			if (array[j] > array[j + 1]){
    				swap(array[j], array[j + 1]);
				}
            }
        }
	}
		
	void sortchar(){
		cout << endl << endl;	
		for(int i=0; i < size; i++){
			cout << "Enter ["<<i+1<<"] element for Character sorting: ";
			cin >> array[i];
       	}

    	for (int k = 0; k < size - 1; k++){
    		for (int j = 0; j < size - k - 1; j++){
    			if (array[j] > array[j + 1]){
    				swap(array[j], array[j + 1]);
				}
            }
       }
	}
		
	void display(){
		cout << "\nSorted array: ";
		for(int i=0; i < size ; i++){
			cout << " " << array[i] ;
		}
		cout << endl;
	}		
};

int main(){
	
	Sorter<int> I(5);
	Sorter<char> C(5);
	
	cout << "Enter Five Elements: " << endl;
	I.sortint();
	I.display();
	
	cout << "Enter Five Elements: " << endl;
	C.sortchar();
	C.display();
	
	return 0;
}
