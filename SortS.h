#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED

using namespace std;

template <typename T>
T dividir(T vetor[], int esq, int dir){
    float aux; // Aux para troca de posições;
    int cont=esq;
    for(int i=esq+1;i<=dir;i++){
        if(vetor[i]<vetor[esq]){
            cont++;
            aux=vetor[i];
            vetor[i]=vetor[cont];
            vetor[cont]=aux;
        }
    }
    aux=vetor[esq];
    vetor[esq]=vetor[cont];
    vetor[cont]=aux;

    return cont;
}
template <typename T>
T QuickSort(T vetor[], int esq, int dir){
    float pos;
    if(esq<dir){
        pos = dividir(vetor,esq,dir);
        QuickSort(vetor,esq, pos-1);
        QuickSort(vetor, pos+1,dir);
    }
return 0;
}

template <typename T>
T InsertionSort(T vetor[], int tam){
    int i, j;
    float num;
    for(i=1;i<tam;i++){
        num= vetor[i];
        j=i-1;
        while((j>=0)&&(num<vetor[j])){
            vetor[j+1]=vetor[j];
            j--;
        }
        vetor[j+1]=num;
    }

return 0;
}
#endif // SORTS_H_INCLUDED
