#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
        struct Node *next;
        };

        void insert(struct Node **head_ref, int new_data) {
            struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
                struct Node *temp = *head_ref;

                    new_node->data = new_data;
                        new_node->next = *head_ref;

                            if (*head_ref != NULL) {
                                    while (temp->next != *head_ref)
                                                temp = temp->next;
                                                        temp->next = new_node;
                                                            } else {
                                                                    new_node->next = new_node; // Creating a circular linked list with a single node
                                                                        }

                                                                            *head_ref = new_node;
                                                                            }

                                                                            void printList(struct Node *node) {
                                                                                struct Node *temp = node;
                                                                                    if (node != NULL) {
                                                                                            do {
                                                                                                        printf("%d ", temp->data);
                                                                                                                    temp = temp->next;
                                                                                                                            } while (temp != node);
                                                                                                                                    printf("\n");
                                                                                                                                        }
                                                                                                                                        }

                                                                                                                                        int main() {
                                                                                                                                            struct Node *head = NULL;

                                                                                                                                                insert(&head, 1);
                                                                                                                                                    insert(&head, 2);
                                                                                                                                                        insert(&head, 3);
                                                                                                                                                            insert(&head, 4);

                                                                                                                                                                printList(head);

                                                                                                                                                                    return 0;
                                                                                                                                                                    }