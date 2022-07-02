#include<iostream>
using namespace std;
int n;
int* func(int n){
    int* p=new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i]=i+1;
    }
    return p;
}
int main(){
    int* ptr;
    int size=8;
    ptr=func(size);
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i]<<" ";
    }
}