#include<stdio.h>
int main(){
    int T;
    while (T--)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
        for(int i=1;i<n;i+=2){
            if(array[i]%array[i-1]==0){
                printf("%d\n",array[i]);
            }

        }
        T--;
    }
    
    return 0;
}