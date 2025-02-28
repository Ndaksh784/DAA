#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>& arr, int n) {
    int comparisons = 0, shifts = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
            comparisons++;
        }
        if (j >= 0) {
            comparisons++;
        }
        arr[j + 1] = key;
        shifts++;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Comparisons: " << comparisons << endl;
    cout << "Shifts: " << shifts << endl;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        insertionsort(arr, n);
    }
    return 0;
}
