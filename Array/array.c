#include <stdio.h>
int main(){
    int array[] = {12, 45, 67,89, 34, 67, 12, 45,100};
    int size = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    for(int i = 1; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("Nilai terbesar dari array adalah : %d\n", max);
    //printf("%d", max);
}