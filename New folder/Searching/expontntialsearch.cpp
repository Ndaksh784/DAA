#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& nums, int first, int last, int target) {
    while (first <= last) {
        int mid = (last + first) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            first = mid + 1;
        else
            last = mid - 1;
    }
    return -1;
}

int exponentialSearch(const vector<int>& nums, int key) {
    int prev = 0, next = 1, n = nums.size(), power = 2;

    while (next < n && nums[next] <= key) {
        if (nums[next] == key)
            return next;
        prev = next + 1;
        power *= 2;
        next = min(prev + power - 1, n - 1);
    }
    
    return binarySearch(nums, prev, next, key);
}

int main() {
    int n, key, val;
    vector<int> nums;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }
    cout << "Enter the target key: ";
    cin >> key;

    int ans = exponentialSearch(nums, key);
    if (ans != -1)
        cout << "Element found at index: " << ans << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
