#include "stdio.h"
int N;
int input[101][101];
int output[101][101];
int visited[101];
void BFS(int n);

int main(){

	scanf("%d",&N);
	for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=N; j++)
		{
			scanf("%d", &input[i][j]);
			output[i][j] = 0;
		}
	}


	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++)
			visited[j] = 0;

		BFS(i);

		for(int j=1; j<=N; j++)
			output[i][j] = visited[j];
	}
    for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=N; j++)
			printf("%d ", output[i][j]);
		printf("\n");
	}	return 0;
}

void BFS(int n){

	for(int i=1; i<=N; i++)
	{
		if(input[n][i] && !visited[i]){
			
			visited[i] = 1;
			BFS(i);
		}
	}
}
