#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    cout<<"Broi elementi:"<<s.size()<<endl;//0
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Broi elementi:"<<s.size()<<endl;//3
    cout<<"Gorniq element:"<<s.top()<<endl;//1
    s.pop();
    cout<<"Broi elementi:"<<s.size()<<endl;//2
    cout<<"Gorniq element:"<<s.top()<<endl;//2
    s.pop();
    cout<<"Broi elementi:"<<s.size()<<endl;//1
    cout<<"Gorniq element:"<<s.top()<<endl;//3
    cout<<"–––––––––"<<endl;
    stack<char> a;
    a.push('a');
    a.push('b');
    a.push('c');
    a.push('d');
    a.push('e');
    a.push('f');
    a.push('g');
    cout<<"Broi elementi:"<<a.size()<<endl;
    while(!a.empty()){
        cout<<"Gorniq element:"<<a.top()<<endl;
        a.pop();
    }
    cout<<"Broi elementi:"<<a.size()<<endl;
    return 0;
}
