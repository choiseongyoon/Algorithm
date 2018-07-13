#include <stdio.h> 
int input[101][101];
int n;

int main(){

	scanf("%d", &n);
	for(int i= 1; i<=n; i++)
	{
		for(int j=1; j<=n; j++){
			scanf("%d", &input[i][j]);
		}
	}

	for(int k=1; k<=n; k++)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
				if(input[i][k] && input[k][j])
					input[i][j] = 1;
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)
			printf("%d ", input[i][j]);
		printf("\n");
	}

	return 0;
}
