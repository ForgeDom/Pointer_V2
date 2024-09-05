#include <iostream>
using namespace std;

bool isInArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return true;
        }
    }
    return false;
}

int createCommonArray(int A[], int M, int B[], int N, int C[]) {
    int k = 0; 

    for (int i = 0; i < M; i++) {
        if (isInArray(B, N, A[i]) && !isInArray(C, k, A[i])) {
            C[k++] = A[i];
        }
    }

    return k; 
}

int main() {
    int M, N;

    cout << "¬вед≥ть розм≥р масиву A: ";
    cin >> M;
    int* A = new int[M]; 

    cout << "¬вед≥ть елементи масиву A:\n";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "¬вед≥ть розм≥р масиву B: ";
    cin >> N;
    int* B = new int[N]; 

    cout << "¬вед≥ть елементи масиву B:\n";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int* C = new int[(M < N ? M : N)];

    int commonSize = createCommonArray(A, M, B, N, C);

    if (commonSize > 0) {
        cout << "—п≥льн≥ елементи без повторень:\n";
        for (int i = 0; i < commonSize; i++) {
            cout << C[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "—п≥льних елемент≥в немаЇ." << endl;
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
