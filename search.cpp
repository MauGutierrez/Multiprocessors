// Gerardo Mauricio Gutierrez Quintana
// Matricula A00815174
// Homework #1 
// Search

#include <iostream>

using namespace std;

int main(){
	int N = 5;
	int A[5] = {2, 4, 6, 8, 10};
	int x = 10;
	int present = false;
	for (int i = 1; !present && i <= N; i++)
		if ( A [i] == x){ 
			present = true;
			cout << "It is present" << endl;
		}
	return 0;
}