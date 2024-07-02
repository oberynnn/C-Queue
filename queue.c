#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "queue.h"

#define DEFAULT_CAPACITY 100
#define MAX_LEN 4096

queue* create_queue(void) {
    queue* new;
    int i;

    new = malloc(sizeof(queue));
    for (i = 0; i < DEFAULT_CAPACITY; i++) {
        new->values[i] = malloc(sizeof(char) * MAX_LEN);
    }
    new->count = 0;

    return new;
}

int get_count(queue* my_queue) {
    return my_queue->count;
}

void display(queue* my_queue) {
    int i;

    for (i = 0; i < my_queue->count; i++) {
        printf("%s\n", my_queue->values[i]);
    }
}

bool is_empty(queue* my_queue) {
    return my_queue->count == 0;
}

bool is_full(queue* my_queue) {
    return my_queue->count == DEFAULT_CAPACITY;
}