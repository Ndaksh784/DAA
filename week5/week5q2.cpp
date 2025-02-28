#include<iostream>
using namespace std;

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        int pi = i + 1;
        
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

bool Pairsum(int arr[], int n, int key) {
    quicksort(arr, 0, n - 1);
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == key) return true;
        else if (sum < key) left++;
        else right--;
    }
    return false;
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter key element: ";
    cin >> key;

    if (Pairsum(arr, n, key)) {
        cout << "Pair with the given sum exists." << endl;
    } else {
        cout << "No such pair exists." << endl;
    }

    return 0;
}