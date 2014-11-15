/*
 * delete_elements.cpp
 *
 *  Created on: Nov 9, 2014
 *      Author: vineghlinux
 */
#include <iostream>

using namespace std;

typedef struct llist
{
    int data;
    struct llist* next;
} llist;

/* This function takes an integer and head pointer of the unordered list with
duplicates and deletes all occurence of it from the list. It returns pointer to
the head after completion. */

llist* deleteNodesWithValue(int value, llist* head)
{
    /*If list is NULL we don't have anything to do*/
    if (!head)
    {
        return head;
    }

    /* Declare a previous and current pointer to take care of the previous
    and current node in the list*/
    llist* prev = NULL;
    llist* current = head;

    /*Take care of the case where leading nodes are value to be deleted*/
    while (current && current->data == value)
    {
        prev = current;
        current = current->next;
        head = current;
        delete prev;
    }
    /*At the end of above loop our new head is known which makes things simpler*/
    /*Now we traverse the list from left to right*/
    while (current)
    {
        if (current->data == value)
        {
        	cout << prev->data << endl;
            prev->next = current->next;
            delete current;
            current = prev->next;
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
    return head;
}

void printList(llist* head)
{
    while (head)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

/*int main()
{
   cout << "Hello World" << endl;
   int arr[] = { 2 ,2 ,2 ,2 ,2 ,2 ,2 ,2 ,2 ,2,2 ,2 ,1};
   int i = 0;
   int size = sizeof(arr)/sizeof(int);
   llist* head = NULL;
   llist* prev = NULL;
   while (i < size) {
       llist* newlist = new llist();
       newlist->data = arr[i];
       newlist->next = NULL;
       if (!head)
       {
           head = newlist;
       }
       if (prev)
       {
           prev->next = newlist;
           prev = newlist;
       }
       else
       {
           prev = newlist;
       }
       i++;
   }
   head = deleteNodesWithValue(2, head);
   printList(head);
   return 0;
}*/



