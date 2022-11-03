/*Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.*/

#include <iostream>
using namespace std;

bool checkNumberFiveDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    if (count <= 5)
    {
        return true;
    }
    return false;
}

int reverseNumber(int N)
{
    int M,rem;
    M=0;
    while(N>0)
    {
       rem=N%10;  
       M=M*10+rem;
       N=N/10;
    }
    cout<<"Reversed Number is = "<<M<<endl;
    return M;
}

int main()
{
    int N;
    //accept an integer N
    cout << "Enter Integer N to Reverse the Number" << endl;
    cin >> N;
    //check Number is greater than one or 0
    if(N>0)
    {
    //check No is less or equal to five digits
    if (checkNumberFiveDigit(N))
    {
        //function to reverse the number returns reversed Number M
        int M= reverseNumber(N);
        //compare the Numbers
        if(M>N)
          {
              cout<<"M is Greater than N"<<endl;
          }
          else if (M<N)
          {
              cout<<"M is Less than N"<<endl;
          }
          else
          {
              cout<<"M is equals to N"<<endl;
          }
    }
    else
    {
        cout << "Number is more than five Digit" << endl;
    }
    }
    else
    {
        cout<<"No must be a possitive "<<endl;
    }
    

    return 0;
}