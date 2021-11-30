#include<stdio.h>
#include<stdlib.h>

#include "binary.h"

unsigned long long binary(unsigned long long val, unsigned long long arr[], unsigned int start, unsigned int end)
{
	//printf("val: %d, range: %d to %d\n", val, arr[start], arr[end]);
	if(val == arr[end]) return arr[end]; 
	if(start == end || end - start == 1) return arr[start];

	int mid = (start+end)/2;
	if(val > arr[mid]){
		return binary(val, arr, mid, end);
        }else{
		return binary(val, arr, start, mid);
	}
}
