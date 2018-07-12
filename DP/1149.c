#include <stdio.h> 
int a[1001][4];
int d[1001][4];
int flag;
int min(int a, int b){ 
return a < b ? a : b;
} 

int main(){ 
int n; 
scanf("%d", &n); 

for(int i=1;i<=n;i++){
for(int j=1;j<=3;j++){
scanf("%d",&a[i][j]);
}
}

d[0][1]=d[0][2]=d[0][3]=a[0][1]=a[0][2]=a[0][3]=0;
for (int i=1; i<=n; i++){ 
d[i][1]=min(d[i-1][2],d[i-1][3])+a[i][1];
d[i][2]=min(d[i-1][1],d[i-1][3])+a[i][2];
d[i][3]=min(d[i-1][1],d[i-1][2])+a[i][3];
} 

printf("%d\n",min(d[n][3],min(d[n][1],d[n][2]))); 
}
