#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    int pkt = 0;
    cout << " Quiz o grzybach\n";

    cout << "Jaki jest najbardziej trujacy grzyb w polsce?"<<endl;
    cout << "a) Muchomor sromotnikowy"<<endl;
    cout << "b) Muchomor czerwieniejacy"<<endl;
    cout << "c) Muchomor twardawy"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "a")
    {
       cout << "Poprawna odpowiedz!";
       pkt++;
    }
    else
    {
        cout << "Zle! Poprawna odpowiedzia jest muchomor sromotnikowy!";

    }
    Sleep(500);system("cls");

        cout << "Znane przyslowie 'Leprzy .. niz nic'"<<endl;
    cout << "a) maslak"<<endl;
    cout << "b) kozlarz"<<endl;
    cout << "c) rydz"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "c")
    {
       cout << "Poprawna odpowiedz!";
       pkt++;
    }
    else
    {
        cout << "Zle! Przyslowie brzmi lepszy rydz niz nic!";

    }
    Sleep(500);system("cls");

     cout << "Potoczna nazwa borowika szlachetnego to"<<endl;
    cout << "a) prawdziwek"<<endl;
    cout << "b) podgrzybek"<<endl;
    cout << "c) kozak"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "a")
    {
       cout << "Poprawna odpowiedz!";
       pkt++;
    }
    else
    {
        cout << "Zle! Borowik szlachetny lepiej jest znany jako prawdziwek!";

    }
    Sleep(500);system("cls");

     cout << "'Nozka' grzyba to tzw"<<endl;
    cout << "a) baza"<<endl;
    cout << "b) trzon"<<endl;
    cout << "c) rdzen"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b")
    {
       cout << "Poprawna odpowiedz!";
       pkt++;
    }
    else
    {
        cout << "Zle! Nozke grzyba nazywamy trzonem!";

    }
    Sleep(500);system("cls");

    cout << "Czy grzyby rosnace na drzewach nadaja sie do jedzenia?"<<endl;
    cout << "a) wiekszosc jest nie jadalna, lecz wystepuja gatunki jadalne"<<endl;
    cout << "b) tak mozna po odpowiednim przygotwaniu spozyc kazdy gatunek "<<endl;
    cout << "c) wszystkie grzyby rosnace na drzewach sa nie jadalne"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "a")
    {
       cout << "Poprawna odpowiedz!";
       pkt++;
    }
    else
    {
        cout << "Zle! Niektore gatunki mozna spozyc po odpowienim przygotowaniu w kuchni!";

    }
    Sleep(3000);system("cls");

    cout<<"Uzyskales:"<<pkt<<" punktow";


    return 0;
}
