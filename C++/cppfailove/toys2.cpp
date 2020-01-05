#include<iostream>
using namespace std;
int main()
{
    int s,s1,s2,s3,max;
    cin>>s>>s1>>s2>>s3;
    s1=s/s1;
    s2=s/s2;
    s3=s/s3;
    max=s1;
    if(max<s2)max=s2;
    if(max<s3)max=s3;
    cout<<max;
}
