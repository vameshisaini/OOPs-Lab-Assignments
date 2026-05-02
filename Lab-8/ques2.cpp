#include <iostream>
using namespace std;
template <class T>
T findMin(T arr[], int n) {
    T min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr1[] = {10, 5, 20, 3, 15};
    float arr2[] = {2.5, 1.2, 3.8, 0.9};
    cout << "Minimum in int array: " << findMin(arr1, 5) << endl;
    cout << "Minimum in float array: " << findMin(arr2, 4) << endl;
    return 0;
}
