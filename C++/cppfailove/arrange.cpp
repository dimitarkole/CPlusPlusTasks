#include<iostream>
using namespace std;
void createTable(int m,int n){
    if (n>m)cout<<"NO";
    else
    {

        cout<<"Yes =   ";
        int sumMN=m+n;
        bool Table[sumMN-1],flag=1;
        for(int i=0; i< sumMN;i++)
        {
            if(i==0)
            {
                Table[i]=1;
                m=m-1;
            }
            else
            {
                if((i>2)&&(Table[i-1]==1)){
                    if(Table[i-2]==0)
                    {
                        if(m>0){
                            Table[i]=1;
                            m=m-1;
                        }
                        else{
                            flag=0;
                            break;
                        }
                    }
                    else{
                        if(n>0){
                            Table[i]=0;
                            n=n-1;
                        }
                        else{
                            flag=0;
                            break;
                        }
                    }
                }
                else if (i>3) {
                    if((i>2)&&(Table[i-1]==1)){
                    }


                    /*Table[i]=1;
                    m=m-1;*/


                }





            }
        }

    }
}
int main()
{
    int m1,n1,m2,n2;
    cin>>m1>>n1>>m2>>n2;
    createTable(m1,n1);
    cout<<endl;
    createTable(m2,n2);
}
