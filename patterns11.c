/*
Name: c programe for print pattern
Input = 5
* * * * * * * * * * *
*   *   *   *   *   *
* * *   *   *   *   *
*       *   *   *   *
* * * * *   *   *   *
*           *   *   *
* * * * * * *   *   *
*               *   *
* * * * * * * * *   *
*                   *
* * * * * * * * * * *
*/
#include<stdio.h>
#include<stdlib.h> 
void main() 
{
	int i, j,n; 
	printf("Enter Number : "); 
	scanf("%d", &n); 
	for(i=0;i<=n*2; i++) 
	{
		for(j=0; j<=n*2; j++) 
		{
			if ( (i%2 == 0 && i>=j ) || (j%2 == 0 && j>=i) || i==0 || j==0) 
			printf ("* ") ;
		
			else		
			printf ("  ") ;
		}
		
		printf("\n");

	}
}