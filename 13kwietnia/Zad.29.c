#include <stdio.h>
#include <stdlib.h>


int sumAboveThreshold(int k,int n,int arr[]){
    int suma =0;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            suma+=arr[i];
        }

    }return suma;

}
