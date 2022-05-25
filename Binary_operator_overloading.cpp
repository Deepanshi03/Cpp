// Operator Overloading is an example of compilation
// time polymorphism
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
    complex operator+(complex c2){
        complex obj;
        obj.a=a+c2.a;
        obj.b=b+c2.b;
        return(obj);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata(3,4);
    c1.putdata();

    c2.getdata(5,6);
    c2.putdata();

    // c3=c1.operator+(c2);  we can use "operator" keyword to use signs as names
    c3=c1+c2;
    // now +c2 is like c1.+(c2)  like c1.summ(c2)
    c3.putdata();
    return 0;
}