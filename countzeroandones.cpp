#include<iostream>
using namespace std;
int main()
{
    int a[200],n,countzero=0,countone= 0;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements of array must be zero or one  ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i = 0;i<n;i++)
    {
        if(a[i]==0)
        countzero++;
        else
        countone++;
    }
    cout<<"the number of zeros = "<<countzero<<endl;
    cout<<"the number of ones ="<<countone<<endl;
    return 0;
}

