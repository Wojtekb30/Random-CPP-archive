#include <iostream>

using namespace std;
int operacja, liczbaa, liczbab;
int main()
{

    cout << "Witaj w kalkulatorze! Na poczatek wybierz operacje wpisujac liczbe 1, 2, 3 lub 4:" << endl;
        cout << "Welcome to the calculator! First choose operation by typing 1, 2, 3 or 4:" << endl;
                cout << "1 +" << endl;
                        cout << "2 -" << endl;
                                cout << "3 *" << endl;
                                        cout << "4 /" << endl;
cin >> operacja;

if ((operacja==1)or(operacja==2)or(operacja==3)or(operacja==4)) {

if ((operacja==1)) {
cout << "Wybrano dzialanie X+Y" << endl;
cout << "X+Y operation has been chosen" << endl;
cout << "Wpisz pierwsza liczbe (X):" << endl;
cout << "Type first number (X):" << endl;
cin >> liczbaa;
cout << "Wpisz druga liczbe (Y):" << endl;
cout << "Type second number (Y):" << endl;
cin >> liczbab;
cout << "Wynik:" << endl;
cout << "Result:" << endl;
cout << liczbaa + liczbab << endl;
return 0;

}
else {
if ((operacja==2)) {
cout << "Wybrano dzialanie X-Y" << endl;
cout << "X-Y operation has been chosen" << endl;
cout << "Wpisz pierwsza liczbe (X):" << endl;
cout << "Type first number (X):" << endl;
cin >> liczbaa;
cout << "Wpisz druga liczbe (Y):" << endl;
cout << "Type second number (Y):" << endl;
cin >> liczbab;
cout << "Wynik:" << endl;
cout << "Result:" << endl;
cout << liczbaa - liczbab << endl;

}
else {
if ((operacja==3)) {
cout << "Wybrano dzialanie X*Y" << endl;
cout << "X*Y operation has been chosen" << endl;
cout << "Wpisz pierwsza liczbe (X):" << endl;
cout << "Type first number (X):" << endl;
cin >> liczbaa;
cout << "Wpisz druga liczbe (Y):" << endl;
cout << "Type second number (Y):" << endl;
cin >> liczbab;
cout << "Wynik:" << endl;
cout << "Result:" << endl;
cout << liczbaa * liczbab << endl;

}
else {
if ((operacja==4)) {
cout << "Wybrano dzialanie X/Y" << endl;
cout << "X/Y operation has been chosen" << endl;
cout << "Wpisz pierwsza liczbe (X):" << endl;
cout << "Type first number (X):" << endl;
cin >> liczbaa;
cout << "Wpisz druga liczbe (Y):" << endl;
cout << "Type second number (Y):" << endl;
cin >> liczbab;
cout << "Wynik:" << endl;
cout << "Result:" << endl;
cout << liczbaa / liczbab << endl;

}
else {

cout << "Blad" << endl;
        cout << "Error" << endl;
        return 0;

}
}
}
}
}
else {
          cout << "Zle wpisano numer operacji. Uruchom ponownie program i sprobuj ponownie." << endl;
        cout << "Incorrect operation number. Restart program and try again." << endl;
        return 0;
}
    return 0;
}
