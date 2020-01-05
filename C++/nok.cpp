#include<iostream>
using namespace std;
int main()
{
    double firstCh,secondCh;
   // cin>>firstCh>>secondCh;
    double firstChDelI,secondChDelI;
    int firstChDelIInt,secondChDelIInt;
    for(double firstCh=240;firstCh<=248;firstCh++)
    {
        cout<<"firstCh="<<firstCh<<endl;
        for(double secondCh=340;secondCh<=368;secondCh++)
        {
            double min=firstCh;
            cout<<"    secondCh="<<secondCh<<endl;
            if(min>secondCh)min=secondCh;

            for(double i=2;i<min;i++)
            {

                firstChDelI=firstCh/i;
                secondChDelI=secondCh/i;

                firstChDelIInt=firstCh/i;
                secondChDelIInt=secondCh/i;

                if(firstChDelI==firstChDelIInt)
                {
                    if(secondChDelIInt==secondChDelI)cout<<"        i= "<<i<<endl;
                }
            }

        }
    }
}
