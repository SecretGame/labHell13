#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool C[][N]){
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void inputMatrix(double C[][N]){
    for(int i=0;i<N;i++)
    {
        cout<<"Row "<<i+1<<": ";
        for(int j=0;j<N;j++)
        {
        cin>>C[i][j];
        }
    }
}

void findLocalMax(const double A[][N], bool B[][N])
{
    for(int a=0;a<N;a++)
    {
        for(int b=0;b<N;b++)
        {
            B[a][b]=0;
        }
    }
    
    for(int a=1;a<N-1;a++)
    {
        for(int b=1;b<N-1;b++)
        {
            if(A[a][b]>=A[a-1][b] && A[a][b]>=A[a][b-1] && A[a][b]>=A[a+1][b] && A[a][b]>=A[a][b+1])
            {
                B[a][b]=1;
            }
        }
    }
}