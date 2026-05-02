#include <iostream>
using namespace std;
template <class T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <class T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr1[] = {5, 2, 9, 1, 3};
    float arr2[] = {3.2, 1.5, 4.8, 2.1};
    bubbleSort(arr1, 5);
    cout << "Sorted int array: ";
    display(arr1, 5);
    bubbleSort(arr2, 4);
    cout << "Sorted float array: ";
    display(arr2, 4);
    return 0;
}
