//size -->8
//input -->8 6 4 3 1 12 98 11
//output:location-->3rd
		 //~ index --->2nd
		 //~ position-->3rd 
		 
#include<stdio.h>
void readarray(int size,int ls[]){
	FILE *fv=fopen("input.txt","r");
	for(int i=0;i<size;i++){
		fscanf(fv,"%d",&ls[i]);
	}
	fclose(fv);
}
void displayarray(int size,int ls[]){
	for(int i=0;i<size;i++){
		printf("%d ",ls[i]);
	}
}
void leanear_search(int s,int si,int ls[]){
	int temp=0,i;
	for(i=0;i<si;i++){
		if(s==ls[i]){
			temp++;
			break; 
		}
	}
	if(temp==1){
		printf("\n%d is found at location %d",s,i);
	}
	else{
		printf("\n%d is not found in list",s);
	}
}
int main(){
	FILE *fs=fopen("size.txt","r");
	int size;
	fscanf(fs,"%d",&size);
	int ls[size];
	readarray(size,ls);
	displayarray(size,ls);
	int search;
	fscanf(fs,"%d",&search);
	leanear_search(search,size,ls);
	fclose(fs);
	
	return 0;
}
