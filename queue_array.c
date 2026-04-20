#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = x;
        printf("Enqueued: %d\n", x);
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    dequeue();
    dequeue();
    return 0;
}