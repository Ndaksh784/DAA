#include<iostream>
#include<vector>
using namespace std;
bool binarysearch(vector<int>&arr,int key){
    int n=arr.size();
    int l=0;
    int r=n-1;
    int mid=l+(r-l)/2;
    while(l<=r){
        if(arr[mid]==key){
            return true;
        }
        if(arr[mid]>key){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        mid=l+(r-l)/2;
    }
    return false;
}
int lowerbound(vector<int>&arr,int key){
    int n=arr.size();
    int l=0;
    int r=n-1;
   
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if (arr[mid]==key){
            ans=mid;
            r=mid-1;
        }
        else if(arr[mid]>key){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    return ans;

    }

    int upperbound(vector<int>&arr,int key){
        int n=arr.size();
        int l=0;
        int r=n-1;
       
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if (arr[mid]==key){
                ans=mid;
                l=mid+1;
            }
            else if(arr[mid]>key){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        return ans;
    
        }
    
int main(){
    int n;
    int key;
    cout<<"ENter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++ ){
        int temp;
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched"<<endl;
    cin>>key;
    bool ans=binarysearch(arr,key);
    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    cout<<"Number of ocurrences"<<endl;
    int lower=lowerbound(arr,key);
    cout<<"Lower bound"<<endl;
    cout<<lower<<endl;
    int upper=upperbound(arr,key);
    cout<<upper<<endl;
    int count=upper-lower+1;
    cout<<count<<endl;
    return 0;
}