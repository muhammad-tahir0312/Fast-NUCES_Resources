#include<iostream>
using namespace std;

class Safe_Array{
	public:
		bool array[5][5];
	
	Safe_Array(){	// default const.
	
	//Initializing all positions to FALSE.
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			array[i][j] = false;
		}
	}
	
	//Initializing given positions to TRUE.
	array[0][1]  = array[0][3] = array[0][4] = array[1][0] = true;
	array[1][2] = array[1][4] = array[2][1] = array[3][0] = true;
	array[3][4] = array[4][0] = array[4][1] = array[4][3] = true;
	}	
	
	bool Set(int i, int j){ 	//set method
        if(i<0 || i >=5 || j<0 || j>=5){
            cout<<"\nArray out of bounds\n";
        }
        return array[i][j];
	}
	
	void Display(){
		cout<<"Array Elements are: "<<endl<<endl;
		//Printing table
		for(int i = 0; i < 5; i++){
			cout<<"\t "<<i;
		}
		cout<<"\n_____________________________________________\n";
		for(int i = 0; i < 5; i++){
			cout<<i<<"   | \t";
			for(int j = 0; j < 5; j++){
				if(array[i][j] == true){
				    cout<<" *  | \t";
				}
				else{
					cout<<"    | \t";
				}
			}
			cout<<"\n_____________________________________________\n";
		}
	}
	void checkmutual(int a , int b){
        bool flag = false;
        for(int i = 0; i<5; i++){
            if(array[i][a] == array[i][b] && array[i][a] == true){
                cout<<"\nPerson "<<a<<" and Person "<<b<<" have a common friend: "<<i<<endl;
                flag = true;
            }
        }
        if(flag != true){
            cout<<"\nNo Common Friends!!!\n";
        }
	}
};

int main(){
	
    int num1, num2;
    Safe_Array S;
    
    S.Display();
    
    cout<<"\nEnter Value 1: ";
    cin>>num1;
    cout<<"\nEnter Value 2: ";
    cin>>num2;
    
    S.checkmutual(num1,num2);
    
	return 0;
}
