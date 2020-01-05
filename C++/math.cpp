#include<iostream>
using namespace std;
int chMassiv[30],n,k;
void initializer_chMassiv(int element){
    for(int i=0;i<element;i++){
        cin>>chMassiv[i];
    }
}
void sortMassiv(int element){
    for (int i=1; i<n-1;i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (chMassiv[i] > chMassiv[j]) // swap items
            {
                int tmp = chMassiv[i];
                chMassiv[i] = chMassiv[j];
                chMassiv[j] = tmp;
            }
        }
    }
}

int main()
{

    cin>>n>>k;
    initializer_chMassiv(n);
    sortMassiv(n);
    for(int i=1;i<n;i++)
    {
        if(k>0)
        {
            chMassiv[i]=chMassiv[i]*(-1);
            k--;
        }
        else break;
    }
    int sumAllElement=0;
    for(int i=0;i<n;i++){
        sumAllElement+=chMassiv[i];
    }
    cout<<sumAllElement;

}
