#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct employee
{
    string name;
    string surrname;
    char sex;
    int age;

};

int main()
{
    int x;
    fstream plik;
    plik.open("employee.txt", ios::out );
    cout << "Ilu pracownikow chcesz wprowadzic?:" << endl;
    cin >> x;
    employee employers [x];
    for (size_t i = 0; i<x; i++)
    {
        cout <<"Podaj imie:"<<endl;
        cin>> employers[i].name;
        cout <<"Podaj nazwisko:"<<endl;
        cin>> employers[i].surrname;
        cout <<"Podaj plec(K/M):"<<endl;
        cin>> employers[i].sex;
        cout <<"Podaj wiek:"<<endl;
        cin>> employers[i].age;
        plik<<employers[i].name<<" "<<employers[i].surrname <<" "<<employers[i].sex<<" "<<employers[i].age<<endl;
        system("CLS");
    }
    plik.close();
    return 0;
}
