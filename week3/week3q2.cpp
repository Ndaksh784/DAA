#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>& arr, int n, int& comparisons, int& swaps) {
    comparisons = 0;
    swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swaps++;
        }
    }
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
        int comparisons, swaps;
        selectionsort(arr, n, comparisons, swaps);
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl << "Comparisons: " << comparisons << endl;
        cout << "Swaps: " << swaps << endl;
    }
    return 0;
}
