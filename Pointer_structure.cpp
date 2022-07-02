#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breath;
};
struct Rectangle* func(){
    struct Rectangle* p=new Rectangle;
    p->length=20;
    p->breath=40;
    return p;
}
int main()
{
    struct Rectangle* ptr=func();
    cout<<ptr->length<<endl<<ptr->breath<<endl;
    return 0;
}