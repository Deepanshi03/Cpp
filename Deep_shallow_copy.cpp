#include <iostream>
using namespace std;
class complex
{
    int a, b;
    int *p;

public:
    complex()
    {
        a = 0;
        b = 0;
        p = new int;
    }
    void getdata(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        *p = c1;
    }
    void putdata()
    {
        cout << a << "+i" << b << "+j" << *p << endl;
    }
    complex(complex &obj) //Our own copy constructor
    //c1 goes as &obj, since c1 is copies to c2
    {
        //Deep copying
        a = obj.a;
        b = obj.b;
        p = new int;
        // new pointer for c2
        *p = *(obj.p);
        // p of c2 gets value of c1's p
        //therefore value updation at c1 won't affect c2 and vice versa
    }
    void update()
    {
        a = a + 1;
        b = b + 1;
        *p = *p + 1;
    }
};
int main()
{
    complex c1;
    c1.getdata(3, 4, 5);
    c1.putdata();

    complex c2 = c1; //Copy constructor
    c2.putdata();
    // This was doing shallow copy

    c1.update();
    c1.putdata();

    c2.putdata();
    return 0;
}
