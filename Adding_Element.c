#include <stdio.h>

int main() {
    // Write C code here
    int a[4]={0,5,10,30};
    int b[5];
    int n=7,k;
    for(int i=0;i<=2;i++){
        if(a[i]<n&&n<a[i+1]){
           k= i+1;
           b[i+1]=n;
           break;
        }
    }
for(int i=0;i<=4;i++){
    if(i<k){
        b[i]=a[i];
    }
    else if(i>k){
        b[i]=a[i-1];
    }
    else if(i==k){
        continue;
    }
}
for (int i=0;i<=4;i++){
    printf("%d\n",b[i]);
}
    return 0;
}
