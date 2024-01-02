#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int count();

void status(int);
void writer(char*);
void add_b();
void search_b(int);
void show_all();

struct library
{
	int serial_n;
	char title[50];
	char author[30];
	int price;
	int flag;
}geclib[50] = {
	1, "Pride and Prejudice", "Jane Austen", 150, 0,
	2, "Madame Bovary ", "Gustave Flaubert", 2650, 1,	//  0 IS AVAILABLE
	3, "War and Peace", "Tolstoy", 320, 0,				//  1 IS ISSUED
	4, "Madame Bovary ", "Jane Austen", 4850, 1,
	5, "The Two Towers", "Gustave Flaubert", 860, 1,
	6, "The Brothers Karamazov", "Jane Austen", 950, 0,
	7, "David Copperfield ", "Charles Dickens", 1550, 1
};

int main()
{
	int choice = 1, serial_n;
	char auth[30];
	while (choice != 7)
	{
		printf("\n 1 Add Book Information");
		printf("\n 2 Display Book Information");
		printf("\n 3 List all books of given author");
		printf("\n 4 List the title of specified book");
		printf("\n 5 List the counts of the books in library");
		printf("\n 6 List the books in order of accession number");
		printf("\n 7 Exit");
		printf("\n\n\tEnter you choice : ");
		scanf("%d", &choice);
		
	switch (choice)
		{
		case 1:
			add_b();
			getch();
			break;
		case 2:
			printf("\nEnter the serial number of the book: ");
			scanf("%d", &serial_n);
			status(serial_n);
			getch();
			break;
		case 3:
			while (getchar() != '\n');
			printf("Enter the name of the author (CASE SENSITIVE): ");
			gets(auth);
			writer(auth);
			getch();
			break;
		case 4:
			printf("\nEnter the serial number of book: ");
			scanf("%d", &serial_n);
			search_b(serial_n);
			getch();
			break;
		case 5:
			printf("\nTotal Number of books present: %d", count());
			getch();
			break;
		case 6:
			show_all();
			getch();
			break;
		case 7:
			exit(0);
		default:
			printf("\nInvalid Input, Try Again!!");
			getch();
		}
	}
	return 0;
}

int count()
{
	int i = 0;
	while (geclib[i].serial_n)
		i++;
	return i;
}

void status(int i)
{
	i--;
	printf("\n\n\n");
	printf("\nAccession Number : %d", geclib[i].serial_n);
	printf("\nTitle : %s", geclib[i].title);
	printf("\nAuthor : %s", geclib[i].author);
	printf("\nPrice : %d", geclib[i].price);
	
	if (geclib[i].flag)
		printf("\nStatus : Issued\n\n");
	else
		printf("\nStatus : Available\n\n");
}

void writer(char *author)
{
	int i = 0;
	printf("\nBooks of \"%s\" are following : \n\n", author);
	while (geclib[i].serial_n)
	{
		if (!(strcmp(author, geclib[i].author)))
			status(geclib[i].serial_n);
		i++;
	}
}

void add_b()
{
	int next = count();
	geclib[next].serial_n = next + 1;

	while (getchar() != '\n');
	printf("\nEnter the title of the book: ");
	gets(geclib[next].title);
	printf("\nEnter the author name of the book: ");
	gets(geclib[next].author);
	printf("\nEnter the price of the book: ");
	scanf("%d", &geclib[next].price);
	geclib[next].flag = 1;
}

void search_b(int serial_n)
{
	int i = 0;
	while (geclib[i].serial_n)
	{
		if (geclib[i].serial_n == serial_n)
		{
			printf("\n\nTitle of the book : %s\n", geclib[i].title);
			return;
		}
	}
	printf("No Book Found!\n");
}

void show_all()
{
	int i = 0;
	while (geclib[i].serial_n)
	{
		status(i + 1);
		i++;
	}
}
