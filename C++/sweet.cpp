#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,xb,yb,zb,ost,ost2,sum,maxx,srednoy,minz;
    int minmaxx,minsredno,srednomax;
    //cin>>n>>x>>y>>z;
                    n=30000;
                    x=1;
                    y=1;
                    z=1;
                    ost=n;
                    for(int i=0;i<=n/x;i++)
                    {
                        for(int j=0;j<=n/y;j++)
                        {
                            ost2=(n-i*x-j*y)%z;
                            cout<<"ost2= "<<ost2<<endl;
                            if(ost2>0 && ost2<ost)
                            {

                                ost=ost2;


                                xb=i;
                                yb=j;
                                zb=(n-i*x-j*y)/z;
                            }
                        }
                    }

   /* sum=x+y+z;
    ost=n%sum;
    xb=yb=zb=n/sum;
    cout<<ost<<endl;
    maxx=x;
    if (maxx<y)maxx=y;
    if (maxx<z)maxx=z;

    minz=x;
    if (minz>y)minz=y;
    if (minz>z)minz=z;

    if(minz<=ost)
    {
        srednoy=sum-(maxx+minz);

        cout<<endl;
        cout<<"ost= "<<ost<<endl;
        cout<<"max= "<<maxx<<endl;
        cout<<"sredno= "<<srednoy<<endl;
        cout<<"minz= "<<minz<<endl<<endl;

        if(ost-maxx>=0)
        {
            ost=ost-maxx;
            if (maxx==y)yb++;
            else if (maxx==z)zb++;
            else xb++;
        }

        if(ost-srednoy>=0)
        {
            ost=ost-srednoy;
            if (srednoy==y)yb++;
            else if (srednoy==z)zb++;
            else xb++;
        }

        if(ost-minz>=0)
        {
            ost=ost-minz;
            if (minz==y)yb++;
            else if (minz==z)zb++;
            else xb++;
        }
    }*/


    cout<<"xbr= "<<xb<<"  ybr= "<<yb<<" zbr= "<<zb<<" ost= "<<ost;

}
