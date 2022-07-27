#include <stdio.h>

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void Selection_Sort(int arr[], int n){
	int i, j, k;
	for (i = 0; i < n-1; i++){
		k = i;
		for (j = i+1; j < n; j++){
		    if (arr[j] < arr[k]){
			    k = j;
            }
        }
		swap(&arr[k], &arr[i]);
	}
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

	Selection_Sort(arr, n);

	printf("Sorted array : \n");
	for (int i=0;i<n;i++){
		printf("%d ", arr[i]);
    }
	printf("\n");

	return 0;
}
