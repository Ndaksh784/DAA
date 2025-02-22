#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int>& arr, int key, int &comparisons) {
    int left = 0, right = arr.size() - 1;
    comparisons = 0;
    while (left <= right) {
        comparisons++;
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return true;
        else if (key < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return false;
}

int main() {
    int n, key, comparisons;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " sorted positive integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter key to search: ";
    cin >> key;
    bool found = binarySearch(arr, key, comparisons);
    if (found)
        cout << "Key " << key << " is present in the array." << endl;
    else
        cout << "Key " << key << " is not present in the array." << endl;
    cout << "Total comparisons made: " << comparisons << endl;
    return 0;
}
