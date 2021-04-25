#include <iostream>
#include <conio.h>
using namespace std;

struct my_struct
{
    string name;
    string surrname;
    int age;
    int children;
    string department;

};

int main()
{
    int x;
    cout<<"Jak wielka ma byc struktrura?:";
    cin>>x;
    my_struct test [x];
    for (int i=0; i<x; i++)
    {
    cout<<"Podaj dane(imie,nazwisko,wiek,departament):"<<endl;
    cin>> test[i].name;
    cin>>test[i].surrname;
    cin>>test[i].age;
    cin>>test[i].department;
    }
    cout<<"Podales nastepujace dane:"<<endl;
    for (int i=0; i<x; i++)
    {
    cout<< test[i].name<<" "<<test[i].surrname<<" "<<test[i].age<<" "<<test[i].department<<" "<<endl;
    }
    return 0;
}
