#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <cmath>
using namespace std;

int B[50];

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void bubbleSort(int arr[], int n, int k)  
{  
    int i, j; 
    int cont=0; 
    for (i = 0; i < n-1; i++)
    {     
        for (j = 0; j < n-i-1; j++)  
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]); 
                cont=cont+1; 
            }
        } 
    }
    B[k]=cont;
}

void print(int A[], int size)  
{  
    int i;  
    int r;
    for (i = 0; i < size; i++)
    {  
        r = B[i];
        cout <<"La mejor cantidad de swaps de trenes es "<<r<<" swaps"<<endl;  
    }
    cout << endl;  
}  

int main()
{
    int n;
    cin>>n; //numero de entradas
    int a;
    int b;
    
    for ( int i = 0; i < n; i++)
    {
        cin>>a;
        int A[a];
        for( int j = 0; j < a; j++)
        {
            cin>>b;
            A[j]=b;
        }
        bubbleSort(A,a,i);
    }
    print(B,n);
}