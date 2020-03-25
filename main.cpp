#include <stdio.h>
 
int max(int *iptr[], int n); 
int main() {
    int n, i;
    int array[100];
    int *iptr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &(array[(i + 3) % n]));
        iptr[i] = &(array[(i + 3) % n]);
    }   
    printf("%d\n",max(iptr, n));
    return 0;
}

int max(int *iptr[], int n){ 
    int maxNum = **iptr;

    for(int i = 0; i < n; i++){
        if(maxNum < **iptr){ 
            maxNum = **iptr;
        }   
        iptr++;
    }   
    return maxNum;
}
