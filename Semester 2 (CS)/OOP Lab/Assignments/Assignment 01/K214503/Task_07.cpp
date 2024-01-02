#include<iostream>
using namespace std;
int main()
{
    float array[5][9] = {0}, (*ptr)[9] = array;

    for(int i = 0; i < 5; i++)
    {
        cout << "Student# " << i + 1 << endl;
        
        for (int j = 0; j < 6; j++)
        {
        	if(j == 0)
        	{
        		*(*(ptr + i) + j) = i + 1;
			}
        	
        	else
			{
				cout << "Enter marks " << j << ": ";
        		cin >> *(*(ptr + i) + j);
			}
        }
    }

    for (int i = 0; i < 5; i++)
    {
        *(*(ptr + i) + 6) = 500;
    }
    
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            *(*(ptr + i) + 7) += *(*(ptr + i) + j);
        }
    }
    
    for (int i = 0; i <= 5; i++)
    {
        *(*(ptr + i) + 8) = (*(*(ptr + i) + 7) / *(*(ptr + i) + 6)) * 100;
    }

    cout << "Std-id" << "\t" << "C1-Marks" << "\t" << "C2-Marks" << "\t" << "C3-Marks" << "\t" << "C4-Marks" << "\t" << "C5-Marks" << "\t" << "Total-Marks" << "\t" << "Obt-Marks" << "\t" << "Percentage" << endl;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << *(*(ptr + i) + j) << "\t";
        }
        
        cout << endl;
    }
    
    return 0;
}
