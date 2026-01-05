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

void display(struct Node* p) {
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
//serching an element in a linked list iteratively

// struct Node* search(struct Node* p, int key) {
//     printf("\nSearching for %d in the linked list.\n", key);
//     while(p != NULL) {
//         if(key == p->data) {
//             return p;
//         }
//         p = p->next;
//     }
//     return NULL;
// }

//serching an element in a linked list by moving to front
struct Node* search(struct Node* p, int key) {
struct Node* q = NULL;
printf("\nSearching for %d in the linked list.\n", key);
while(p != NULL) {
    if(key == p->data) {
        q->next = p->next;
        p->next = first;
        first = p;
    }
    q = p;
    p = p->next;
    }
    return NULL;
    }

int main() {\
    struct Node* temp;
    int n = 5;
    int a[] = {3, 5, 7, 10, 15};
    create(a, n);
    display(first);
    temp = search(first, 10);
    printf("Element found: %d\n", temp->data);
    return 0;
}