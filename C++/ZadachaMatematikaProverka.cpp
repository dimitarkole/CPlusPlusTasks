#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//Koрен от (x+1/x)-Koрен от (x-1/x)=Koрен от (x)
    double x=2/sqrt(3);
    x=sqrt(x);
    double oneX=1/x;
    double sqrt1,sqrt2,sqrt3;
    sqrt1=sqrt(x+oneX);
    sqrt2=sqrt(x-oneX);
    sqrt3=sqrt(x);
    cout<<"x= "<<x<<endl;
    cout<<"1/x= "<<oneX<<endl;
    cout<<"sqrt1= "<<sqrt1<<endl;
    cout<<"sqrt2= "<<sqrt2<<endl;
    cout<<"sqrt3= "<<sqrt3<<endl;
    cout<<"sqrt1 - sqrt2 = "<<sqrt1-sqrt2<<endl;

}
