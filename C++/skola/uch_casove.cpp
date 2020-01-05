#include<iostream>
using namespace std;
int main()
{
    int nachalo_chas,nachalo_minuti,mm,gm_sled,gm,chas_dylag,kraj_minuti=0;
    char ch;
    cin>>nachalo_chas;
    cin.get(ch);
    cin>>nachalo_minuti>>mm>>gm_sled>>gm>>chas_dylag;
    nachalo_minuti=nachalo_minuti+nachalo_chas*60;
    kraj_minuti=nachalo_minuti+chas_dylag;
    cout<<"1 chas "<<nachalo_minuti/60<<":";
    if(nachalo_minuti%60<10)cout<<"0";
    cout<<nachalo_minuti%60<<" "<<kraj_minuti/60<<":";
    if(kraj_minuti%60<10)cout<<"0";
    cout<<kraj_minuti%60<<endl;

    for(int i=2;i<=7;i++)
    {
        if(i==gm_sled+1)nachalo_minuti=kraj_minuti+gm;
        else nachalo_minuti=kraj_minuti+mm;
        kraj_minuti=nachalo_minuti+chas_dylag;
        cout<<i<<" chas "<<nachalo_minuti/60<<":";
        if(nachalo_minuti%60<10)cout<<"0";
        cout<<nachalo_minuti%60<<" "<<kraj_minuti/60<<":";
        if(kraj_minuti%60<10)cout<<"0";
        cout<<kraj_minuti%60<<endl;
    }
}
