#include<iostream>
#include<math.h>
using namespace std;
int simpleNumber(int number)
{
    //Todo: намиране просто число
    bool flag=1;
    do
    {

        flag=1;
        for(int i=2;i<=sqrt(number);i++)
        {

            if(number%i==0)
            {
                flag=0;
                break;
            }

        }
        if (flag==0)number=number+1;
    }while(flag==0);
    return number;
}
int main(){
    int n,m=2,newM=2;
    cin>>n;
    char element[n+1],newElement[n+1];
    cin.get();
    for(int i=0;i<n;i++)
    {
        cin.get(element[i]);
    }

    bool flag=0;
    int number,br,conditional[3],firstSimpleNumber,flagSimpleNumber;
    char letters[5]={'a','b','c','d'},letter;
    conditional[2]=1;

    conditional[1]=1;
    do
    {
        flagSimpleNumber=0;
        for(int i=0; i<n; i++)
        {
            conditional[0]=1;

            //TODO :намиране  на следващо просто число
            number=simpleNumber(newM);
            if((flagSimpleNumber==0)&&(number!=1)){
                firstSimpleNumber=number;
                flagSimpleNumber=1;
            }
            br=-1;
            letter=letters[br];
            for(int j=number; j<=number+15;j++)
            {
               if(j%13==0)
               {

                   if(br==3)br=0;
                   else br=br+1;
                   letter=letters[br];
                   break;
               }
               else{
                   if(br==3)br=0;
                   else br=br+1;
                   letter=letters[br];
               }
               newM=newM+1;

            }
            newM=newM+1;
            if(br==3)br=0;
            else br=br+1;
            letter=letters[br];
            newElement[i]=letter;
            if(newElement[i]!=element[i])
            {
               flag=0;
               break;
            }
            else
            {
                flag=1;
                conditional[0]=conditional[0]+1;
            }
        }
        if(conditional[2]<conditional[0])
        {
            conditional[1]=m;
            conditional[2]=conditional[0];
        }
        m=firstSimpleNumber+1;
        newM=m;

    }while((conditional[0]<n)&&(conditional[1]!=1001));//||(conditional[1]!=1001))||(flag==1)
    cout<<conditional[1]-1;
}
