#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        else if (arr[mid] < target) {
            low = mid + 1; 
        }
        else {
            high = mid - 1;
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
    cout << "binary search: " << binary_search(arr,0,x-1,k) << endl;
    return 0;
}
