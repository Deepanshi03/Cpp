#include<iostream>
#include<vector>
using namespace std;
int size,element;

 void display(vector<int> v){
    cout<<"Vector elements are:"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<endl;
        cout<<v.at(i)<<endl;
    }
 }

int menu(){
    int choice;
    cout<<"*******************************************"<<endl;
    cout<<"Menu Bar:"<<endl;
    cout<<"Press 1 to Print the Vector"<<endl;
    cout<<"Press 2 to see the Size of the Vector"<<endl;
    cout<<"Press 3 to see the Capacity of the Vector"<<endl;
    cout<<"Press 4 to enter a new Element at the end of the Vector"<<endl;
    cout<<"Press 5 to see an Element at a perticular index"<<endl;
    cout<<"Press 6 to Popout the Last element of the Vector"<<endl;
    cout<<"Press 7 to see the 1st Element of the Vector"<<endl;
    cout<<"Press 8 to see the Last Element of the Vector"<<endl;
    cout<<"Press 9 to Clear the Vector"<<endl;
    cout<<"******************************************"<<endl;
    cout<<"Enter your Choice"<<endl;
    cin>>choice;
    return choice;
}
void work(vector<int> v1,int choice){
    switch (choice)
    {
    case 1:
        display(v1);
        break;
    case 2:
        cout<<"Size of the vector is: "<<v1.size()<<endl;
        break;
    case 3:
        cout<<"Capacity of the vector is: "<<v1.capacity()<<endl;
        break;
    case 4:
        int neww;
        cout<<"Enter the new element to be Inserted at the end"<<endl;
        cin>>neww;
        v1.push_back(neww);
        display(v1);
        cout<<v1.size()<<endl;
        cout<<v1.capacity()<<endl;
        break;
    case 5:
        int index;
        cout<<"Enter the index number of the Element"<<endl;
        cin>>index;
        cout<<v1.at(index)<<endl;
        break;
    case 6:
        v1.pop_back();
        display(v1);
        break;
    case 7:
        cout<<v1.front()<<endl;
        break;
    case 8:
        cout<<v1.back()<<endl;
        break;
    case 9:
        v1.clear();
        display(v1);
        break;
    
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }
}
int main()
{
    vector<int> v1;
    cout<<"Enter the size of the vector: "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element "<<i+1<<": "<<endl;
        cin>>element;
        v1.push_back(element);
    }
    cout<<"Do you want to continue? (yes/no)"<<endl;
    string conti;
    cin>>conti;
    while (conti=="yes")
    {
        int choice=menu();
        work(v1,choice);
        cout<<"Do you want to continue? (yes/no)"<<endl;
        cin>>conti;
    }    
}  




































// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v){
//     cout<<"Vector elements are:"<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         // cout<<v[i]<<endl;
//         cout<<v.at(i)<<endl;
//     }
//     cout<<v.capacity()<<endl;
// }
// int main()
// {
//     vector<int> vec1;
//     vector<int> vec2(4);
//     // 4 element vector
//     vector<int> vec3(vec2);
//     // Same size as vector 2
//     vector<int> vec4(6,3);
//     // 6 element vector, where each element is 3
//     int element,size;
//     cout<<"Enter the size of the vector"<<endl;
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>element;
//         vec1.push_back(element);
//     }
//     // vec1.pop_back();
//     // display(vec1);
//     vector<int>::iterator iter=vec1.begin();
//     // iterator is a object but works like a pointer
//     vec1.insert(iter+1,999);
//     display(vec1);
//     return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v){
//     cout<<"Vector elements are:"<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         // cout<<v[i]<<endl;
//         cout<<v.at(i)<<endl;
//     }
// }
// int main()
// {
//     vector<int> vec(5);

//     vec.push_back(1);
//     cout<<vec.size()<<endl;
//     vec.push_back(2);
//     cout<<vec.size()<<endl;
//     vec.push_back(3);
//     cout<<vec.size()<<endl;
//     vec.push_back(4);
//     cout<<vec.size()<<endl;
//     vec.push_back(5);
//     cout<<vec.size()<<endl;
//     vec.push_back(6);
//     cout<<vec.size()<<endl;
//     vec.push_back(7);
//     cout<<vec.size()<<endl;
//     display(vec);
//     return 0;
// }