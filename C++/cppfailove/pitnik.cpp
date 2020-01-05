#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int k,l,ml,bkttdk=0,brcu=0;
    cin>>k>>l>>ml;
    ml=l*1000+ml;
    brcu=(k*400);
    bkttdk=ceil((float)brcu/ml);
    cout<<bkttdk<<endl;
}
