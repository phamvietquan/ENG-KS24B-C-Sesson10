#include <stdio.h>

int main(){
	int arr[5]={3,1,5,7,4,};
	for(int i=0; i<5;i++){
		for (int j=0; j<5-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d\t", arr[i]);
	}
	
	

	return 0;
}

