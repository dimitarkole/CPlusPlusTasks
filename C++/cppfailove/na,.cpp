#include<iostream>
using namespace std;
int main()
{
    int n,ed,des,stot,p,k;
    cin>>n;
    ed=n%10;
    des=n/10%10;
    stot=n/100;
    if(ed>!des&&ed>!stot&&des>!stot)
    {
        p=ed*stot;
        cout<<"yes"<<" "<<p;
    }
    else cout<<"no"<<" "<<ed*100+des*10+stot;
}
