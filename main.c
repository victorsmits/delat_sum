#include <stdio.h>

int delta_sum(int *arr,int N);
int abs(int neg);

int main() {
    int data[] = {2, -12, -8, -1, 4, -2, 3, 8};
    printf("%d",delta_sum(data, 3));
    printf("\n%d",delta_sum(data, 8));
    printf("\n%d",delta_sum(data, 6));
}

int delta_sum(int *arr,int N){
    int pos=0;
    int neg=0;
    for(int i = 0; i<N;i++){
        if(arr[i]>0){
           pos += arr[i];
        } else{
            neg += arr[i];
        }
    }
    int result = pos -neg;
    return abs(result);
}
int abs(int x){
    if(x>0)
        return x;
    return -x;
}