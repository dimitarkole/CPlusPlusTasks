#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
using namespace std;
unsigned BrV; //Брой върхове в графа
ifstream fin; //Глобален входен поток за четене от текстовия файл
ofstream fout; //Глобален изходен поток за четене от текстов файл
//Клас граф
class clasGraph{
int **A; //Указател за създаване на матрицата на съседство
public:
clasGraph(); //Конструктор
~clasGraph(); //Деструктор
void make_graf(); //Запълва матрицата на съседство
void display_graf(ostream &);//Визуализира матрицата на съседство
};
//Конструктор за създаване и инициализация на матрицата на съседство
clasGraph::clasGraph()
{
int i,j;
if (!(A=new int*[BrV])) exit(1);
for (i=0; i<BrV; i++) if (!(A[i]=new int[BrV])) exit(1);
for (i=0; i<BrV; i++)
for (j=0; j<BrV; j++) A[i][j]=0;
}
//Деструктор, който изтрива матрицата на съседство
clasGraph::~clasGraph()
{
for (int i=0; i<BrV; i++) delete []A[i];
delete []A; cout<<"\nМатрицата на съседство е изтрита.\n";
}
//Член-функция за запълване на матрицата на съседство
void clasGraph::make_graf()
{
char kod_or,kod_teg; int i,j,teg;
cout<<"Графът ориентиран ли е /D,d,Д,д/? "; cin>>kod_or;
cout<<"Графът тегловен ли е /D,d,Д,д/? "; cin>>kod_teg;
for (;;) {
fin>>i>>j;if (fin.fail()) break;
if (kod_teg=='D'||kod_teg=='d'||kod_teg=='Д'||kod_teg=='д')
fin>>teg;
else teg=1;
A[i][j]=teg;
if (kod_or!='D'&&kod_or!='d'&&kod_or!='Д'&&kod_or!='д')
A[j][i]=teg;
}
fin.close();
}
//Член-функция за извеждане на матрицата на съседство на екрана или в
//текстов файл
void clasGraph::display_graf(ostream &p=cout)
{
if (p!=cout) fout.open("DopInf",ios::out);
int i,j;
p<<"\n MATРИЦА НА СЪСЕДСТВО\n";
p<<" ";
for (i=0;i<BrV;i++) p<<setw(3)<<i;p<<endl;
for (i=0;i<BrV;i++){
p<<setw(4)<<i;
for (j=0;j<BrV;j++) p<<setw(3)<<A[i][j];
p<<endl;
}
if (p!=cout){
fout.close();
cout<<"\nОтрорете текст. файл DopInf.\n";
}
}
//Главна функция
int main()
{
char ime_vh_fl[21];
cout<<"\nИме на входния файл: "; cin>>ime_vh_fl;
fin.open(ime_vh_fl,ios::in);
if (fin.bad()) {cout<<"Няма такъв файл.\n";getch();return 0;}
fin>>BrV; //Въвежда от текстовия файл броя на върховете на графа
clasGraph Graph; //Създава обекта Graph
Graph.make_graf(); //Запълва матрицата на съседство
Graph.display_graf(); //Извежда матрицата на съседство на екрана
Graph.display_graf(fout);//Извежда матрицата на съседство в текстов
//файл
getch();
}
