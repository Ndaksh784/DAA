#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool jumpSearch(vector<int>& arr, int key, int &comparisons) {
    comparisons = 0;
    int n = arr.size();
    int jump = 2, prev = 0;
    
   
    while (prev < n && arr[prev] < key) {
        comparisons++;
        prev += jump;
    }
    
    
    int start = max(0, prev - jump);
    for (int i = start; i < n && i <= prev; i++) {
        comparisons++;
        if (arr[i] == key)
            return true;
    }
    return false;
}
SSint main() {
    int n, key, comparisons;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    bool found = jumpSearch(arr, key, comparisons);
    if(found) {
        cout<<"Key is present in the array"<<endl;
    }
    else{
        cout<< "Key is not present in the array" << endl;
    }
    cout << "Total comparisons made" << comparisons << endl;
    return 0;
}
