// Gerardo Mauricio Gutierrez Quintana
// Matricula A00815174
// Homework #1 
// Floyd Algorithm

#include <iostream>

using namespace std;

#define INF 99999
#define N 5 
int A[N][N] = {{0, 8, 3, 5, INF}, {8, 0, 2, 13, 5}, {INF, 1, 0, 3, 4}, {6, 14, 9, 0, 7}, {INF, 5, INF, INF, 0}};

void floyd(){
	for (int k = 0; k < N; k++){
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if (A[i][k] + A[k][j] < A[i][j]){
					A[i][j] = A[i][k] + A[k][j];
				}
			}
		}
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (A[i][j] < 10){
				cout << A[i][j] << "  ";
			}
			else
				cout << A[i][j] << " ";
		}
		cout << endl;
	}

}

int main(){
	floyd();
	return 0;
}
