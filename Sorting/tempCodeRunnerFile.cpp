#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=i-1;j<=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "
    }
    return 0;
}