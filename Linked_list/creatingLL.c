#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*first = NULL;


//Function to create a linked list
void create(int a[], int n)
 {
    struct Node* t, *last;//temporary and last pointer
    first = (struct Node*)malloc(sizeof(struct Node));//allocate memory for first node
    first->data = a[0];//assign data to first node
    first->next = NULL;//next of first node is NULL
    last = first;//last points to first node

//create rest of the nodes
    for(int i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

//for printing the linked list recursively
void display(struct Node* p) {
    if(p != NULL) {
        display(p->next);
        printf("%d ", p->data);
        
    }
}

// void display(struct Node* p) {
//     while(p != NULL) {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

int main() {
    struct Node* temp;  //temporary pointer
    int n = 5;    //size of the linked list
    int a[] = {3, 5, 7, 10, 15};  //array to create linked list from 
    create(a, n);   //create linked list
    display(first);

    return 0;
}