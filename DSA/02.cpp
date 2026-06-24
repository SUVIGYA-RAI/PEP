#include <bits/stdc++.h>
using namespace std;

int main(){

    // Linear Search 
    int arr[] = {3,5,1,12,36,32,4};
    int key=12;

    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==key) {
            idx = i;
            break;
        }
    }
    if(idx!=-1) cout<<"found "<<idx<< endl;
    else cout<<"not found"<<endl;
}