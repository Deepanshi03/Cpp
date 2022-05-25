#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void getdata(int a1, int b1){
        a=a1;
        b=b1;
    }
    void putdata(){
        cout<<a<<"+i"<<b<<endl;
    }
    complex operator-(){
        complex obj;
        obj.a=-a;
        obj.b=-b;
        return obj;
    }
};    
int main()
{
    complex c1;
    c1.getdata(3,4);
    c1.putdata();

    complex c2;
    c2=-c1;   
    // c2=c1.operator-();
    // No need to pass arguments in case of uniary op overloading 
    c2.putdata();
    return 0;
}