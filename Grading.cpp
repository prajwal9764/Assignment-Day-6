#include<iostream>
using namespace std;
int main()
{
    double grade;
    cout<<endl<<" Enter your percentage : ";
    cin>>grade;
    
    {   if ((grade>90)&&(grade<100))
        cout<<endl<<"Your grade is: O";
        else if((grade>80)&&(grade<90))
        cout<<endl<<"Your grade is : A";
        else if ((grade>70)&&(grade<80))
        cout<<endl<<"Your grade is: B";
        else if ((grade>60)&&(grade<70))
        cout<<endl<<"Your grade is: C";
        else if ((grade>50)&&(grade<60))
        cout<<endl<<"Your grade is: D";
        else if ((grade>40)&&(grade<50))
        cout<<endl<<"Your grade is: E";
        else if ((grade>30)&&(grade<40))
        cout<<endl<<"Fail";
    }

    return 0;
}
