#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <cmath>
using namespace std;

int B[50];
int contador=0;

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
int partition (int arr[], int low, int high)  
{  
    int cont=0;
    int pivot = arr[high]; 
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        if (arr[j] <= pivot)  
        {  
            i++;
            for(int g=j;g>=i+1;g--)
            {
                swap(&arr[g-1], &arr[g]);
                cont=cont+1;
            }  
        }  
    }
    for(int g=high;g>=i+2;g--)
    {
        swap(&arr[g-1], &arr[g]); 
        contador=contador+cont+1;
    } 
    return (i + 1);  
}  
  
void quickSort(int arr[], int low, int high, int i)  
{  
    if (low < high)  
    {
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1,i);  
        quickSort(arr, pi + 1, high,i);  
    }  
    B[i]=contador;
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

void printArray(int A[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << A[i] << " ";  
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
        quickSort(A,0,a-1,i);
        contador=0;
    }
    print(B,n);

}