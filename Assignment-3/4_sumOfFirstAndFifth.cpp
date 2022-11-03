//Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.
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
    if (count==5)
    {
        return true;
    }
    return false;
}
 void sumOfFirstAndFifthDigit(int n)
 {
     int count = 0;
     int sum=0;
     int r=0;
    while (n > 0)
    {
        r=n%10;
        n = n / 10;
        count++;
        if(count==1 ||count==5)
        {
            sum=sum+r;
        }     
    }
    cout<<"sum of First and fifth Digt = "<<sum<<endl;
 }

int main()
{
    int N;
    //accept an integer N
    cout << "Enter Integer N to calculate Sum of Digits" << endl;
    cin >> N;

    //check No is less or equal to five digits
    if (checkNumberFiveDigit(N) && N>0)
    {
        cout << "Sum Of Digits = " << endl;
        sumOfFirstAndFifthDigit(N);
    }
    else
    {
        cout << "Number is more than five Digit or Less than five Digits" << endl;
    }

    return 0;
}
