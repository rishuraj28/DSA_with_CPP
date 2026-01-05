#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*first = NULL;


//Function to create a linked list
void create(int a[], int n) {
    struct Node* t, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    
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

//for counting the number of nodes in a linked list recursively
int count(struct Node* p) {
    if(p == NULL) {
        return 0;
    } else {
        return count(p->next) + 1;
    }
}

//For printing the sum of all nodes in a linked list iteratively
int sum(struct Node* p) {
    int s = 0;
    while(p != NULL) {
        s += p->data;
        p = p->next;
    }
    return s;
}

//for printing maximum element in a linked list recursively
int max(struct Node* p) 
{
    int m = -32768; //assuming linked list contains only positive numbers
    while(p != NULL) {
        if(p->data > m) {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

// void display(struct Node* p) {
//     while(p != NULL) {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

int main() {\
    struct Node* temp;
    int n = 5;
    int a[] = {3, 5, 7, 10, 15};
    create(a, n);
    display(first);
    printf("\nNumber of nodes in the linked list: %d\n", count(first));
    printf("Sum of all nodes in the linked list: %d\n", sum(first));
    printf("Maximum element in the linked list: %d\n", max(first));

    return 0;
}