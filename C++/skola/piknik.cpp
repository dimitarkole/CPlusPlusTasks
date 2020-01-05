#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float k,l,ml;
    cin>>k>>l>>ml;
    ml=l*1000+ml;
    //cout<<"ml="<<ml<<endl;
    k=k*400.;
    //cout<<"k="<<k<<endl;
    cout<<ceil(k/ml);
}
