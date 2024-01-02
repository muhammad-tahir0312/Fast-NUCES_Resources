#include<iostream>
using namespace std;
int main()
{
	int a,t,x;
	float iq[10];
	
for(int i=0; i<=10; i++){
	cout << "\tStudent " << i + 1 << ": " << endl;
		
	cout << "How many questions were attempted: ";
	cin >> x; if(x>0 && x<=50) a=x; else continue;
		
	cout << "Enter time spent: ";
	cin >> x; if(x>0 && x<=600) t=x; else continue;
		
	iq[i] = 2 * (a + 0.5*t);
}

float avg=0, sum=0;
for(int i=0; i<=10; i++){	
	sum += iq[i] ;
}
avg = sum / 10 ;
	
	
	if(avg>0 && avg<10) cout << "POOR"<< endl;
	else if(avg>10 && avg<20) cout << "Average"<< endl;
	else if(avg>20 && avg<30) cout << "Intelligent"<< endl;
	else cout << "Invalid!!!"<< endl;
	
 	return 0 ;
}

