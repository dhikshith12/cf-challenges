#include<iostream>
using namespace std;

void printN(int n)
{
    if(n==0)
        return;
    if(n>0)
    {
        cout<<n<<" ";
    }
    printN(n-1);
}

int main()
{
    printN(10);
}
