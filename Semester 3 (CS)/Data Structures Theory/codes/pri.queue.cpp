#include<bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;
 
typedef struct Node
{
    int data;
    int priority;
 
    struct Node* next;
 
}Node;
 

Node* newNode(int d, int p)
{
    Node* temp = new Node;
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
 
    return temp;
}
 

int top(Node** head)
{
    return (*head)->data;
}
 

void dequeue(Node** head)
{
    Node* temp=*head;
    (*head)=(*head)->next;
    delete temp;
}
 

void enqueue(Node** head, int d, int p)
{
    Node* start=(*head);
 
    Node* temp = newNode(d, p);
 
    if ((*head)->priority > p)
    {
        temp->next = *head;
        (*head) = temp;
    }
    
    else
    {
        while (start->next != NULL && start->next->priority < p)
        {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }
}

int main()
{

    Node* pq = newNode(4, 3);
    enqueue(&pq, 5, 2);
    enqueue(&pq, 7, 4);
    enqueue(&pq, 10, 6);
    enqueue(&pq, 6, 1);
  	
  	cout << top(&pq) << endl;
  	dequeue(&pq);
  	cout << top(&pq) << endl;
  	dequeue(&pq);
  	cout << top(&pq) << endl;
  	dequeue(&pq);
  	cout << top(&pq) << endl;
  	dequeue(&pq);
  	cout << top(&pq) << endl;
  	
    return 0;
}
