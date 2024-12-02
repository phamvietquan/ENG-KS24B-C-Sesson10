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
	int value;
	int start=0;
	int end=sizeof(arr)/sizeof(int);
	int mid;
	int flag=-1;
	printf("moi ban nhap vao mot so nguyen bat ky: ");
	scanf("%d", &value);
		while(start<=end){
			mid=(start+end)/2;
			if(arr[mid]==value){
				flag=mid;
				break;
			}else if(arr[mid]>value){
				end=mid-1;
			}else{
				end=mid+1;
			}
		}if(flag!=-1){
			printf("Phan tu trong nam o vi tri thu: %d",mid);
		}else{
			printf("Khong co phan tu trong mang ");
		}
	
	return 0;
}

