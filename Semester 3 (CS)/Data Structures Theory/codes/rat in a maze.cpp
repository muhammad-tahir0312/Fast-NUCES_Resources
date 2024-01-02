#include<iostream>
#define A 4
using namespace std;

display(int maze[A][A])
{
	cout << endl;
	for(int i=0;i<A;i++)
	{
		for(int j=0;j<A;j++)
		{
			cout << maze[i][j] << " " ;
		}
		cout << endl;
	}
}

bool is_Safe(int maze[A][A] , int x, int y)
{
	if(x>=0 && x<A && y>=0 && y<A && maze[x][y]==1 )
	{
		return true;
	}
	return false;
}

bool solution_of_maze(int maze[A][A], int x, int y ,int sol_maze[A][A])
{
	if(x == A - 1 && y == A - 1 && maze[x][y]==1)
	{
		sol_maze[x][y]=1;
		return true;
	}
    if (is_Safe(maze, x, y)) {
    	
        if (sol_maze[x][y] == 1)
            return false;
            
        sol_maze[x][y] = 1;
        
        if (solution_of_maze(maze, x + 1, y, sol_maze))
            return true;
            
        if (solution_of_maze(maze, x, y + 1, sol_maze))
            return true;
            
        sol_maze[x][y] = 0;
        
        return false;
    }
	return false;
}

bool solution_maze(int maze[A][A])
{
	int sol_maze[A][A]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	if(solution_of_maze(maze,0,0,sol_maze))
	{
		cout << "Solution exist. ";
		return true;
		display(sol_maze);
	}
	else
		cout << "Solution D N exist. ";

	return false;
}

int main()
{
	int maze[A][A]={{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
	display(maze);
	solution_maze(maze);
	return 0;
}
