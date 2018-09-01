// Gerardo Mauricio Gutierrez Quintana
// Matricula A00815174
// Homework #1 
// Gauss Reduction

#include <iostream>

using namespace std;

double A[3][3] = {{3,1,-9},{3,2,10},{2,1,7}};
double b[3] = {10,13,9};
int i, j, k; 

int main(){
	int N = 2;
	for (k = 0; k < N; k++){
	//Normalize pivoting row
		for (j = k+1; j <= N; j++){
			A[k][j] = A[k][j] / A[k][k];
		}
		b[k] = b[k] / A[k][k];
		A[k][k] = 1;
 		//Reduce rows below pivot
		for (i = k+1; i <= N; i++){
			//Reduce columns after pivot
			for (j = k+1; j <= N; j++){
				A[i][j] = A[i][j] - A[i][k] * A[k][j];
			}
			b[i] = b[i] - A[i][k] * b[k];
			A[i][k] = 0;
		}
	}

	for (i = 0; i <= N; i++){
		cout << b[i] << " " << endl;
	}

	return 0;
}