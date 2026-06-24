#include <bits/stdc++.h>
using namespace std;
void func1(int num) {
    cout<<"Value of num is: "<<num<<endl;
}

void func2(int num){
    int ans=2*num;
    cout<< ans;
}

void doubleTheNumber(int num){
    num*=2;
    cout<<"inside the function: "<<num<<endl;
}
int main(){
    func1(10);
    func2(20);
    cout << endl;
    int a=10;
    int &b=a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;

    int num=10;
    doubleTheNumber(num);
    cout<<"outside the function: "<<num<<endl;

    int c=10;
    int *ptr=&c;
    cout<<c<<endl;
    cout<<&c<<endl;

    cout<<ptr<<endl;
    cout<<*ptr<<endl; //dereferencing pointer

    cout<<*(ptr+1)<<endl;
    cout<<*ptr+1<<endl;
}