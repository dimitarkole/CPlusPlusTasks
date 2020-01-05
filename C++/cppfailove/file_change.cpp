#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   / char ch;
    int brzapis, endFile, position;

    char nameInput[50],nameOutput[50];
    cout<<"Ime na fajl-vhod:  ";
    cin>>nameInput;
    cout<<"ime na fajl - izhod: ";
    cin>>nameOutput;
    cout<<"dylvina na zapis: ";
    cin>>brzapis;

    //ofstream FileOutput;
    //FileOutput.open(nameOutput,ios::out|ios::binary);

    ifstream myFile;
    myFile.open(nameInput,ios::in|ios::binary);
    //myFile.seekg(EOF);
    //endFile=myFile.tellg();
    //cout<<endFile;
    //myFile.seekg(0);
    //cout<<myFile.tellg()<<"   "; //cout<<myFile.tellp()<<"   ";
    //cin>>ch;
    //position=0;
    while (!myFile.eof())
    {
        for (int i=0;i<brzapis;i++)
        {

            myFile>>ch;
            cout<<ch;
            FileOutput<<ch;
            //myFile.seekg(++position);
        }
        FileOutput<<"  ";
        cout<<endl;
    }
    myFile.close();
    FileOutput.close();


1.
#include <iostream>
 .
 2.
#include <conio.h>
 .
 3.
#include <fstream>
 .
 4.
#include <string>
 .
 5.
using namespace std;
 .
 6.

 .
 7.
int main()
 .
 8.
{
 .
 9.
    string promenliva;
 .
 10.
    ifstream file1;
 .
 11.
    file1.open("file1.txt", ios::in);
 .
 12.
    ofstream file2;
 .
 13.
    file2.open("file2.txt", ios::out);
 .
 14.
    while(!file1.eof()) {
 .
 15.
        file1>>promenliva;
 .
 16.
        file2<<promenliva<<" ";
 .
 17.
    }
 .
 18.
    file1.close();
 .
 19.
    file2.close();
 .
 20.
    getch();
 .
 21.
    return 0;
 .
 22.
}

}
