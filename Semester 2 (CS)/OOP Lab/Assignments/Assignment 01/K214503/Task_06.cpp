#include<iostream>
using namespace std;
int main()
{
	int N;
	
	cout << "Enter number of elements: ";
	cin >> N;
	
	char array[N];
	
	cout << "\nEnter Characters: " << endl;
	
	for(int i = 0; i < N; i++)
		{
			cin >> array[i];
		}
		
	cout << "\n(a) By using pointer soring  the elements in array." << endl;
	
	cout << "\nUnorted array: ";
    
    for(int i = 0; i < N; i++)
    {
    	cout << array[i] << "  ";
	}
	
	char temp[N], x;
	
	for(int i = 0; i < N; i++)
	{
		temp[i] = array[i];
	}
// USING BUBBLE SORT	
	for(int i = 0; i<N - 1 ; i++)
    {
        for(int j = 0; j < (N - i - 1); j++)
        {
            if(temp[j] > temp[j+1])
            {
                x = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = x;
            }
        }
    }
    
    cout << "\nSorted array: ";
    
    for(int i = 0; i < N; i++)
    {
    	cout << temp[i] << "  ";
	}
	
	cout << "\n\n(b) By using pointer calculating the frequency of each character in array.\n" << endl;
	
	for(int i = 0; i < N; i++)
    {
    	int f = 1;
    	
        for(int j = i + 1; j < N + 1; j++)
        {
        	if(temp[i] == temp[j])
        	{
        		f++;
			}
        }
        
        cout << "Frequency of " << temp[i] << ": " << f << endl;
        
        i += f - 1;
    }
    
    cout << "\n(c) By using pointer converting the character in UPPER CASE.\n" << endl;
    
    for (int i = 0; i < N; i++)
        {
            if (array[i] >= 97 && array[i] <= 122)
            {
                array[i] -= 32;
            }
        }
        
    cout << "Upper Case Array: ";
        
    for (int i = 0; i < N; i++)
		{
            cout << array[i] << " ";
        }
        
    cout << endl << endl << "(d) By using pointer calculating no of words in array.\n" << endl;
    
    int t = 1;
    
    for(int i = 0; i < N; i++)
    {
    	if(array[i] == '_')
    	{
    		t++;
		}
	}
	
	cout << "Word count: " << t;
	
    return 0;
}

