#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    short massive[n];
    for(int i=0;i<n;i++)
    {
        cin>>massive[i];
    }
    int maxSum=1000000, sum;
    for(int i=0;i<3;i++)
    {
        sum=0;
        for(int j=i;j<n;j=j+3)
        {
            sum=sum+massive[j];
        }
        if(maxSum>sum)maxSum=sum;
    }
    cout<<maxSum<<endl;
}
