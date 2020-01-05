#iclude<iostream>
using namespace std;
int main()
{
    char ch;
    int sum=0,br=0;
    for(int i=0;i<=5;i++)
    {
        cin.get(ch);
        if((ch-'0')==0)sum++;
        else br++;
    }
    cout<<"br="<<br<<endl;
    cout<<"sum="<<sum;

}
