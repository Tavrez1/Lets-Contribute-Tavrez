#include<stdio.h>
void main(){
    int arr[]={12,14,15,98,9,43,21,56};
    for(int i=0;i<8;i++){
        if(i%2==0){
            printf("%d ",2*arr[i]);
        }
    }
}