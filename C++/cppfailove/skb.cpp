#include<iostream>
using namespace std;
int main()
{
    int ms[1],srs[1],gs[1],n;
    char skoba;
    cin>>n;
    for(int i=0;i<2;i++)
    {
        ms[i]=0;
        srs[i]=0;
        gs[i]=0;
    }
    for(int i=0;i<=n;i++)
    {
        cin.get(skoba);
        cin.get();
        if(skoba=='(')ms[0]++;
        else if(skoba==')')ms[1]++;
        if(skoba=='[')srs[0]++;
        else if(skoba==']')srs[1]++;
        if(skoba=='{')gs[0]++;
        else if(skoba=='}')gs[1]++;
    }
    if(gs[0]!=gs[1])
    {
        if(gs[0]>gs[1])cout<<"R"<<gs[0]-gs[1]<<endl;
        else cout<<"L"<<gs[1]-gs[0]<<endl;
    }
    else cout<<"0"<<endl;
     if(srs[0]!=srs[1])
    {
        if(srs[0]>srs[1])cout<<"R"<<srs[0]-srs[1]<<endl;
        else cout<<"L"<<srs[1]-srs[0]<<endl;
    }
    else cout<<"0"<<endl;



    if(ms[0]!=ms[1])
    {
        if(ms[0]>ms[1])cout<<"R"<<ms[0]-ms[1]<<endl;
        else cout<<"L"<<ms[1]-ms[0]<<endl;
    }
    else cout<<"0"<<endl;
}
