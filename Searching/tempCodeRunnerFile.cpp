#include<iostream>
#include<cmath>
#include<vector>
int jumpsearch(vector<int>arr,int key){
    int n=arr.size();
    int m=sqrt(n);
    int s=0;
    int e=s+m;
    while(e<n && arr[e-1]<key){
        s=e;
        e=e+m;
    }
    for (int i = s; i < e && i < n; i++) {  
        if (arr[i] == key) return i;
    }

    return -1; 
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to be searched"<<endl;
    cin>>key;
    int ans=jumpsearch(arr,key);
    if(ans!=-1){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;

    }

}