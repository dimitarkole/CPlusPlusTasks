#include<iostream>
using namespace std;
int main()
{
    int one,two,five,sum;
    cin>>one>>two>>five>>sum;
    for(int i=0;i<=one;i++){
        for(int j=0;j<=two;j++){
            for(int p=0;p<=five;p++){
                if(i+(j*2)+(p*5)==sum)cout<<i<<" * 1 lv. + "<<j<<" * 2 lv. + "<<p<<" * 5 lv. = "<<sum<<" lv."<<endl;
            }
        }
    }
}
