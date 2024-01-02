#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Participant
{
private:
    char name[15];
    unsigned int id;
    float score;

public:
    Participant(){
    id=0;
    score=0.0;
	}
    string getName(){
        return this->name;
    }
    void setName(string Name){
        int length;
        (Name.size() < 15? length= Name.size() : length = 14 );
        Name.copy(name, 14);
        this->name[15]= '\0';
    }
    int getId(){
        return this->id;
    }
    void setId(int id){
        this->id = id;
    }
    float getScore(){
        return this->score;
    }

    void setScore(float score){
        try
            {
                if(score >=0 && score <=100){
                    this->score = score;
                }
                else{
                    throw score;
                }
            }
            catch(float s){
                cerr<<"\nInvalid Data Entry";
                cout<<"\nScore must be greater than 0 and less than 100,Enter Score again: ";
                cin>>score;
            }
        this->score = score;
    }
};

void Input(void){   
    string name; float score; unsigned int id;
    Participant ob1;
    cout<<"\nFor Participant Details: "<<"\nEnter Name: ";
    getline(cin, name);
    ob1.setName(name);
    fflush(stdin);
    cout<<"\nEnter ID: ";
    cin>>id;
    ob1.setId(id);
    cout<<"\nEnter Score: ";
    cin>>score;
    ob1.setScore(score);
    ofstream file;
    file.open("PARTICIPANT.TXT", ios::app | ios::out | ios::binary);
    if(!file.fail()){
        file.seekp(ob1.getId(), ios::beg); //Writting Data to File Randomly
        file.write((char*)&ob1, sizeof(Participant));
    }
    else{
        cout<<"\nFile Not opened"<<endl;
        exit(1);
    }
    file.close();
}

void Output(void){
    unsigned int ID;
    cout<<"\nEnter User ID to search for: ";
    cin>>ID;
    Participant ob2;
    ifstream file;
    file.open("PARTICIPANT.TXT", ios::in| ios::binary);
    if(!file.fail())    {
        file.seekg(0,ios::beg);
        while (!file.eof()){
            file.read((char*)&ob2, sizeof(Participant));
            if(ob2.getId() == ID){
                break;
            }        
        }
    } 
    else{
        cout<<"\nFile not opened";
        exit(1);
    }
    cout<<"\nSearch Results: "<<endl;
    cout<<"\nName is: "<<ob2.getName()<<"\nID is: "<<ob2.getId()<<"\nScore is: "<<ob2.getScore()<<endl;
    file.close();
}

void Max(void){
    float max=0.00; 
    Participant ob2;
    ifstream file;
    file.open("PARTICIPANT.TXT", ios::in| ios::binary);
    if(!file.fail())    {
        file.seekg(0 , ios::beg);
        while(!file.eof()){
            file.read((char*)&ob2, sizeof(Participant));
            if(ob2.getScore()> max){
                max = ob2.getScore();
            }
        } 
    }else
    {
        cout<<"\nFile not opened";
        exit(1);
    }  
    cout<<"\nMaximum Score is: "<<ob2.getScore()<<"\nScored by: "<<ob2.getName()<<"\nID is: "<<ob2.getId()<<endl;
    file.close();
}

int main(void){
    char choice ='Y';
    
    while(choice =='Y' || choice =='y'){
        Input();
        cout<<"\nDo You want to continue? ";
        cin>>choice;
        getchar();        
    }

    Output();
    Max();
     
    return 0;
 }
