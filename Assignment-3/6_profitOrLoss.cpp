/*Accept cost price(CP) and Selling price(SP) of an item. 
Calculate the ammount of PROFIT/LOSS made by the seller and print the*/

#include<iostream>
using namespace std;
int main()
{  double cp,sp;
    cout<<"Enter CP of Item"<<endl;
    cin >>cp;
    cout<<"Enter SP of Item"<<endl;
    cin>>sp;
    if(cp>=0 &&sp>=0)
    {
       if(cp>sp)
       {
           cout<<"seller has Lost "<<cp-sp<<"Rs"<<endl;
       }
       else if(cp<sp)
       {
           cout<<"sell has Profit of "<<sp-cp<<"Rs"<<endl;
       }
       else
       {
           cout<<"No Profit No Loss"<<endl;
       }
       
    }
    else
    {
        cout<<"SP OR CP can not be negative value"<<endl;
    }
    
}