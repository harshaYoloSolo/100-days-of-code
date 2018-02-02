/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int maxtinow;
int maxending;

int large(int *a,int n){
	maxtinow=0;
	maxending=0;
	int i;
	for(i=0;i<n;i++){
			maxending = maxending + a[i]; 
		if(maxending < 0){
			maxending = 0;
		}
		if(maxtinow < maxending){
			maxtinow = maxending;
		}
	}
	return maxtinow;
}
int main(){
	int i,a[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int z = large(a,n);
	printf("%d\n",z);
	return 0;
}