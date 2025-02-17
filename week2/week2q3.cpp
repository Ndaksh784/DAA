#include <iostream>
#include <algorithm>
using namespace std;

void countPairsWithDiff(int arr[], int n, int K) {
    sort(arr, arr + n);
    int i = 0, j = n - 1, count = 0;

    while (i < j) {
        int diff = arr[j] - arr[i];

        if (diff == K)
         {
            count++;
            i++;
            j--;
        } 
        else if (diff > K) 
        {
            j--;
        } 
        else
         {
            i++;
        }
    }

    cout << count << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, K;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cin >> K;
        countPairsWithDiff(arr, n, K);
    }
    return 0;
}
