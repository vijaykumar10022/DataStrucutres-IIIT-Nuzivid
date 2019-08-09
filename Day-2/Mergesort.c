#include<stdio.h>
void getvalues(int size,int ms[]){
	FILE *fv=fopen("input.txt","r");
	for(int i=0;i<size;i++){
		fscanf(fv,"%d",&ms[i]);
	}
}
void display(int size,int ms[]){
	for(int i=0;i<size;i++){
		printf("%d ",ms[i]);
	}
}
void merge_array(int a,int b,int c,int d,int ms[]){
	int t[50];
	int q=0;
	while(a<=b&&c<=d){
		if(ms[a]<ms[c]){
			t[q]=ms[a]
			q++;
			a++;
		}
		else{
			t[q]=ms[c];
			q++;
			c++;
		}
	} 
		
}
void merge_sort(int s,int e,int ms[]){
	int m;
	if(s<e){
		m=(s+e)/2;
		merge_sort(s,m,ms);
		merge_sort(m+1,e,ms);
		merge_array(s,m,m+1,e,ms);
	}
} 
int main(){
	int size;
	FILE *fs=fopen("size.txt","r");
	fscanf(fs,"%d",&size);
	int ms[size];
	getvalues(size,ms);
	printf("Before Sorting:");
	display(size,ms);
	merge_sort(0,size,ms);
	return 0;
}
