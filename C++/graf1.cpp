#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
using namespace std;
unsigned BrV; //���� ������� � �����
ifstream fin; //�������� ������ ����� �� ������ �� ��������� ����
ofstream fout; //�������� ������� ����� �� ������ �� ������� ����
//���� ����
class clasGraph{
int **A; //�������� �� ��������� �� ��������� �� ���������
public:
clasGraph(); //�����������
~clasGraph(); //����������
void make_graf(); //������� ��������� �� ���������
void display_graf(ostream &);//����������� ��������� �� ���������
};
//����������� �� ��������� � ������������� �� ��������� �� ���������
clasGraph::clasGraph()
{
int i,j;
if (!(A=new int*[BrV])) exit(1);
for (i=0; i<BrV; i++) if (!(A[i]=new int[BrV])) exit(1);
for (i=0; i<BrV; i++)
for (j=0; j<BrV; j++) A[i][j]=0;
}
//����������, ����� ������� ��������� �� ���������
clasGraph::~clasGraph()
{
for (int i=0; i<BrV; i++) delete []A[i];
delete []A; cout<<"\n��������� �� ��������� � �������.\n";
}
//����-������� �� ��������� �� ��������� �� ���������
void clasGraph::make_graf()
{
char kod_or,kod_teg; int i,j,teg;
cout<<"������ ���������� �� � /D,d,�,�/? "; cin>>kod_or;
cout<<"������ �������� �� � /D,d,�,�/? "; cin>>kod_teg;
for (;;) {
fin>>i>>j;if (fin.fail()) break;
if (kod_teg=='D'||kod_teg=='d'||kod_teg=='�'||kod_teg=='�')
fin>>teg;
else teg=1;
A[i][j]=teg;
if (kod_or!='D'&&kod_or!='d'&&kod_or!='�'&&kod_or!='�')
A[j][i]=teg;
}
fin.close();
}
//����-������� �� ��������� �� ��������� �� ��������� �� ������ ��� �
//������� ����
void clasGraph::display_graf(ostream &p=cout)
{
if (p!=cout) fout.open("DopInf",ios::out);
int i,j;
p<<"\n MAT���� �� ���������\n";
p<<" ";
for (i=0;i<BrV;i++) p<<setw(3)<<i;p<<endl;
for (i=0;i<BrV;i++){
p<<setw(4)<<i;
for (j=0;j<BrV;j++) p<<setw(3)<<A[i][j];
p<<endl;
}
if (p!=cout){
fout.close();
cout<<"\n�������� �����. ���� DopInf.\n";
}
}
//������ �������
int main()
{
char ime_vh_fl[21];
cout<<"\n��� �� ������� ����: "; cin>>ime_vh_fl;
fin.open(ime_vh_fl,ios::in);
if (fin.bad()) {cout<<"���� ����� ����.\n";getch();return 0;}
fin>>BrV; //������� �� ��������� ���� ���� �� ��������� �� �����
clasGraph Graph; //������� ������ Graph
Graph.make_graf(); //������� ��������� �� ���������
Graph.display_graf(); //������� ��������� �� ��������� �� ������
Graph.display_graf(fout);//������� ��������� �� ��������� � �������
//����
getch();
}
