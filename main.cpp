#include <iostream>
#include "SortS.h"
#include <time.h>
#include <stdlib.h>
#include <locale>
#define tam 10
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    float t, t1, t2, tF, tF2, tF3,DT;
    t=clock();
    srand(time(NULL));
    float  vetor[tam]={0};
    float vetor2[tam]={0};

    while(opcao!=0){
    cout << "Que tipo de numeros gostaria de trabalhar ?\n1-Inteiros\n2-Reais" <<endl;
    cin >> opcao;
    switch(opcao){
        case 1:
            t1=clock();
            for(int i=0;i<tam;i++){
            float x;
            x=rand()%200;
            vetor[i]=x;
            vetor2[i]=vetor[i];
            }
            for(int i=0;i<tam;i++){
                cout << vetor[i] << "|";
            }
            cout <<endl;

            QuickSort(vetor,0, tam);
            tF2=clock();

            for (int i=0;i<tam;i++){
                cout << vetor[i]<< "--";
            }
            cout << endl;

            InsertionSort(vetor2, tam);
            tF3=clock();
            for (int i=0;i<tam;i++){
                cout << vetor[i] << "||";
            }
            tF=clock();
            DT=(tF2-t1)-(tF3-tF2);
            if(DT<0){
                DT=DT*-1;
            }
            cout <<endl<<"Tempo de execucao total do programa:"<< (tF-t)*1000/CLOCKS_PER_SEC;
            cout<<endl<<"Tempo do algoritmo Quick:"<<(tF2-t1)*1000/CLOCKS_PER_SEC;
            cout<<endl<<"Tempo do algoritmo Insertion:"<<(tF3-tF2)*1000/CLOCKS_PER_SEC;
            cout<<endl<<"A diferença de tempo dos algoritmos:"<<DT*1000/CLOCKS_PER_SEC<<"segundo(s)."<<endl;
            break;

        case 2:
            t1=clock();
            for(int i=0;i<tam;i++){
            float x;
            x=rand()%200;
            vetor[i]=x/10;
            vetor2[i]=vetor[i];
            }
            for(int i=0;i<tam;i++){
                cout << vetor[i] << "|";
            }
            cout <<endl;

            QuickSort(vetor,0, tam);
            tF2=clock();

            for (int i=0;i<tam;i++){
                cout << vetor[i]<< "--";
            }
            cout << endl;

            InsertionSort(vetor2, tam);
            tF3=clock();
            for (int i=0;i<tam;i++){
                cout << vetor[i] << "||";
            }
            tF=clock();
            DT=(tF2-t1)-(tF3-tF2);
            if(DT<0){
                DT=DT*-1;
            }
            cout <<endl<<"Tempo de execucao total do programa:"<< (tF-t)*1000/CLOCKS_PER_SEC;
            cout<<endl<<"Tempo do algoritmo Quick:"<<(tF2-t1)*1000/CLOCKS_PER_SEC;
            cout<<endl<<"Tempo do algoritmo Insertion:"<<(tF3-tF2)*1000/CLOCKS_PER_SEC;
             cout<<endl<<"A diferença de tempo dos algoritmos:"<<DT*1000/CLOCKS_PER_SEC<<"segundo(s)."<<endl;

    }
}
    return 0;
}


