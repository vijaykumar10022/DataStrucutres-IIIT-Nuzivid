#include<stdio.h>
void read_array(int arr[],int size){
		FILE *fv=fopen("input.txt","r");
		int i;
		for(i=0;i<=size-1;i++){
			fscanf(fv,"%d",&arr[i]);
		}
}
void display_array(int arr[],int size){
		int i;
		for(i=0;i<=size-1;i++){
			printf("%d ",arr[i]);//5 1 2 6 3 
		}
}
int partition(int a[],int start,int end){//5 1 2 6 3  0  4
		int pivot=a[end];//pi=a[6]-->4
		int pindex=start;//pin=0
		for(int i=start;i<end;i++){//
			if(a[i]<=pivot){//a[0]<=3-->5<3,a[1]<=pi-->1<=3
				//seaw(a[i],a[pindex]);
				int temp=a[i];//temp=1
				a[i]=a[pindex];//a[1]=a[0]-->5
				a[pindex]=temp;//a[0]=1
				pindex++;
			}
		}//swap(a[pindex],a[end])
		int temp=a[pindex];
		a[pindex]=a[end];
		a[end]=temp;
		return pindex;
}
void quick_sort(int a[],int start,int end){ // 5 1 2 6 3  0   4
		if(start<end){//0 <4
			int pindex=partition(a,start,end-1);//5 1 2 6 3 0 4
			quick_sort(a,start,pindex-1);
			quick_sort(a,pindex+1,end);
		}
}
int main(){
	int size;
	FILE *fs=fopen("size.txt","r");
	fscanf(fs,"%d",&size);
	int arr[size];
	read_array(arr,size);
	printf("\nBefore Sorting :");
	display_array(arr,size);
	quick_sort(arr,0,size);
	printf("\n");
	printf("\nAfter Sorting :");
	display_array(arr,size);
	return 0;
}

