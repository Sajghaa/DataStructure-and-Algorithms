#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* insertAtHead(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    
    if (head == NULL) {
        newNode->next = newNode; 
        return newNode;
    }
    
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    
    newNode->next = head;    
    temp->next = newNode;   
    return newNode;          
}

// 2. INSERT AT TAIL
Node* insertAtTail(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    
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
        while (tail->next != head) tail = tail->next;
        
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
        printf("Node %d deleted successfully.\n", target);
    } else {
        printf("Node %d not found.\n", target);
    }
    return head;
}

void printList(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = head;
    printf("List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(Back to head)\n");
}


int main() {
    Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\n--- CIRCULAR LINKED LIST MENU ---\n");
        printf("1. Insert at Head\n");
        printf("2. Insert at Tail\n");
        printf("3. Delete a Node\n");
        printf("4. Print List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at head: ");
                scanf("%d", &value);
                head = insertAtHead(head, value);
                break;
            case 2:
                printf("Enter value to insert at tail: ");
                scanf("%d", &value);
                head = insertAtTail(head, value);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                head = deleteNode(head, value);
                break;
            case 4:
                printList(head);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}