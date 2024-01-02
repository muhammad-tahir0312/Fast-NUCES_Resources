 #include<iostream>
 using namespace std;
double larger (double x, double y)
{
	double max;
	if (x >= y)
	max = x;
	else
	max = y;
	
	return max;
}

int main(){
	int one=8, two=88;
	cout << "The larger of 5 and 6 is " << larger (5, 6)<< endl; //Line 1
	cout << "The larger of " << one << " and " << two << " is " << larger (one, two) << endl; //Line 2
	cout << "The larger of " << one << " and 29 is " << larger (one, 29) << endl; //Line 3
	double maxNum = larger (38.45, 56.78);	
	cout << "The larger of 38.45 and 56.78 is " << maxNum << endl;
}

