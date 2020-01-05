#include<iostream>
using namespace std;
int main()
{
    int maxi=0;
    float a,b;
    for(float i=0;i<51;i+=0.01)
    {
        a=i;
        for(float j=0;j<=i;j+=0.01)
        {
            b=j;
            if(a*a==b*(a+b))cout<<a/b<<endl;
        }
    }
}
