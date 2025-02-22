#include <iostream>
#include <vector>
using namespace std;

bool search(const vector<int>& arr, int key, int &comparisons) {
    comparisons = 0;
    for (int i = 0; i < arr.size(); i++) {
        comparisons++;
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main() {
    int n, key, comparisons;
    cout << "Enter number of elements"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " numbers "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter key to search"<<endl;
    cin >> key;
    bool found = search(arr, key, comparisons);
    if (found)
        cout << "Key " << key << " is present in the array" << endl;
    else
        cout << "Key " << key << " is not present in the array" << endl;
    cout << "Total comparisons made" << comparisons << endl;
    return 0;
}
