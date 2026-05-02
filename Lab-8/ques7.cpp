#include <iostream>
using namespace std;
template <class T>
class Queue {
private:
    T arr[5];    
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }
    void enqueue(T value) {
        if (rear == 4) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[++rear] = value;
        cout << value << " inserted into queue\n";
    }
    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front++] << " removed from queue\n";
    }
    void display() {
        if (front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
