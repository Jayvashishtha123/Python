#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Queue {
    int front, rear;
    int capacity;
    int *array;
};

struct Queue* createQueue(int capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->array = (int*)malloc(capacity * sizeof(int));
    return queue;
}

int is_empty(struct Queue* queue) {
    return (queue->front == -1);
}

int is_full(struct Queue* queue) {
    return ((queue->rear + 1) % queue->capacity == queue->front);
}

void enqueue(struct Queue* queue, int item) {
    if (is_full(queue)) {
        printf("Queue is full. Cannot enqueue element.\n");
    } else {
        if (is_empty(queue)) {
            queue->front = queue->rear = 0;
        } else {
            queue->rear = (queue->rear + 1) % queue->capacity;
        }
        queue->array[queue->rear] = item;
        printf("Enqueued %d to the queue.\n", item);
    }
}

int dequeue(struct Queue* queue) {
    if (is_empty(queue)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    } else {
        int item = queue->array[queue->front];
        if (queue->front == queue->rear) {
            queue->front = queue->rear = -1;
        } else {
            queue->front = (queue->front + 1) % queue->capacity;
        }
        printf("Dequeued %d from the queue.\n", item);
        return item;
    }
}

int peek(struct Queue* queue) {
    if (is_empty(queue)) {
        printf("Queue is empty.\n");
        return -1;
    } else {
        return queue->array[queue->front];
    }
}

void display(struct Queue* queue) {
    if (is_empty(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        int i = queue->front;
        do {
            printf("%d ", queue->array[i]);
            i = (i + 1) % queue->capacity;
        } while (i != (queue->rear + 1) % queue->capacity);
        printf("\n");
    }
}

int main() {
    struct Queue* queue = createQueue(MAX_SIZE);

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    display(queue);

    int item = dequeue(queue);
    if (item != -1) {
        printf("Front element: %d\n", item);
    }

    display(queue);

    free(queue->array);
    free(queue);

    return 0;
}
