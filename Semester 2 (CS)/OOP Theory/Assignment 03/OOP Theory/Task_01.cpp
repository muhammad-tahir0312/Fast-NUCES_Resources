#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char ch;    
	
	ifstream input;
	
	input.open("dummy.txt");

	cout<< "First Five Words! " << endl;
    for (int i = 0; i < 5; i++){
            if (!input.eof()){
                input.get(ch);
                cout << ch;
            }
            else{
                exit(1);
            }
        }
    cout << endl;
    
 	int t;  
    while(true){
    	input.seekg(0, ios::beg);
        cout << endl << "Enter the number of characters you wants to display AND -1 to end: ";
        cin >> t;
        
        if(t==-1){
        	return 0;
		}
        for (int i = 0; i < t; i++){
            if (!input.eof()){
                input.get(ch);
                cout << ch;
            }
            else{
                exit(1);
            }
        }    
        cout << endl;       
    }
    return 0;
}
