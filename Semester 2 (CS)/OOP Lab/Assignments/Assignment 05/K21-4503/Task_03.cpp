#include <iostream>
#include <string>

using namespace std;

class TicTacToe
{
	private:
		char table[3][3];
	
	public:
		TicTacToe(void){ // CONSTRUCTOR
			int n = 3;
			
			for(int i = 0; i < 3; i++)
			{
				for(int j = 0; j < 3; j++)
				{
					table[i][j] = '0' + n;
					n++;
				}
			}
		}
		// DISPLAY FUNCTION
		void printTable(void){	
			for(int i = 0; i < 3; i++)
			{
				cout << endl;
				
				for(int j = 0; j < 3; j++)
				{
					if(table[i][j] == '1' || table[i][j] == '2')
						cout << (char)(table[i][j]) << "   ";
					
					else
						cout << "0" << "   ";
				}
				
				cout << endl;
			}
		}
		
		void playerMove(char move, char player){
			move += 2;
			
			bool wrongMove = true;
			
			for(int i = 0; i < 3; i++)
			{
				for(int j = 0; j < 3; j++)
				{
					if(table[i][j] == (char)move) 
					{ 
						table[i][j] = player;
						wrongMove = false;
					}
				}
			}
			
			if(wrongMove == true)
				cout << endl << "Invalid INPUT! Next player gets the move." << endl;
		}
		
		void checkWinner(char player, bool gameOver){
			for(int i = 0; i < 3; i++)
			{
				if(table[i][0] == table[i][1] && table[i][1] == table[i][2])
					gameOver = true;
			}
			
			for(int i = 0; i < 3; i++)
			{
				if(table[0][i] == table[1][i] && table[1][i] == table[2][i]) 
					gameOver = true;
			}
		
			if(table[0][0] == table[1][1] && table[1][1] == table[2][2]) 
				gameOver = true;
			
			if(table[0][2] == table[1][1] && table[1][1] == table[2][0])
				gameOver = true;
			
			if(gameOver == true)
			{
				printTable();
				cout << endl << "Player " << player << " wins!" << endl;
				exit(1);
			}
		}
		
		void checkDraw(void){
			int n = 1, counter = 0;
			
			for(int i = 0; i < 3; i++)
			{
				for(int j = 0; j < 3; j++)
				{
					if(table[i][j] == '0' + n)
					{
						counter++;
						n++;
					}
				}
			}
			
			if(counter < 1) 
			{
				printTable();
				cout << endl << "Draw!" << endl;
				exit(1);
			}
		}		
}; // END OF CLASS
 
int main()
{
	char player = '2', move;
	TicTacToe User1;

	do
	{
		if(player == '1')
			player = '2';
			
		else
			player = '1';
			
		User1.printTable();
		
		cout << endl << "\t  Player # 0" << player << endl;
		cout << "  (Move: 1 - 9 , Exit: E or e)   ";
		cin >> move;
		cout << endl;
		
		if(move == 'E' || move == 'e')		exit(1);
		
		User1.playerMove(move, player);
		
		User1.checkWinner(player, false);
		
		User1.checkDraw();
		
	}while(true);
	
	return 0;
}
