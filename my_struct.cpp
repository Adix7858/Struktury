//struktura dla u¿ytkowników forum------
#include <iostream>
#include <string>
#include <conio.h>
//struktura dla u¿ytkowników forum
struct Uzytkownicy_DDT //deklaracja struktury
{
    //opis struktur
    std::string nik;
    std::string haslo;
    short lp;
    std::string status;
    std::string rodzaj_konta;
};

int main()
{
    using namespace std;
    //Tworzenie obiektu struktury i wype³nianie-------
    Uzytkownicy_DDT PiotrSzawdynski =
    {
        "PiotrSzawdynski",
        "!@#$%%^",
        1,
        "Aktywny",
        "Admin"
    };
    /*WA¯NE dla niektórych kompilatorów nale¿y
    u¿yæ zapisu static Uzytkownicy_DDT PiotrSzawdynski =*/
    Uzytkownicy_DDT Pietrzuch =
    {
        "Pietrzuch",
        "@m@m$@#@",
        24,
        "Aktywny",
        "Moderator"
    };
    /*inny sposób wprowadzania danych do
        obiektu*/
    //tworzenie obiektu
    Uzytkownicy_DDT Piotrus_Pan;
    /*wype³nianie obiektu wartoœciami dla
        poszczególnych typów danych*/
    Piotrus_Pan.haslo = "PanPiotr";
    Piotrus_Pan.lp = 927;
    Piotrus_Pan.nik = "Piotrus_Pan";
    Piotrus_Pan.rodzaj_konta = "Uzytkownik";
    Piotrus_Pan.status = "zablokowany";

    //wyœwietlenie obiektów
    cout << "Oto lista uzytkownikow forum DDT"
    << endl << "Nik " << PiotrSzawdynski.nik
    << endl << "haslo " << PiotrSzawdynski.haslo
    << endl << "Nr usera " << PiotrSzawdynski.lp
    << endl << "Status " << PiotrSzawdynski.status
    << endl << "Rodzaj Konta "
    << PiotrSzawdynski.rodzaj_konta
    << endl
    << endl << "Nik " << Pietrzuch.nik
    << endl << "haslo " << Pietrzuch.haslo
    << endl << "Nr usera " << Pietrzuch.lp
    << endl << "Status " << Pietrzuch.status
    << endl << "Rodzaj Konta "
    << Pietrzuch.rodzaj_konta
    << endl
    << endl << "Nik " << Piotrus_Pan.nik
    << endl << "haslo " << Piotrus_Pan.haslo
    << endl << "Nr usera " << Piotrus_Pan.lp
    << endl << "Status " << Piotrus_Pan.status
    << endl << "Rodzaj Konta "
    << Piotrus_Pan.rodzaj_konta;

    getch();
    return( 0 );
}
