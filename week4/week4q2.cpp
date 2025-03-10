#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int comparisons = 0, swaps = 0;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    swaps++;
}

int partition(int arr[], int low, int high) {
    srand(time(0));
    int random = low + rand() % (high - low + 1);
    swap(arr[random], arr[high]);
    int pivot = arr[high];
    int i = low - 1;
    
    for(int j = low; j <= high - 1; j++) {
        comparisons++;
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    quicksort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "Comparisons: " << comparisons<<endl;
    cout << "Swaps: " << swaps << endl;
    
    return 0;
}