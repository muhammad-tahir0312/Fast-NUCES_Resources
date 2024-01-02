#include<iostream>		// USING VECTOR IMPLEMENTATION
#include<vector>

using namespace std;

int main(){
    int num = 5, course; 
	float temp1, temp2;
	
    vector<vector<float> > cr_h;
    
    cout<<"Enter Number of students: ";
    cin>>num;

    for(size_t i = 0; i < num; i++){
    	
        cout<<endl<<"For Student "<<i+1<<" :"<<endl;
        vector<float> temp;
        
        cout<<endl<<"Enter number of Courses Registered: ";
        cin>>course;
        for(size_t j = 0; j < course; j++){
            cout<<endl<<"Enter GPA for Course "<<j+1<<" : ";
            cin>>temp1;
            temp.push_back(temp1);
        }
        cr_h.push_back(temp);
    }
	
	//Calculating CGPA   
    for(size_t i = 0; i < cr_h.size(); i++){
        temp2 = 0;
        for(int j=0; j < (cr_h.at(i).size()); j++){
            temp2+= (cr_h.at(i).at(j) *3) ;
        }
        cout<<endl<<"For Student "<<i+1<<" GPA is: "<<(temp2/(cr_h.at(i).size()*3));
    }
    
    return 0;
}
