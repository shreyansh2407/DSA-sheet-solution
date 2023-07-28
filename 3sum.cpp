#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>nums)
{
    for(int i = 0;i<nums.size();i++)
    {
         for(int j = i;j<nums.size();j++)
         {
             for(int k= j;k<nums.size();k++)
             {
                 if(nums[i]+nums[j]+nums[k]==0)
                 {
                 if((nums[i]!=nums[j]!=nums[k])||nums[i]!=nums[j]||nums[j]!=nums[k]||nums[i]!=nums[k])
                 cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                 }
             }
         }
    }
    
}
int main()
{
    vector<int>nums(6);
    for(int i = 0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    sum(nums);

}