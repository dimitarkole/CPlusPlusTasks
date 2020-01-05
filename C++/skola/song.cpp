#include<iostream>
using namespace std;
int main()
{
    unsigned long long  n,m,mb,kb;
    cin>>n>>m>>mb;
    kb=(n*60+m)*16;
    mb=mb*1024;
    if(kb<=mb)cout<<"Yes";
    else cout<<"No"<<endl<<kb-mb;
}
