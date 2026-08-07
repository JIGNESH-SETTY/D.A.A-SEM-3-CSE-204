#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int x;int j;
    int k;
    cout << "Enter the size of the array:-\n";
    cin >> x;
    int arr[1000] = {0};

    cout << "Enter the values in the array\n";
    for(j = 0;j<x;j++){
        cin >> arr[j];
    }

    cout << "Enter the target value\n";
    cin >> k;
    cout << "Linear search: " << linear_search(arr,x,k) << endl;
    return 0;
}
