#include<iostream>
using namespace std;
int main()
{
    int ch1[30],ch2[30],br1=0,br2=0,flag=1;
    //char ch1[30],ch2[30];
    char ch;
   /* cin.getline(ch1,'\n');
    cin.getline(ch2,'\n');*/
    do
    {
        cin.get(ch);
        if(ch!='\n')
        {
            ch1[br1]=ch-'0';
            br1++;
        }
    }while (ch!='\n');
    //cin.get(ch);
    do
    {
        cin.get(ch);
        if(ch!='\n')
        {
            ch2[br2]=ch-'0';
            br2++;
        }
    }while (ch!='\n');
    if(br1>br2)cout<<"parvoto e po-golqmo";
    else if (br1<br2)cout<<"vtoroto e po-golqmo";
    else
    {
        for(int i=0;i<br1;i++)
        {
            if(ch1[i]>ch2[i])
            {
                cout<<"parvoto e po-gololqmo";
                flag=1;
                break;
            }
            if(ch1[i]<ch2[i])
            {
                cout<<"vtoroto e po-gololqmo";
                flag=1;
                break;
            }
            else flag=0;
        }
    }
    if(flag==0)cout<<"ravni sa";
}
