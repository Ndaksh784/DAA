#include<iostream>
using namespace std;

void Commonelements(int arr1[], int m, int arr2[], int n, int result[], int &resSize) {
    int i = 0, j = 0;
    resSize = 0;
    cout << "Common elements: ";
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            cout << arr1[i] << " ";
            result[resSize++] = arr1[i];
            i++;
            j++;
        }
    }
    cout << endl;
}

int main() {
    int m, n;
    cout << "Enter size of first array: ";
    cin >> m;
    int arr1[m];
    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < m; i++) cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n;
    int arr2[n];
    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < n; i++) cin >> arr2[i];

    int result[min(m, n)], resSize;
    Commonelements(arr1, m, arr2, n, result, resSize);

    cout << "Common elements stored in new array: ";
    for (int i = 0; i < resSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
