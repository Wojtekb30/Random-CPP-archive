#include <iostream>
#include <cstdlib>
#include <ctime>
const int N=10;
int omega;
int control;
int A[N];
int B[N];
int C[N];
using namespace std;



void LosujSortuj()
{
    for(int i = 0; i < N; i++)
    {

        omega = rand()%100;
        if ((omega%2)==1)
        {
            A[i]=omega;
            B[i]=0;
        }
        else
        {
            B[i]=omega;
            A[i]=0;
        }

    }
    for(int alfa=0; alfa<N; alfa++)
    {
        if((A[alfa])!=0)
        {
            C[control]=A[alfa];

            control=control+1;
        }
        else
        {
            C[alfa]=0;
        }
    }


    for(int beta=0; beta<N; beta++)
    {
        if ((B[beta])>0)
        {
            C[control]=B[beta];

            control=control+1;
        }
    }

}


void Wypisz()
{


    for(int woj=0; woj < N; woj++)
        cout<< C[woj] << " ";
    cout<<endl;
}


int main()
{

    srand(time(NULL));
    LosujSortuj();


    Wypisz();

    return 0;
}
