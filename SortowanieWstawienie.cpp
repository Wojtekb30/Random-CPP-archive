#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N = 20;
void Losuj(int A[])
{
    for(int i=1; i<=N; i++)
        A[i]=rand()%100;

}
void Wypisz(int A[])
{
    for(int i=1; i<=N; i++)
        cout<<A[i]<<" ";

    cout<<endl;

}

void Sortuj(int A[])
{
    int i, j;
    for(i =2; i<=N; i++)
    {

        A[0]=A[i];
        j=i-1;
        while(A[j]>A[0])
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=A[0];
    }

}

int main()
{
    int A[N+1];
    srand(time(NULL));
    Losuj(A);
    cout<<"Wylosowane liczby to: " <<endl;
    Wypisz(A);
    Sortuj(A);
    cout<<"Po uporzadkowaniu to:"<<endl;
    Wypisz(A);
    return 0;
}
