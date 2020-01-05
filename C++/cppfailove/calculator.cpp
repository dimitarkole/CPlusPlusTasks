#include<iostream>
using namespace std;
int main()
{
    int x,y,z,n,brch=0,ed,des,sto,hil;
    cin>>x>>y>>z>>n;
    ed=n%10;
    des=n/10%10;
    sto=n/100%10;
    hil=n/1000%10;
    if((ed!=x)&&(ed!=y)&&(ed!=z))brch++;
    if(((des!=x)&&(des!=y)&&(des!=z))&&(des!=ed))brch++;
    if(((sto!=x)&&(sto!=y)&&(sto!=z))&&((sto!=des)&&(sto!=ed)))brch++;
    if(((hil!=x)&&(hil!=y)&&(hil!=z))&&((hil!=sto)&&(hil!=des)&&(hil!=ed)))brch++;
    cout<<brch;
}
