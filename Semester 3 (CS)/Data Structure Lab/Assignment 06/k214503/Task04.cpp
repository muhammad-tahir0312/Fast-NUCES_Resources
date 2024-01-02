#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{
public:
   int data;
    Node *next, *prev;

   Node(){
       data = 0;
       next = NULL;
       prev = NULL;
   }

   Node(int a){
       data = a;
       next = NULL;
       prev = NULL;
   }
};

class CircularDoublyLinkedList
{
public:
   class Node *head;

   CircularDoublyLinkedList()
   {
       head = NULL;
   }

   CircularDoublyLinkedList(Node *n)
   {
       head = n;
   }
   void printlist(){
       Node *ptr = head;
       
       while (true){
           if (ptr->next != head){
               cout << endl << "Data: " << ptr->data;
               ptr = ptr->next;
           }     
           else{
               cout << endl << "Data: " << ptr->data;
               ptr = ptr->next;
               break;
           }
       }
   }

   void addNode(int d){
       Node *n = new Node();
       n->data = d;
       if (head == NULL){
           head = n;
           return;
       }   
       else if (head->next == NULL){
               head->next = n;
               head->prev = n;
               n->prev = head;
               n->next = head;
           }  
        else{
               Node *ptr = head;
               
               while (true){
                   if (ptr->next != head)
                       ptr = ptr->next;
                   else
                       break;
               }
               ptr->next = n;
               n->prev = ptr;
               n->next = head;
           }
   }
   
   void insertAfterData(int x, int y){
    Node *ptr = head;
       
       while (true){
           if (ptr->next != head){
               if (ptr->data == x)
                   break;
               ptr = ptr->next;
           }         
           else{
               if (ptr->data == x)
                   break;
               else{
                   cout << endl << "Data dosen't exist!";
                   return;
               }
           }
       }
		Node *n = new Node();
		n->data = y;
       	n->next = ptr->next;
       	ptr->next->prev = n;
       	ptr->next = n;
       	n->prev = ptr;
	}
};

int main(){
	
    CircularDoublyLinkedList mylist;
   
    mylist.addNode(10);
    mylist.addNode(20);
    mylist.addNode(30);
    mylist.addNode(40);
    mylist.insertAfterData(20, 25);
    mylist.printlist();

	return 1;
}

