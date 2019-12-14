#include <stdio.h>
#include <stdlib.h>
int main(){
int tank=0;
int pump=0;
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
    int l,km;
    scanf("%d %d",&l,&km);
    tank+=l-km;
    if(tank<0){
        pump=i+1;
        tank=0;
    }
}
printf("%d",pump);


    return 0;
}
