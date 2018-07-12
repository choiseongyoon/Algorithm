#include <stdio.h> 
int d[301];
int stair[301]={0,};
int max(int a, int b){ 
return a > b ? a : b;
} 
int main(){ 
int n; 
scanf("%d", &n); 
for(int i=1;i<=n;i++){
scanf("%d",&stair[i]);
}

d[1]=stair[1];

for (int i=2; i<=n; i++){ 
d[i]=max(stair[i-1]+d[i-3],d[i-2])+stair[i];
} 

printf("%d\n", d[n]); 
}
