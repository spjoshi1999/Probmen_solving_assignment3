 /* Write a program to accept a list L1 of N integers. Accept integer D.
 Generate list L2 such that it contains only those integers from list L1 which are divisible by D. 
 Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.*/

 #include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;

void printList(list<int>l)
{
    list<int>::iterator itr = l.begin();
    for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void genrateList(list<int>l,list<int>&l2,int d)   //1 2 3 4 5 6                                                 //2
{                                                 //2 4 6
    list<int>::iterator itr = l.begin();
    int r;
     for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        if(*itr%d==0)
        {
            r=*itr;
            l2.push_back(r);
        }
    }
}

void insertData(list<int> &l, int N)
{
    int r;
    cout << "Enter Elements to insert in the list" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> r;
        l.push_back(r);
    }
}

int main()
{
    int N,D;
    list<int> L1;
    list<int>L2;
    cout << "Enter Size of List" << endl;
    cin >> N;
    
    cout<<"Enter element D to check divisiblity"<<endl;
    cin>>D;
    if(N>0 && D>0)
    {
    insertData(L1, N);
    genrateList(L1,L2,D);
    cout<<"List L1= ";
    printList(L1);
    cout<<"Size of List L1 OR N= "<<N<<endl;
    cout<<"Dividing factor D= "<<D<<endl;
    cout<<"List L2= ";
    printList(L2);
    cout<<"Size of list L2= "<<L2.size()<<endl;
    }
    else
    {
        cout<<"N and Divisible factor must be greater than 0"<<endl;
    }
    
    return 0;
}
