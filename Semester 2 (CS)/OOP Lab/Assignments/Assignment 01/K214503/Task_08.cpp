#include<iostream>
using namespace std;
int main()
{
	int arr[7][5] = {0}, sale;

    for(int i = 0; i < 30; i++)
    {
        cout << "Day # " << i + 1 << "\n\n";
        
        for(int j = 0; j < 4; j++)
        {
        	cout << "Employee ID: " << j + 1 << " \n" ;
        	
        	for(int k = 0; k < 6; k++)
        	{
        		cout << "Product ID: " << k + 1 << " \n";
        		cout << "Enter units sold: ";
		        cin >> sale;
		        
		        arr[k][j] += sale;
			}
			
			cout << endl;
		}
    }

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            arr[i][4] += arr[i][j];
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            arr[6][i] += arr[j][i];
        }
    }
    
    for(int i = 0; i < 4; i++)
    {
        arr[6][4] += arr[6][i];
    }

    cout << "\tEmployee-1\tEmployee-2\tEmployee-3\tEmployee-4\tProduct Total" << endl;
    
    for(int i = 0; i < 6; i++)
    {
        cout << "Product -" << i + 1 << "\t";
        
        for(int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t\t";
        }
        
        cout << arr[i][4] << endl;
    }
    
    cout << "Employee Total:\t";
    
    for(int i = 0; i < 5; i++)
    {
    	cout << arr[6][i] << "\t\t";
	}
    
    return 0;
}
