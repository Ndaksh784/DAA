#include <iostream>
using namespace std;

void findTriplet(int arr[], int n) {
    for (int k = n - 1; k >= 2; k--) { 
        int i = 0, j = k - 1;
        while (i < j) {
            int sum = arr[i] + arr[j];
            if (sum == arr[k]) 
            {
                cout << i << ", " << j << ", " << k << endl;
                return;
            } 
            else if (sum < arr[k])
             {
                i++; 
            } 
            else 
            {
                j--; 
            }
        }
    }
    cout << "No sequence found." << endl;
}

int main() {
    int T, n;
    cin >> T; 
    while (T>0) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        findTriplet(arr, n);
    }

    return 0;
}
