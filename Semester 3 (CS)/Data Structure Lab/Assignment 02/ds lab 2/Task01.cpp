#include<iostream>
using namespace std;

int main(){
	
	int marks[3][3] = {{1,0,0}, {0,1,0,}, {0,0,1}};
	int count1=0, count2=0;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(marks[i][j]==1 && i==j){
				count1++;
			}
			if(marks[i][j]==0 && i!=j){
				count2++;
			}
		}
	}
	if(count1==3 && count2==6){
		cout<<"This is I. Matrix."<<endl;
		
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<< marks[i][j];
		}
		cout << endl;
	}
	}
	else{
		cout<<"This is not I. Matrix.";
	}
	
	return 0;
}
