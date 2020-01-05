#include<iostream>
using namespace std;
int main ()
{
   int data,mesec,godina;
   cin>>data>>mesec>>godina;
   if((data>1)&&(data<=31)&&(mesec<=12)&&(mesec>1))
   {
      if((mesec==1)||(mesec==3)||(mesec==5)||(mesec==7)||(mesec==9)||(mesec==12))
      {
           if(data<=31)
           {
              cout<<"YES"<<endl;
              if(data<31)cout<<data+1<<"."<<mesec<<"."<<godina;
              else if(mesec<12)cout<<"01."<<mesec+1<<"."<<godina;
              else if((mesec==12)&&(data==31))cout<<"01"<<"."<<"01"<<"."<<godina+1;
           } else cout<<"No";
      }
      if(mesec==2)
          {
              if(godina%4==0)
              {
                  if(data<=29)
                  {
                    cout<<"YES"<<endl;
                    if(data<29)cout<<data+1<<"."<<mesec<<"."<<godina;
                    else if(data==29)cout<<"01."<<"03"<<"."<<godina;
                  }
              }
              else
              {
                 cout<<"YES"<<endl;
                 if(data<28)cout<<data+1<<"."<<mesec<<"."<<godina;
                 else if(data==28)cout<<"01."<<"03"<<"."<<godina;
              }

        }
        else cout<<"No";
         if((mesec==4)||(mesec==6)||(mesec==8)||(mesec==10)||(mesec==11))
         {
             if(data<=30)
             {
                 cout<<"YES"<<endl;
                 if(data<30)cout<<data+1<<"."<<mesec<<"."<<godina;
                 else if(mesec<11)cout<<"01."<<mesec+1<<"."<<godina;
                 else if((mesec==12)&&(data==31))cout<<"01"<<"."<<"01"<<"."<<godina+1;

             }
         }
       else cout<<"No";
     }
   else cout<<"No";
}

