#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int height=2*n+1, width=2*n+3,starStar=0,endStar=width-1;
    for(int j=0;j<height/2-1;j++)
    {
        for(int i=0;i<width;i++)
        {
            if((i==starStar)||(i==width/2)||(i==endStar))cout<<"*";
            else cout<<".";
        }
        cout<<endl;
        starStar=starStar+1;
        endStar=endStar-1;
    }
    for(int i=0;i<(width-5)/2;i++)cout<<".";
    for(int i=0;i<5;i++)cout<<"*";
    for(int i=0;i<(width-5)/2;i++)cout<<".";
    cout<<endl;
    for(int i=0;i<width;i++)cout<<"*";
    cout<<endl;
      for(int i=0;i<(width-5)/2;i++)cout<<".";
    for(int i=0;i<5;i++)cout<<"*";
    for(int i=0;i<(width-5)/2;i++)cout<<".";
    cout<<endl;
    starStar=starStar-1;
    endStar=endStar+1;
    for(int j=0;j<height/2-1;j++)
    {
        for(int i=0;i<width;i++)
        {
            if((i==starStar)||(i==width/2)||(i==endStar))cout<<"*";
            else cout<<".";
        }
        cout<<endl;
        starStar=starStar-1;
        endStar=endStar+1;
    }
}
