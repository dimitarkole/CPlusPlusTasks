#include<iostream>
using namespace std;
int main()
{
    int s,b;
    cin>>s;
    if((s<7)||(s>24))cout<<"NO SOLUTION";
    else
    {
        s=s-6;
        if(s<7) cout<<s;
        else cout<<"6";
    }

}
