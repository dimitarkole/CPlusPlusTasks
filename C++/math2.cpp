#include<iostream>
using namespace std;
int n, k;
short numbers[30];
void inicilizeNumbers()
{
    for(int i=0; i<n;i++)
    {
        cin>>numbers[i];
    }
}

void sortNumbers()
{
    for(int i=1;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            short numberI= numbers[i];
            short numberJ= numbers[j];
            if(numberI>numberJ)
            {
                numbers[i]=numberJ;
                numbers[j]=numberI;
            }
        }
    }
}

int main()
{

    cin>>n>>k;
    inicilizeNumbers();
    sortNumbers();
}
