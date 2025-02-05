#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int jumpSearch(vector<int>& arr, int key) {
    int n = arr.size();
    int m = sqrt(n);
    int s = 0;
    int e = s + m;

    while (e < n && arr[e - 1] < key) {
        s = e;
        e += m;
    }

    if (e > n) e = n;

    return binarySearch(arr, s, e - 1, key);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    int ans = jumpSearch(arr, key);

    if (ans != -1) {
        cout << "Key found at index " << ans << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}
