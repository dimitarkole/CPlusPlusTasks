#include<iostream>
using namespace std;
int main()
{
    int s,s1,s2,s3,min=1000;
    cin>>s>>s1>>s2>>s3;
    min=s1;
    if(min>s2)min=s2;
    if(min>s3)min=s3;
    cout<<s/min;
}
