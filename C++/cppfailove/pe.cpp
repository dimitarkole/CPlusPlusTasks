#include<iostream>
using namespace std;
int main()
{
    char b,p;
    int razlika;
    cin.get(b);
    razlika='A'-b;
    razlika='Z'-razlika;
    p=char(razlika);
    cout<<p;
}
