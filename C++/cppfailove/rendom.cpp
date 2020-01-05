#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int rendom;
    float i;
    rendom=/*(int)(5+1)*/rand();
    for (i=0;i<=rendom;i++)rendom=i;
    cout<<rendom;
}
