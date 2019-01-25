#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char arr[100];
	int i = 0;
	int start = 0;
	int cnt = 0;
	scanf("%s",arr);
	i=0;
	cnt = 0;
	while(arr[i] != '\0')
	{
	
	if(arr[i] == arr[start])
	{
		cnt++;
	}
	else
	{
		printf("%c%d",arr[start],cnt);
		cnt = 1;
		start = i;
		
	}
	i++;
	}
	printf("%c%d",arr[start],cnt);
	return 0;
}
