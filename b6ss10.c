#include <stdio.h>

int main(){
	int arr[]={1,3,5,3,7,3,9};
	int number[100];
	int size=sizeof(arr)/sizeof(int);
	int n,j, count=0;
	printf("Moi ban nhap vao phan tu muon tim: ");
	scanf("%d", &n);
	int flag=-1;
	for(int i=0;i<size;i++){
		if(arr[i]==n){
			flag=i;
			number[count++]=i;
		}
	}
	if(flag!=-1){
		printf("Phan tu o vi tri thu %d\n", flag);
		for(int i=0;i<count;i++){
			printf("number[%d]\n", number[i]);
		}
	}else{
		printf("Phan tu khong co trong mang ");
	}
	return 0;
}
