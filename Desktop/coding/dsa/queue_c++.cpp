#include <iostream>
class Queue {
private:
    int front, rear, capacity;
    int* array;
public:
    Queue(int size) {
        capacity = size;
        front = rear = -1;
        array = new int[capacity];
    }

    ~Queue() {
        delete[] array;
    }

    bool is_empty() {
        return (front == -1);
    }

    bool is_full() {
        return ((rear + 1) % capacity == front);
    }

    void enqueue(int item) {
        if (is_full()) {
            std::cout << "Queue is full. Cannot enqueue element." << std::endl;
        } else {
            if (is_empty()) {
                front = rear = 0;
            } else {
                rear = (rear + 1) % capacity;
            }
            array[rear] = item;
            std::cout << "Enqueued " << item << " to the queue." << std::endl;
        }
    }

    int dequeue() {
        if (is_empty()) {
            std::cout << "Queue is empty. Cannot dequeue element." << std::endl;
            return -1;
        } else {
            int item = array[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % capacity;
            }
            std::cout << "Dequeued " << item << " from the queue." << std::endl;
            return item;
        }
    }

    int peek() {
        if (is_empty()) {
            std::cout << "Queue is empty." << std::endl;
            return -1;
        } else {
            return array[front];
        }
    }

    void display() {
        if (is_empty()) {
            std::cout << "Queue is empty." << std::endl;
        } else {
            std::cout << "Queue elements: ";
            int i = front;
            do {
                std::cout << array[i] << " ";
                i = (i + 1) % capacity;
            } while (i != (rear + 1) % capacity);
            std::cout << std::endl;
        }
    }
};

int main() {
    Queue queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.display();

    int item = queue.dequeue();
    if (item != -1) {
        std::cout << "Front element: " << item << std::endl;
    }

    queue.display();

    return 0;
}
