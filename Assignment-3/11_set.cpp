/*Write a program to accept cardinality of set A as N, and cardinality of set B as M. 
Then accept elements of set A and set B. Generate set C which is union of set A and set B, 
set D which is intersection set of set A and Set B. Print set A, B, C, D, Cardinality of set C, 
Cardinality of set D.*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

void intersectionOfSet(set<int> A, set<int> B, set<int> &D)
{
    vector<int> vec;
    vector<int> vec1;
    for (auto it = A.begin(); it != A.end(); ++it)
        vec.push_back(*it);
    for (auto itr = B.begin(); itr != B.end(); ++itr)
        vec1.push_back(*itr);

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec1.size(); j++)
        {
            if (vec[i] == vec1[j])
            {
                D.insert(vec[i]);
            }
        }
    }
}
void unionSet(set<int> A, set<int> B, set<int> &C)
{
    for (auto it = A.begin(); it != A.end(); ++it)
        C.insert(*it);
    for (auto it = B.begin(); it != B.end(); ++it)
        C.insert(*it);
}
void insertElement(set<int> &s, int size)
{
    int r;
    cout << "Enter " << size << "elements to insert in set" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> r;
        s.insert(r);
    }
}

void printSet(set<int> s)
{
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << ' ' << *it;
}

int main()
{
    int N, M;
    set<int> A;
    set<int> B;
    set<int> C;
    set<int> D;
    cout << "Enter cardinality of set A" << endl;
    cin >> N;
    cout << "Enter cardinality of set B" << endl;
    cin >> M;
    //inserting elements to the set
    if(N>0 && M>0)
    {
    insertElement(A, N);
    insertElement(B, M);   
    //Union of set A and set B
    unionSet(A, B, C);
    //Inter section of set A and set B
    intersectionOfSet(A, B, D);
    cout << endl;
    cout << "SET A = ";
    printSet(A);
    cout << endl;
    cout << "SET B = ";
    printSet(B);
    cout << endl;
    cout << "SET C = ";
    printSet(C);
    cout << endl;
    cout << "SET D = ";
    printSet(D);
    cout<<"cardinality of set C = "<<C.size()<<endl;
    cout<<"cardinality of set D = "<<D.size()<<endl;
    }
    else
    {
        cout<<"cardinality of set A and B must be greater than zero"<<endl;
    }
    
}