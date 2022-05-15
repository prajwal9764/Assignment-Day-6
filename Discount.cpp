#include<iostream>
using namespace std;
int main()
{
    int BillAmount, DiscountedAmount;
    cout<<endl<<" Enter the bill amount : ";
    cin>>BillAmount;

    DiscountedAmount=BillAmount-((BillAmount*10)/100);
    
    {
        if(BillAmount>1000)
        cout<<endl<<"Discounted Amount: "<<DiscountedAmount;
        else
        cout<<endl<<"Total Bill Amount: "<<BillAmount;
    }

    return 0;
}
