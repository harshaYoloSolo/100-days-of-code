/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int compute(int n)
{    int coins[100]={0};
     int i;
     
    for(i=1;i<=n;i++){
        int div=((coins[i/2])+(coins[i/3])+(coins[i/4]));
        if(i>=div){
            coins[i]=i;
       
        }
        else
            coins[i]=div;
    }
            return coins[n];
    
}
int main(void) {
	// your code goes here
    int t,N;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&N);
        int max = compute(N);
        printf("%d\n",max);
        t--;
    }
}



