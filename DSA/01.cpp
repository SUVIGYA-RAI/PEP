#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec1 = {2, 4, 5, 6, 8};

    vec1.push_back(10);
    for(int i:vec1){
        cout<<i<<" ";
    }   
    vec1.pop_back();      
    cout << "Size: " << vec1.size() << endl;
    for (int i : vec1) {
        cout << i << " ";
    }
    vec1.clear();
}