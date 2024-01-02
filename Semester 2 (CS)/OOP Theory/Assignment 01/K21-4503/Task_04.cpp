#include<iostream>
#include<string>
using namespace std;

class Book{
	public:
	const string bookname[5]={"Nineteen Eighty-Four", " Central Processing Unit", "Management", "Hockey", "Cricket"};
	string author[5]={"Christopher Nolan", "Terrence Malick", "Errol Morris", "Sohail Abbas", "Shahid Afridi"};
	string category[4]={"Fiction", "Computer", "Finance", "Sports"};
	int ISBN[5]={1000,2000,3000,4000,5000};
	double price[5]={10, 15, 5, 25, 8};
	
	// APPLYING GIVEN CONDITIONS
	double search(int count)
		{
			char choice;
			int c=0;
			static double totalbill=0;
			
			do
			{
				cout << "\tGategory: Fiction\n";
				cout << "A) Book Name: " <<bookname[0];
				cout << "\n Book Author: " << author[0];
				cout << "\n ISBN: " << ISBN [0];
				cout << "\n Price: " << price[0]<<endl;
				
				cout << "\tGategory: Computer\n";
				cout << "B) Book Name:" << bookname[1];
				cout << "\n Book Author: " << author[1];
				cout << "\n ISBN: " << ISBN [1];
				cout << "\n Price: " << price[1]<<endl;
				
				cout << "\tGategory: Finance\n";
				cout << "C) Book Name: " << bookname[2];
				cout << "\n Book Author: " << author[2];
				cout << "\n ISBN: " << ISBN [2];
				cout << "\n Price: " << price[2]<<endl;
				
				cout << "\tGategory: Sports\n";
				cout << "D) Book Name: " << bookname[3];
				cout << "\n Book Author: " << author[3];
				cout << "\n ISBN: " << ISBN [3];
				cout << "\n Price: " << price[3]<<endl;
				
				cout << "\tGategory: Sports\n";
				cout << "E) Book Name: " << bookname[4];
				cout << "\n Book Author: " << author[4];
				cout << "\n ISBN: " << ISBN [4];
				cout << "\n Price: " << price[4]<<endl;
				
				cout << "\n\nEnter Book to Buy a Book: "<< endl;
				cin >> choice;
				
				if(choice=='A' || choice=='B' || choice=='C' || choice=='D' || choice=='E' || 
				   choice=='a' || choice=='b' || choice=='c' || choice=='d' || choice=='e')
					{
						c++;
					}
				if(choice=='A' || choice=='a')
					{
						totalbill=totalbill+price[0];
					}
				else if(choice=='B' || choice=='b')
					{
						totalbill=totalbill+price[1];
					}
				else if(choice=='C' || choice=='c')
					{
						totalbill=totalbill+price[2];
					}
				else if(choice=='D' || choice=='d')
					{
						totalbill=totalbill+price[3];
					}
				else if(choice=='E' || choice=='e')
					{
						totalbill=totalbill+price[4];
					}
			}
			while(c!=count);
		
			return totalbill;
		}
	// IMPLEMENTING 'DISCOUNT' CONDITIONS
	double discount(int count, float b){
		
		double dis;
			if(count==2)
				{
					dis=b*0.025;
				}
			else if(count==3)
				{
					dis=b*0.05;
				}
			else if(count==4)
				{
					dis=b*0.075;
				}
			else if(count>4)
				{
					dis=b*0.10;
				}
		return dis;
	}
};


int main(){
	// OBJECT # 01
	Book b;
	
	int count=0;
	float bill, discount=0;
	char x;
	float newbill=0;
	
	cout << "How Many Books You Want To Buy: ";
	cin >> count;
	// CALLING FUNCTIONS
	bill = b.search(count);
	discount = b.discount(count, bill);
	newbill = bill-discount;
	
	cout << "*******************************";
	cout << endl << "\tTotal Bill: " << newbill << endl;
	cout << "*******************************" << endl;
	
	return 0;
}
