#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template<class M>class setItems{
	vector<M> data;
	static int count;	// STATIC VARIABLE
    
	public:
	    void GetItem(M t){
	        bool present;
	        
	        if(count == 0){
	           data.push_back(t);
	           count++;
	           return ;
	        }  
			 
	        if(binary_search(data.begin(), data.end(), t))
			    present = true;
	            
			else
	            present = false;
	            
	        if(!present){
	            data.push_back(t);
	            count++;
	        }
	    }
	    
	    void DeleteItem(M t){
	        data.erase(t);
	    }
	    
	    int No_Items(){
	        return data.size();
	    }
	    
	    M* ptrAllocation(){
	    	
	        M* ptr = new M[data.size()];	// ALLOCATING MEMORY DYNAMICALLY
	        
	        for(int i = 0; i < data.size(); i++){
	            ptr[i] = data.at(i);
	        }
	
	        return ptr;
	    }
};

template<class M> int setItems<M>::count = 0;

int main(){
	
    setItems<string> item1;		// OBJ #01
    setItems<int> item2;		// OBJ #02
    
    item1.GetItem("Muhammad");
    item1.GetItem("Tahir");
    item1.GetItem("Khan");
    item2.GetItem(4);
    item2.GetItem(5);
    item2.GetItem(0);
    item2.GetItem(3);  
    
    int size1 = item1.No_Items();
    int size2 = item2.No_Items();
	 
    string* ptr1 = item1.ptrAllocation();
    int* ptr2 = item2.ptrAllocation();
    
    cout << "\tItem 1 size: " << size1 << endl;
    cout << "\n\t\t";
    for(int i = 0; i < size1; i++){
        cout <<ptr1[i] << " ";
    }
    
    cout << endl << endl;
    
    cout << "\tItem 2 size: " << size2 << endl;
    cout << "\n\t\t";  
    for(int i = 0; i < size2; i++){
        cout << ptr2[i] << " ";
    }
    
    cout << endl;

    delete ptr1, ptr2;
    
    return 0;
}
