#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int N=20;

void Losuj(int A[])
{
    int x=rand()%100;
    for (int i=0; i<N; i++)
        if (rand()%2==0) A[i]=rand()%100;
        else A[i]=x;


}
void Wypisz(int A[])
{

    for (int i=0; i<N; i++)
    {

        cout<<A[i]<<" ";

    }

}


int SzukajLidera(int A[])
{
int i, kandydat, ile =0;
sort(A, A+N);
kandydat=A[N/2];

for(i=0; i<N; i++)
{
if(A[i]==kandydat)
ile++;


}
if (ile>N/2)
return kandydat;
else
return -1;

}


int main()
{
    srand(time(NULL));
    int A[N];
    int lider;
    Losuj(A);
    Wypisz(A);
    lider = SzukajLidera(A);
    if(lider==-1)
        cout<<endl<< "W tablicy nie ma lidera";
    else
        cout<<endl<< "W tablicy jest lider";

    return 0;
}
