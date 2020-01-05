#include<iostream>
using namespace std;
int main()
{
    long long n,n1=0,ch1=0,ch2=0,c=0,sumc=0,sumk=0,sumg=0,flag=0;
    cin>>n;
    n1=n;
    ch1=n%10;
    n=n/10;
    while(n!=0)
    {
        ch2=n%10;
        n=n/10;
        if(ch2!=ch1)flag=1;
    }

    if(flag==0)cout<<ch2;
        else
        {
            while(n1!=0)
            {
                c=n1%10;
                n1=n1/10;
                sumc+=c;
            }
            if(sumc>9)
            {
                while(sumc!=0)
                {
                    c=sumc%10;
                    sumc=sumc/10;
                    sumk+=c;
                }
                if(sumk>9)
                {
                    while(sumk!=0)
                {
                    c=sumk%10;
                    sumk=sumk/10;
                    sumg+=c;
                }
                cout<<sumg;
                }
                else cout<<sumk;
            }
            else cout<<sumc;
        }
     cout<<endl<<n<<":n "<<n1<<":n1 "<<ch1<<":ch1 "<<ch2<<":ch2 "<<c<<":c "<<sumc<<":sumac "<<sumk<<":sumk "<<sumg<<":sumg";
}

