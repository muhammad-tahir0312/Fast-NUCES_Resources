#include<iostream>
using namespace std;
int main()
{
int a,b,maxx,m,n,i,j;

cout << "Enter Number of ROWS: " << endl;
cin >> a;
cout << "Enter Number of COL: " << endl;
cin >> b;

int item[a][b];
cout << "Enter Numbers: ";

for (i = 0; i < a; i++){
	for(j = 0; j< b; j++){
		cin >> item[i][j];
	}
}
maxx = item[0][0];
for (i = 0; i < a; i++){
	for(j = 0; j< b; j++){
		if( item[i][j] > maxx){
			maxx = item[i][j];
		}
	}
}

cout << "\nMax element = " << maxx << endl << endl;
for(m=0; m< a; m++){
	for(n=0; n< b; n++){
		cout << item[m][n] << "  ";
	}
	cout << endl;
}


return 0;
}
