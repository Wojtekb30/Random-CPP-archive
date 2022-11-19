#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N = 10;
void Losuj(int A[])
{
    for(int i=0; i<N; i++)
        A[i]=rand()%100;

}
void Wypisz(int A[])
{
    for(int i=0; i<N; i++)
        cout<<A[i]<<" ";

    cout<<endl;

}
//Babelkowe
//void Sortuj(int A[])
//{
  //  int i, j, pom;
    //for(i=1; i<N; i++)
 //   {
   //     for (j=0; j<N-i; j++)
     //   {
       //     if(A[j]>A[j+1])
        //    {
      //          pom = A[j];
    //            A[j] = A[j+1];
  //              A[j+1]=pom;
//
      //      }
    //    }
  //  }
//}

//Przez wybieranie
void Sortuj(int A[])
{
    int i, j, m, pom;
    for(i=0; i<N-1; i++)
    {
    m=i;
        for (j=i+1; j<N; j++)

            if(A[j]<A[m]) m=j;

                pom = A[i];
                A[i] = A[m];
                A[m]=pom;



    }
}

int main()
{
int A[N];
srand(time(NULL));
Losuj(A);
cout<<"Wylosowane liczby to: " <<endl;
Wypisz(A);
Sortuj(A);
cout<<"Po uporzadkowaniu to:"<<endl;
Wypisz(A);
return 0;
}
