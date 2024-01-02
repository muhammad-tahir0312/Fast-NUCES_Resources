#include<iostream>
#include<fstream>

using namespace std;

int main(){    
    fstream file2("copy.txt", ios::out);
    fstream file1("file1.txt", ios::in);

 	if(file1.fail()){
 		cout << "File 1 Failed";
 		exit(1);
	}
 	if(file2.fail()){
 		cout << "File 2 Failed";
 		exit(1);
	}
	
	string line;
    if(file1 && file2){ 
	    while(getline(file1,line)){
	        file2 << line << "\n";
	    } 
        cout << "Copy Finished \n";
    }  
	else{       
        printf("File can not be read");
    }
 
    file1.close();
    file2.close();
 
    return 0;
}
