#include<iostream>
using namespace std;
int main(){
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
}