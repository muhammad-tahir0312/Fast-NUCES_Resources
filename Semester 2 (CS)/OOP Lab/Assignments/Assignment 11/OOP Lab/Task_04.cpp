#include<iostream>
#include<fstream>

using namespace std;

class Person{
	private:
		string name;
		int age;	
	public:
		Person(){	}
		Person(string n, int a){
			this->name=n;
			this->age=a;	
		}
	string getName(){
        return name;
	}			
	int getAge(){
		return age;
	}
};

int main(){
	Person person1("Muhammad Tahir", 20);	// instance of class
	
	// writing in binary file
	ofstream file1("binary.bin");	
	if(file1.fail()){
		cout << "File Failed";
		exit(1);
	}	
	file1.write((char *)&person1, sizeof(person1));
	file1.close();
	
	// reading from binary file
	ifstream file2("binary.bin");
	if(file2.fail()){
		cout << "Sorry! File Not Found!";
		exit(1);
	}
	file2.read((char *)&person1, sizeof(person1));
	
	while(!file2.eof()){
		cout << "\n\tName: " << person1.getName() << "\n\tAge: " << person1.getAge() << endl;
		file2.read((char *)&person1, sizeof(person1));
	}
	file2.close();
			
	return 0;
}
