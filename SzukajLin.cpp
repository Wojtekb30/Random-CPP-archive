#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N=10;

void Losuj(int A[])
{
    for(int i = 0; i < N; i++)
        A[i] = rand()%100;

}

void Wypisz(int A[])
{


    for(int i = 0; i < N; i++)
        cout<< A[i] << " ";
    cout<<endl;
}






int SzukajLin(int A[], int x)
{

    for (int i = 0; i < N;)
    {

        if(A[i]==x)
        {

            return 1;

        }
        else
        {
           i++;

        }
    }
return 0;

}





int main()
{
    int A[N];

    int x;
    srand(time(NULL));
    Losuj(A);
    Wypisz(A);

    cout << "Podaj liczbe do wyszukania:" << endl;
    cin >> x;


    cout << SzukajLin(A, x) << endl;


    if(SzukajLin (A, x))
    {
        cout << "Liczba znajduje sie w tablicy (LIN)" << endl;


    }
    else
    {

        cout << "Liczby nie ma w tablicy (LIN)" << endl;
    }


    return 0;
}
