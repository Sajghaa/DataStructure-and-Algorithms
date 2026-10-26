#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) return NULL;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Node* insertAtHead(Node* head, int value) {
    Node* newNode = createNode(value);
    if (newNode == NULL) return head;

    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }


    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;     
    newNode->next = head;     
    return newNode;           
}


Node* insertAtTail(Node* head, int value) {
    Node* newNode = createNode(value);
    if (newNode == NULL) return head;

    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;     
    newNode->next = head;     
    return head;
}


Node* deleteNode(Node* head, int target) {
    if (head == NULL) return NULL;

    if (head->data == target) {
 
        if (head->next == head) {
            free(head);
            return NULL;
        }
        
        Node* tail = head;
        while (tail->next != head) {
            tail = tail->next;
        }
        
        Node* temp = head;
        head = head->next;    
        tail->next = head;   
        free(temp);
        return head;
    }


    Node* current = head;
    while (current->next != head && current->next->data != target) {
        current = current->next;
    }

    if (current->next->data == target) {
        Node* targetNode = current->next;
        current->next = targetNode->next;
        free(targetNode);
    }

    return head;
}

void printList(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    
    printf("(Back to %d)\n", head->data);
}

int main() {
    Node* head = NULL;
    head = insertAtTail(head, 10);
    head = insertAtTail(head, 20);
    head = insertAtHead(head, 5);
    
    printf("Circular List: ");
    printList(head);
    
    printf("Deleting 20: ");
    head = deleteNode(head, 20);
    printList(head);
    
    return 0;
}