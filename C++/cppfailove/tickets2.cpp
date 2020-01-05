#include<iostream>
using namespace std;
int main()
{
    int n, ed,des,sto,hil,deshil,ch1,ch2;
    //long long n;
    cin>>n;
    ed=n%10;
    des=n/10%10;
    sto=n/100%10;
    hil=n/1000%10;
    deshil=n/10000%10;
    ch1=deshil*10+ed;
    ch2=hil*100+sto*10+des;
    //cout<<"ch1="<<ch1<<endl;
    //cout<<"ch2="<<ch2<<endl;
    if(ch2%ch1==0)cout<<"Yes"<<endl<<ch2/ch1;
    else cout<<"Sorry";
}
