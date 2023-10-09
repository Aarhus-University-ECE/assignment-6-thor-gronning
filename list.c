#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *l) {
assert(l != NULL);

    int count = 0;
    node* p = l->next; // Start from the first element (skip the empty one)

    while (p != NULL) {
        count++;
        p = p->next;
	return 0;
}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  node *p = l->next;
  while (p != NULL) {
    printf("%d, ", p->data);
	  p= p->next; // move to the next element in the list 
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list
assert(l != NULL);
    
    // Initialize largest_value with the minimum possible value
    int largest_value = INT_MIN;

    // Start from the first element (skip the empty one)
    node* p = l->next;

while (p != NULL){

	 if (p->data > largest_value) {
            largest_value = p->data; // Update largest_value if a larger element is found
        }
        p = p->next;
    }
	

  return largest_value;
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  // Show list here 1 -> 3 -> 2 -> NULL
  add(list, 2);
  // Show list here 1 -> 3 -> 2 -> 2 -> NULL

  return 0;
}

#endif
