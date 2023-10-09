#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
  // Implement your code below...

	    assert(numbers != NULL);
    assert(size > 0);

    int max_value = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }

    return max_value;



}

#ifndef TEST

int main() {

	return 0;
}

#endif
