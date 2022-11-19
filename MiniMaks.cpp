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


void MiniMaks(int W[], int &mini, int &maks)
{
    if (W[0]>W[1])
    {
        mini=W[1];
        maks=W[0];
    }
    else
    {
        mini=W[0];
        maks=W[1];
    }
    for (int i=2; i<N-1; i+=2)
        if (W[i]>W[i+1])
        {
            if (W[i+1]<mini) mini=W[i+1];
            if (W[i]>maks) maks=W[i];

        }
        else
        {
            if (W[i]<mini) mini=W[i];
            if (W[i+1]>maks) maks=W[i+1];

        }

cout<<"Min: "<<mini<<endl;
cout<<"Max: "<<maks<<endl;
}


int main()
{
    int A[N];


    int y;
    int x;
    srand(time(NULL));
    Losuj(A);
    Wypisz(A);
    MiniMaks(A, x, y);



    return 0;
}
