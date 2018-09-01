// Gerardo Mauricio Gutierrez Quintana
// Matricula A00815174
// Homework #1 
// Bucket sort

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int getMax(int arr[], int N) {
	int i, m = arr[0];
	for(i = 1; i < N; i++) {
		if(arr[i] > m) {
			m = arr[i];
		}
	}
	return m;
}

void bucketSort(int arr[], int N){
    int bucket = 10;
    vector<int> b[bucket];

    int max = getMax(arr, N);

    int divider = ceil(float(max + 1) / bucket);

    for (int i = 0; i < N; i++) {
        int bi = floor( arr[i] / divider );
        b[bi].push_back(arr[i]);
    }

    for (int i = 0; i < bucket; i++)
        sort(b[i].begin(), b[i].end());

    int index = 0;
    for (int i = 0; i < bucket; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}

int main(){
	int N = 7;
	int arr[] = {29, 25, 3, 49, 9, 37, 21};
    bucketSort(arr, N);

    for (int i = 0; i < N; i++)
    	cout << arr[i] << " ";
    cout << endl;
    return 0;
}