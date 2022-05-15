#include<iostream>
using namespace std;
int main()
{
    int attendance,a,b ;
    cout<<endl<<" Enter how many classes were held? : ";
    cin>>b;
    cout<<endl<<"How many classes did you attend? : ";
    cin>>a;

    attendance=((a*100)/b);
    cout<<endl<<"Your attendance percentage is : "<<attendance;

    {   cout<<endl<<"Enter your attendance percentage : ";
        cin>>attendance;
        if ((attendance>75)&&(attendance<100))
        cout<<endl<<"You are eligible to sit in the exam";
        else 
        cout<<endl<<"You are not eligible to sit in the exam";
       
    }

    return 0;
}
