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
    operator int(){
        // This is the casting operator function
        // Here operator is te keyword
        // int is the return type
        return(a);
        //Returned to x

    }
};
int main()
{
    complex c1;
    c1.getdata(5,8);
    c1.putdata();
    int x=c1;
    //It is like c1 is calling the functon operator
    // and operator method is returning a int value to be stored in x
    // complex x=c1; Cant assign  a class type to premitive type.
    // type casting will come here
    cout<<x<<endl;
    // return 0;
}