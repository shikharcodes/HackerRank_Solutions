#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    printf("%d", sum);
    free(arr); 
    return 0;
}
