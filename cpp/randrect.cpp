#include <iostream>
#include <vector>
#include <cstdlib>
#include<time.h>
using namespace std;

void generateMatrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
    
    // Generate random rectangle dimensions and position
    int rectHeight = rand() % (rows / 2) + 1;
    int rectWidth = rand() % (cols / 2) + 1;
    int startX = rand() % (rows - rectHeight);
    int startY = rand() % (cols - rectWidth);
    
    // Fill the rectangle with 1s
    for (int i = startX; i < startX + rectHeight; i++) {
        for (int j = startY; j < startY + rectWidth; j++) {
            matrix[i][j] = 1;
        }
    }
    
    // Print the matrix
    cout << "Generated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " \t";
        }
        cout << endl;
    }
}

int main() {
    int rows = 64, cols = 64;
    srand(time(0)); // Seed for random number generation
    generateMatrix(rows, cols);
    return 0;
}
