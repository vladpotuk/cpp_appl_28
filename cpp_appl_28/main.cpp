
#include <iostream>
//Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури). Необхідно створити третій масив мінімально можливого розміру, у якому потрібно зібрати елементи масиву A, що не включаються в масив B, без повторень.

int main() {
    system("chcp 1251");
    system("cls");
    int M, N;
    std::cout << "Введіть розмір масиву A (M): ";
    std::cin >> M;
    std::cout << "Введіть розмір масиву B (N): ";
    std::cin >> N;

    int A[100], B[100], C[100]; 

    std::cout << "Введіть елементи масиву A:" << std::endl;
    for (int i = 0; i < M; i++) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    std::cout << "Введіть елементи масиву B:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "B[" << i << "]: ";
        std::cin >> B[i];
    }

    
    int* ptrA = A;
    int* ptrB;
    int* ptrC = C;

    
    for (int i = 0; i < M; i++) {
        bool found = false;

        for (int j = 0; j < N; j++) {
            if (*ptrA == B[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            *ptrC = *ptrA;
            ptrC++;
        }
        ptrA++;
    }

    
    int sizeC = ptrC - C;

    
    std::cout << "Масив C з елементами з A, які не включаються в B:" << std::endl;
    for (int i = 0; i < sizeC; i++) {
        std::cout << "C[" << i << "]: " << C[i] << std::endl;
    }

    return 0;
}
