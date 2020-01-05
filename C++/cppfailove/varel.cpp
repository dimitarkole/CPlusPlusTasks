#include<iostream>
using namespace std;
int main()
{
    int litri,dob,kolkopyti;
    char ch;
    cin>>litri>>dob>>kolkopyti;
    cin.get();
    for(int i=1;i<=kolkopyti;i++)
    {
        cin.get(ch);
        cin.get();
        if(ch=='+')litri+=dob;
        else if(ch=='-')litri-=dob;
    }
    cout<<litri;
}
