#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    // Input dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    // Create 2D array
    int arr[rows][cols];
    
    // Input array elements
    cout << "Enter array elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Output array elements
    cout << "\nArray:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}

// Q1) finding target 
// Q2) Row wise sum
// Q3) print wave up to down down to up
// Q4) spiral print
// Q5) two leetcode problems 86 nd 43
// then after binary search lc 74 problem
// Q6) lc 240