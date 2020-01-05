#include<iostream>
using namespace std;
int main()
{

    int n,sum,teglo,br;
    cin>>n;
    cin.get();
    char duma[25],letter,duma2[25];
    for(int i=0;i<n;i++)
    {
        sum=0;
        br=1;
        do
        {
             cin.get(letter);
             if(letter!='\n'){
                if((letter-'A'==0)&&(letter-'Z'==0))
                {
                    teglo=(letter-'A')*br;
                }
                else{
                    teglo=(letter-'A')*br;
                }
                br=br+1;
             }
        }
    }
}
