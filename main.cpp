#include <iostream>
using namespace std;

bool isInArray(int arr[], int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

int removeDuplicates(int arr[], int size) {
    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (!isInArray(arr, newSize, arr[i])) {
            arr[newSize++] = arr[i];
        }
    }
    return newSize;
}

int main() {
    int M, N;

    cout << "Enter the number of elements in array A: ";
    cin >> M;
    int* A = new int[M];
    cout << "Enter " << M << " elements of array A: ";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "Enter the number of elements in array B: ";
    cin >> N;
    int* B = new int[N];
    cout << "Enter " << N << " elements of array B: ";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int* C = new int[M];
    int k = 0;

    for (int i = 0; i < M; ++i) {
        if (!isInArray(B, N, A[i]) && !isInArray(C, k, A[i])) {
            C[k++] = A[i];
        }
    }

    int newSize = removeDuplicates(C, k);

    cout << "Array C with unique elements from A not in B: ";
    for (int i = 0; i < newSize; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
