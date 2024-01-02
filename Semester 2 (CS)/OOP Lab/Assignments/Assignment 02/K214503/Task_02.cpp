#include<iostream>
using namespace std;

void display(void);
void feetAndInchesToMetersAndCent(void);
void metersAndCentTofeetAndInches(void);

int main()
{
    cout<<"\t\t\tHeight Converter"<<endl;
    display(); 

    return 0;
}

void display(void)
{
    char choice,choice2;
    do
    {
        cout<<"\nA) Conversion Of Height in Feet & inches to Meters & centimeters\n";
        cout<<"B) Conversion Of Height in Meters & centimeters to Feet & inches\n\n";
        cout<<endl<<"\t Enter choice: ";
        cin>>choice; 

        if(choice== 'A'|| choice== 'a'){        
            feetAndInchesToMetersAndCent();
        }
        else if(choice== 'B'|| choice== 'b'){
            metersAndCentTofeetAndInches();
        }
        else
            cout<<"Invalid Data entry";

        cout << "Do you want to continue(Y/N)?\t";
        cin>>choice2;
    }while(choice2 == 'Y' || choice2 == 'y');    
}

void feetAndInchesToMetersAndCent(void)
{
    float  inches, feet, meters, cent;
    cout<<"Enter Height in Feet:\t";
    cin>>feet;
    inches = 12 * feet;
    cent = 2.54 * inches;
    meters = cent * 0.01;
    cout<<"Your Height in inches =: "<<inches<<endl;
    cout<<"Your Height in meters =: "<<meters<<endl;
    cout<<"Your Height in centimeters =: "<<cent<<endl;
}
void metersAndCentTofeetAndInches(void)
{
    float  inches, feet, meters, cent;
    cout<<"Enter Height in centimeters:\t";
    cin>>cent;
    meters = cent * 0.01;
    inches = cent / 2.54;
    feet = inches / 12;    
    cout<<"Your Height in inches =: "<<inches<<endl;
    cout<<"Your Height in meters =: "<<meters<<endl;
    cout<<"Your Height in Feet =: "<<feet<<endl;

}
