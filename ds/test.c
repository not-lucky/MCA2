// C program to delete a given key from
// linked list.
#include <stdio.h>
#include <stdlib.h>

/* structure for a node */
struct Node {
	int data;
	struct Node* next;
};

/* Function to insert a node at the beginning of
a Circular linked list */
void push(struct Node** head_ref, int data)
{
	// Create a new node and make head as next
	// of it.
	struct Node* ptr1 = (struct Node*)malloc(sizeof(struct Node));
	ptr1->data = data;
	ptr1->next = *head_ref;

	/* If linked list is not NULL then set the
	next of last node */
	if (*head_ref != NULL) {
		// Find the node before head and update
		// next of it.
		struct Node* temp = *head_ref;
		while (temp->next != *head_ref)
			temp = temp->next;
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1; /*For the first node */

	*head_ref = ptr1;
}

/* Function to print nodes in a given
circular linked list */
void printList(struct Node* head)
{
	struct Node* temp = head;
	if (head != NULL) {
		do {
			printf("%d ", temp->data);
			temp = temp->next;
		} while (temp != head);
	}

	printf("\n");
}

/* Function to delete a given node from the list */
struct Node * deleteNode(struct Node* head, int key)
{
	struct Node * curr = head, * prev;

  if (head == NULL) return head;

  // if in head and only 1 node
  if (key == head->data && head->next == head) {
    head = NULL;
    return head;
  }

  prev = head;
  curr = head->next;

  // starts from 2nd element
  while (curr != head) {
    if (curr->data == key) {
      prev->next = curr->next;
      free(curr);
      return head;
    }

    prev = curr;
    curr = curr->next;
  }

  if

  return head;


}

/* Driver code */
int main()
{
	/* Initialize lists as empty */
	struct Node* head = NULL;

	/* Created linked list will be 2->5->7->8->10 */
	push(&head, 2);
	push(&head, 5);
	push(&head, 7);
	push(&head, 8);
	push(&head, 10);

	printf("List Before Deletion: ");
	printList(head);

	printf("List After Deletion: ");
  head = deleteNode(head, 10);
  printList(head);

	return 0;
}
