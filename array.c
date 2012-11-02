#include <stdio.h>

#define N 100000
int arr[N];
int k = N/2;

int main() {
	for (int i=0; i<N; i++) arr[i] = i;
	for (int i=0; i<100*N; i++) k = arr[k];
	printf("%d\n",k);
}
