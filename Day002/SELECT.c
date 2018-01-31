/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }   
    else{
        return fact(n-1)*n;
    }
}
int compute(int n,int k){
        int formula=(fact(n-1)/(fact(n-1-(k-1))*fact(k-1)));
        return formula;
}
int main()
{   int t,n,k,ans;
    scanf("%d",&t);

    while(t>0){
        scanf("%d%d",&n,&k);
        ans=compute(n,k);
        printf("%d",ans);
        t--;
    }
    return 0;
}



