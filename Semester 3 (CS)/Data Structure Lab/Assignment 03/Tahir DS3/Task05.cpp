#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define size 4

using namespace std;

bool solver(int array[size][size], int x, int y, int sol[size][size]);

void show(int sol[size][size]){		// display array elements
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++)
			cout << " " << sol[i][j] << " ";		
		cout << endl;
	}
}

bool issafe(int array[size][size], int x, int y){	// check if the position is safe or not
	if(x >= 0 && x < size && y >= 0 && y < size && array[x][y] == 1)
		return true;
	else
		return false;
}

bool MazeSolve(int array[size][size]){	// main function to solve the maze
	int sol[size][size] = {{0, 0, 0, 0},
						   {0, 0, 0, 0},
					       {0, 0, 0, 0},
					       {0, 0, 0, 0}};
					
	if(solver(array, 0, 0, sol) == false){
		cout << endl << "No MazeSolve!";
		return false;
	}
	
	show(sol);
	
	return true;
}

bool solver(int array[size][size], int x, int y, int sol[size][size]){
	if(x == size - 1 && y == size - 1 && array[x][y] == 1){
		sol[x][y] = 1;
		
		return true;
	}

	if(issafe(array, x, y) == true){
		if(sol[x][y] == 1)
			return false;

		sol[x][y] = 1;

		if(solver(array, x + 1, y, sol) == true)
			return true;

		if(solver(array, x, y + 1, sol) == true)
			return true;

		sol[x][y] = 0;
		
		return false;
	}
	
	return false;
}

int TotalPaths(int array[][size]){	// calculate total number of paths
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(array[i][j] == 1)
				array[i][j] = 0;
			else
				array[i][j] = -1;
		}
	}
	
	if(array[0][0] == -1)
		return 0;

	for(int i = 0; i < size; i++){
		if(array[i][0] == 0)
			array[i][0] = 1;
		else
			break;
	}

	for(int i = 1; i < size; i++){
		if(array[0][i] == 0)
			array[0][i] = 1;			
		else
			break;
	}

	for(int i = 1; i < size; i++){
		for(int j = 1; j < size; j++){
			if(array[i][j] == -1)
				continue;

			if(array[i - 1][j] > 0)
				array[i][j] = (array[i][j] + array[i - 1][j]);

			if(array[i][j - 1] > 0)
				array[i][j] = (array[i][j] + array[i][j - 1]);
		}
	}

	return (array[size - 1][size - 1] > 0)? array[size - 1][size - 1] : 0;
}

int main(){
	int arr[size][size] = {{1, 0, 0, 0},
					         {1, 1, 1, 0},
					         {0, 1, 1, 0},
					         {1, 1, 1, 1}};
					
	MazeSolve(arr);
	
	cout << endl << TotalPaths(arr) << endl;
	
	return 0;
}
