#include<iostream>
using namespace std;

int findKthsmallest(int arr[], int n, int k) {
    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    int range = max - min + 1;
    int count[range] = {0};

    for(int i = 0; i < n; i++) {
        count[arr[i] - min]++;
    }

    int total = 0;
    for(int i = 0; i < range; i++) {
        total += count[i];
        if(total >= k) return i + min;
    }
    return -1; 
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter K value: ";
    cin >> k;

    if(k > 0 && k <= n) {
        int result = findKthsmallest(arr, n, k);
        cout  << k << "th smallest element is: " << result << endl;
    } else {
        cout << "Invalid K value" << endl;
    }

    return 0;
}
