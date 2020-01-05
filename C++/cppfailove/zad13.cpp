#include<iostream>
using namespace std;
int main()
{
    int ed,des,stot,hil,flag=0;
    for(int i=1001;i<=9999;i++)
    {
        ed=i%10;
        des=i/10%10;
        stot=i/100%100;
        hil=i%1000;
        if((ed==des)||(ed==stot)&&(ed==hil))
        {
            flag=1;
            cout<<i<<" ";
        }
        if(flag==0)
        {
            if((des==stot)&&(des==hil))
            {
                flag=1;
                cout<<i<<" ";
            }
            if(flag==0)
            {
                if(stot==hil)
                {
                    flag=1;
                    cout<<i<<" ";
                }

            }
        }
        flag=0;
    }
}
