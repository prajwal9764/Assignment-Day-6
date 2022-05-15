#include<iostream>
using namespace std;
int main()
{
    int length,width;
    cout<<endl<<" Enter the length: ";
    cin>>length;
    cout<<endl<<" Enter the width: ";
    cin>>width;
    cout<<endl<<" The area of rectangle is: "<< length * width;
    cout<<endl<<" The perimeter of rectangle: "<< 2* (length + width);
    {
        if(length!=width)
        cout<<endl<<"it is a rectangle";
        else
        cout<<endl<<"it is a square";

    }
    return 0;
}