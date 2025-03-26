#include <reg51.h>

// Function prototypes
void addMatrices(int A[2][2], int B[2][2], int C[2][2]);

void main() {
    // Define the matrices
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2]; // Resultant matrix
    
    addMatrices(A, B, C); // Add the matrices
    
    while(1); // Infinite loop to keep the program running
}

void addMatrices(int A[2][2], int B[2][2], int C[2][2]) {
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j]; // Add corresponding elements
        }
    }
}