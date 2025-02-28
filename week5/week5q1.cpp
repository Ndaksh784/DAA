#include<iostream>
#include<string>
using namespace std;

char findmaxoccurrence(char arr[], int n) {
    int count[26] = {0};
    for(int i = 0; i < n; i++) {
        count[arr[i] - 'a']++;
    }

    int maxCount = 0;
    char result = 'a';
    for(int i = 0; i < 26; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            result = i + 'a';
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter number of alphabets: ";
    cin >> n;
    char arr[n];
    cout << "Enter alphabets: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    char result = findmaxoccurrence(arr, n);
    cout << "Alphabet with maximum occurrences: " << result << endl;
    
    return 0;
}
