#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void removeEven(int arr[], int& size) {
    int j = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            arr[j++] = arr[i];
        }
    }
    size = j;
}

void removeOdd(int arr[], int& size) {
    int j = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            arr[j++] = arr[i];
        }
    }
    size = j;
}

int main() {
    int M;
    cout << "Enter the number of elements in the array: ";
    cin >> M;

    int* arr = new int[M];
    cout << "Enter " << M << " elements of the array: ";
    for (int i = 0; i < M; ++i) {
        cin >> arr[i];
    }

    int choice;
    cout << "Choose an option: \n1. Remove even numbers\n2. Remove odd numbers\n";
    cin >> choice;

    switch (choice) {
    case 1:
        removeEven(arr, M);
        cout << "Array after removing even numbers: ";
        printArray(arr, M);
        break;
    case 2:
        removeOdd(arr, M);
        cout << "Array after removing odd numbers: ";
        printArray(arr, M);
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    delete[] arr;
    return 0;
}
