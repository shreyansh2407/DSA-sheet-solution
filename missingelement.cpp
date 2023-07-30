#include<iostream>
#include<vector>
using namespace std;
void missingelement(int a[],int n)
{
    int c=1,count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(c==a[j])
             count++;
             
             
             
        }if(count=0)
             cout<<"missing num "<<c;
             break;
        c++;
    }
}
int main()
{
    int n ,a[200];
    cin>>n;
    cout<<"enter the elements of array";
    for(int i = 0;i<n-1;i++)
    cin>>a[i];
    missingelement(a,n);
}