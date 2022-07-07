#include<iostream>
using namespace std;

//Sum of First n Natural Numbers;
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;  
    }
}
int main()
{
    int n=5;
    cout<<sum(n)<<endl;
    return 0;
}
