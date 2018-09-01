// Gerardo Mauricio Gutierrez Quintana
// Matricula A00815174
// Homework #1 
// Bubble sort

#include <iostream>
using namespace std;

#define N 5
int arr[N] = {14, 33, 27, 35, 10};

void bubbleSort(){
	bool swapped = true;
	int j = 0;
	int tmp;

	while (swapped){
		swapped = false;
		j++;
		for (int i = 0; i < N - j; i++){
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}
	}

	for (int i = 0; i < N; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	bubbleSort();
	return 0;
}