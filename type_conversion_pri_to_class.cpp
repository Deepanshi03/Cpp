#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){}
    complex(int x){
        // Here x is passed as an argument
        a=x;
        b=0;
    }
    void getdata(int a1, int b1){
        a=a1;
        b=b1;
    }
    void putdata(){
        cout<<a<<"+i"<<b<<endl;
    }
};
int main()
{
    int x=5;
    // complex c1=x; Cant assign  a premitive type to a class type.
    //we need a constructor for this
    complex c1=x;
    // complex c1(x);
    c1.putdata();
    return 0;
}


