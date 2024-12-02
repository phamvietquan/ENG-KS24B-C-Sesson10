#include <stdio.h>

int main(){
	int arr[5]={4,1,5,3,2};
	
	int index;
	for(int i=0;i<5;i++){
		int min=i;	
		for(int j=i;j<5;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			int temp;
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	for(int i=0; i<5;i++){
		printf("%d\t", arr[i]);
	}

	return 0;
}

