#include<stdio.h>
void readarray(int size,int bs[]){
	FILE *Fv=fopen("input.txt","r");
	for(int i=0;i<size;i++){
		fscanf(Fv,"%d",&bs[i]);
	}
}
void binary_search(int se,int n,int bs[]){
	int first=0;
	int last=n-1;
	int mid=(first+last)/2;
	while(se!=bs[mid]&&first<=last){
		if(se>bs[mid]){
			first=mid+1;
		}
		else{
			last=mid-1;
		}
		mid=(first+last)/2;
	}
	if(se==bs[mid]){
		printf("%d is found at location %d",se,mid+1);
	}
	else{
		printf("%d is not found",se);
	}
}
int main(){
	int size;
	FILE *fs=fopen("size.txt","r");
	fscanf(fs,"%d",&size);
	int bs[size];
	readarray(size,bs);
	int se;
	fscanf(fs,"%d",&se);
	binary_search(se,size,bs);
	return 0;
}
