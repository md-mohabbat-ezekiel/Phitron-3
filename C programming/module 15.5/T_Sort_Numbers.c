#include <stdio.h>
void sortNumbers(int *ar, int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i]>ar[j]){
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d\n", ar[i]);
    }
    printf("\n");
}
int main()
{
    int ar[3];
    for(int i=0; i<3; i++){
        scanf("%d", &ar[i]);
    }
    int a=ar[0], b=ar[1], c=ar[2];
    sortNumbers(ar, 3);
    printf("%d\n%d\n%d\n", a,b,c);

    return 0;
}