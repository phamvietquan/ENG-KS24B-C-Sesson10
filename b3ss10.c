#include <stdio.h>

int main(){
	int arr[]={2,4,7,3,9};
	int size=sizeof(arr)/sizeof(int);
	for(int i=1;i<size;i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && temp<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
		
	}
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	
	}
	
	return 0;
}

