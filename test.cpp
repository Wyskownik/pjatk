#include <iostream>

using namespace std;

int liczba1;
int liczba2;
int liczba3;

int main() {

    cout << "Program sprawdzający która z 3 podanych liczb jest największa." << endl;
    cout << "Proszę o podanie pierwszej liczby: " << endl;

    cin >> liczba1; 

    cout << "Proszę o podanie drugiej liczby: " << endl;

    cin >> liczba2;
    
    cout << "Proszę o podanie trzeciej liczby: " << endl;

    cin >> liczba3;

    if(liczba1 > liczba2) { // sprawdzenie czy liczba pierwsza jest większa niż liczba druga.

        if(liczba1 > liczba3) { // sprawdzenie czy liczba pierwsza jest większa niż liczba trzecia.
            
            cout << "Liczba pierwsza jest największa" << endl;

        }
        else{
            return 0;
        }
    
    else if(liczba2 > liczba1) {


    }
    }
}