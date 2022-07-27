#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int l, int h) {
    int k = array[h];
    int i = (l - 1);
    for (int j = l; j < h; j++){
        if (array[j] <= k){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[h]);
    return (i + 1);
}

void Quick_Sort(int array[], int l, int h) {
    if (l < h){
        int p = partition(array, l, h);
        Quick_Sort(array, l, p - 1);
        Quick_Sort(array, p + 1, h);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    Quick_Sort(arr, 0, n - 1);
    
    printf("Sorted array is : \n");
    for (int i = 0; i < n; ++i) {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    return 0;
}