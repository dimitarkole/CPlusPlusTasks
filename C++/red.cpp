#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int massive[n];
    for(int i=0;i<n;i++)
    {
        cin>>massive[i];
    }
    int maxRazlika=0,razlika;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            razlika=massive[i]-massive[j];
            razlika=abs(razlika);
            if(razlika>maxRazlika)maxRazlika=razlika;
        }
    }
    int start=0, finish=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            razlika=massive[i]-massive[j];
            razlika=abs(razlika);
            if((razlika==maxRazlika)&&(j-i>finish-start))
            {
                finish=j;
                start=i;
            }
        }
    }
    cout<<start+1<<" "<<finish+1;
}
