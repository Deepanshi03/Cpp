#include<iostream>
using namespace std;
// int func(int n){
//     static int x=0;
//     if(n>0){
//         x++;
//         printf("%d\n",n);
//         return func(n-1)+x;   //Recursion using Static Variable
//     }
// }
// int main()
// {
//     cout<<func(5)<<endl;
//     return 0;
// }

int funcB(int);
int funcA(int n){
    if(n>0){
        cout<<n<<endl;
        funcB(n-1);
    }
}
int funcB(int n){             //Indirect Recursion
    if(n>1){
        cout<<n<<endl;
        funcA(n/2);
    }
}
int main(){
    cout<<funcA(20)<<endl;
}