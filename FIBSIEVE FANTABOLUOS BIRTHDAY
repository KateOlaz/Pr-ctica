//FIBSIEVE FANTABOLUOS BIRTHDAY

#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long n){
       long long squareRootN=(long long)round((sqrt(n)));

        if(squareRootN*squareRootN == n) {
           return true; 
        }
        else 
        {
           return false; 
        }
}

int main()
{
	long long b,n,a,x;
	long long nc;
	long long nf;
	//cin>>b;
	//for(long long i=0;i<b;i++)
	{
		
		//cin>>n;
		n=pow(10,15);
		x = sqrt(n);
		if(isPerfectSquare(n))
		{
			if(n%2==0)
			{
				cout<<"Fila: "<<x<<endl;
				cout<<"Columna: 1"<<endl;
			}
			else
			{
				cout<<"Fila: 1"<<endl;
				cout<<"Columna: "<<x<<endl;
			
			}
		}
				
		else
		{
			a = n-(x*x);
			if(a>x+1)
			{
				nc=2*(x+1)-a;
				nf=x+1;
			}
			else 
			{
				nc=x+1;
				nf=a;	
			}

			if(x%2==0)
			{
				cout<<"Fila: "<<nc<<endl;
				cout<<"Columna:"<<nf<<endl;
			}
			else
			{
				cout<<"Fila: "<<nf<<endl;
				cout<<"Columna:"<<nc<<endl;
			}
		}
	}

	return 0;

}
