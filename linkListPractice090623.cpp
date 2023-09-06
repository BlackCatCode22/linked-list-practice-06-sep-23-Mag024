// Miguel Gomez

// September 9, 2023 1040

// 09/06/23 1040

//Linked List and Pointers practice

#include <iostream>

using namespace std;

//Nodepractice
struct myNode{
    public:
    int value;
    myNode* Next;
};

void printList(myNode* n){
    while(n!=NULL) {
        cout << n->value << "\n\n"<< endl;
        n=n->Next;
    }
}

int main()
{
    myNode* head = new myNode;

    myNode* second = new myNode;

    myNode* third = new myNode;

    head->value = 1;
    head->Next = second;

    second->value = 2;
    second ->Next =third;

    third->value = 3;
    third->Next = NULL;

    // Prints list
    printList(head);

    // Use a loop to create a link lists of 10 nodes

    // STEP 1 create a new node
    // STEP 2 fill the new node's data field
    // STEP 3 attach the new node to the end of the list
    // STEP 4 reposition list pointers

    // set up linked list

    // create head of new link list or copy and paste previous statement/code
     myNode* pHead;

     // create a helper pointer named current
     myNode* pCurrent;

     // helper pointer - pNext
      myNode* pNext;

      //creating new nodes
      pHead = new myNode();

      pHead->value = 1;
      pHead->Next = pCurrent;

      // create a second node
      pCurrent = new myNode;
      pCurrent->value = 2;
      pCurrent->Next = NULL;

      printList(pHead);

      //pNext = new myNode;
      //pNext->value = 3;
      //pNext->Next = NULL;

    for (int i = 0; i < 10; i++)




    return 0;
}
