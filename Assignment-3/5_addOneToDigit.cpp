//Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.
#include <iostream>
using namespace std;

int reverseN(int n)
{
    int y = 0;
    int r = 0;
    while (n > 0)
    {
        r = n % 10;
        y = y * 10 + r;
        n = n / 10;
    }
    return y;
}
bool checkNumberFiveDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    if (count == 5)
    {
        return true;
    }
    return false;
}
void addOneToEachDigit(int n)
{
    int M = 0;
    int r = 0;
    while (n > 0)
    {
        r = n % 10;
        M = M * 10 + r + 1;
        n = n / 10;
    }
    cout << "After adding One to Each Digit Genrated Number is = " << reverseN(M) << endl;
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
        addOneToEachDigit(N);
    }
    else
    {
        cout << "Number is more than five Digit or Less than five Digits" << endl;
    }

    return 0;
}
