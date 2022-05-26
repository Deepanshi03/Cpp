#include<iostream>
using namespace std;
class complex2{
    int a,b;
    public:
    void getdata(int a1, int b1){
        a=a1;
        b=b1;
    }
    void putdata(){
        cout<<a<<"+i"<<b<<endl;
    } 
    int getA(){
        return(a);
    }
    int getB(){
        return b;
    }
};      
class complex1{
    int a,b;
    public:
    complex1(){}
    // void getdata(int a1, int b1){
    //     a=a1;
    //     b=b1;
    // }
    void putdata(){
        cout<<a<<"+i"<<b<<endl;
    }
    complex1(complex2 obj){
        a=obj.getA();
        b=obj.getB();
    }
};
int main()
{
    complex1 c1;
    complex2 c2;
    c2.getdata(4,5);
    c2.putdata();

    c1=c2;
    // Here we are passing c2 as an argument to the constructor of c1
    c1.putdata();
    return 0;
}