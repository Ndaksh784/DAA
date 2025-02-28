#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }

    }
    int pi=s+cnt;
    swap(arr[pi],arr[s]);
    int i=s;
    int j=e;
    while(i<pi && j>pi){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pi && j>pi){
            swap(arr[i++],arr[j--]);
        }
    }
    return pi;

}
void quicksort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(){
    int n;
    cout<<"Enter the elements"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
