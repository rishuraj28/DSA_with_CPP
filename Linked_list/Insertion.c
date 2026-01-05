#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*first = NULL;

// void create(int a[], int n) {
//     struct Node* t, *last;
//     first = (struct Node*)malloc(sizeof(struct Node));
//     first->data = a[0];
//     first->next = NULL;
//     last = first;

//     for(int i = 1; i < n; i++) {
//         t = (struct Node*)malloc(sizeof(struct Node));
//         t->data = a[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

int count(struct Node* p) {
    if(p == NULL) {
        return 0;
    } else {
        return count(p->next) + 1;
    }
}
//insertion at any position
void insertAtPosition(struct Node* p, int index, int x) 
{
    struct Node* t;
    if(index < 0 || index > count(p)) {
        return;
    }
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    if(index == 0) {
        t->next = first;
        first = t;
    } else {
        for(int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
//insertion at  first position
// void insertFirst(struct Node* p, int x) {
//     struct Node* t = (struct Node*)malloc(sizeof(struct Node));
//     t->data = x;
//     t->next = first;
//     first = t;
// }

void display(struct Node* p) {
while(p != NULL) {
    printf("%d ", p->data);
    p = p->next;
    }
    printf("\n");
}



// void display(struct Node* p) {
//     if(p != NULL) {
//         display(p->next);
//         printf("%d ", p->data);
        
//     }
// }
int main() {
    insertAtPosition(first, 0, 2);
    insertAtPosition(first, 1, 3);
    insertAtPosition(first, 2, 4);
    insertAtPosition(first, 3, 5);
    
    display(first);

    return 0;
}