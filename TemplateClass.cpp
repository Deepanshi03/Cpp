#include<iostream>
using namespace std;
template<class T>
class calculator{
    T a;
    T b;
    public:
    calculator(){
    a=0;
    b=0;
    }
    void getdata(T a, T b){
        this->a=a;
        this->b=b;
    }
    void showdata(){
        T add=a+b;
        T sub=a-b;
        T mul=a*b;
        cout<<"Addition Result= "<<add<<endl;
        cout<<"Subtraction Result= "<<sub<<endl;
        cout<<"Multiplication Result= "<<mul<<endl;
    }
    ~calculator(){
        cout<<"Constructor Destructed"<<endl;
    }
};
int main()
{
    calculator<int> c;
    c.getdata(3,4);
    c.showdata();
    return 0;
}

