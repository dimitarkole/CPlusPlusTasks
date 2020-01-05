#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int copyN=n;

    stack <int> stepeni;
    int stepen=0;
    do
    {
        stepen=0;
        while(pow(2,stepen)<=copyN)
        {
            stepen=stepen+1;
        }
        stepen=stepen-1;
        stepeni.push(stepen);
        copyN=copyN-pow(2,stepen);
    }while(copyN>0);

    int opportunities=1;
    while(!stepeni.empty())
    {
        stepen=stepeni.top();
        while(stepen>0)
        {
            opportunities=opportunities+2;
            stepen=stepen-1;
        }
        stepeni.pop();
    }
    cout<<endl<<endl<<"otgovor: "<<opportunities;
}
