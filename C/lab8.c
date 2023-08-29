#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void createNodeList(int n) {
    if (n % 2 == 0) {
        printf("Please retry with an odd number\n");
        return;
    }

    struct Node* newNode, *temp;
    int data;

    head = (struct Node*)malloc(sizeof(struct Node));

    if (head == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Input data for node 1 : ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;

    for (int i = 2; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }

        printf("Input data for node %d : ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }

    printf("Data entered in the list:\n");
}

void displayList() {
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

void MiddleNodeDeletion() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *slow_ptr = head, *fast_ptr = head, *prev;

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        fast_ptr = fast_ptr->next->next;
        prev = slow_ptr;
        slow_ptr = slow_ptr->next;
    }

    prev->next = slow_ptr->next;
    free(slow_ptr);
}

int main() {
    int n;

    printf("Input the number of nodes : ");
    scanf("%d", &n);

    while (n % 2 == 0) {
        printf("Please retry with an odd number\n");
        printf("Input the number of nodes : ");
        scanf("%d", &n);
    }

    createNodeList(n);

    printf("Data in the list after middle deletion:\n");
    MiddleNodeDeletion();
    displayList();

    return 0;
}
