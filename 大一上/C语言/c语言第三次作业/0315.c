//*********************************************************
//File name	 : 0315
//Author  	 : �����
//Date   	 : 10.29
//Student ID : 2019216072
//*********************************************************
#include <stdio.h>
int main()
{
	int i, j;
	for( i = 1; i <= 5; i++ )
	{
		for( j = 1; j <= 5- i; j++ )
		{
			printf( "  " );
		}
			
		for( j = 1; j <= 2 * i - 1; j++ )
		{
			printf( " *" );
		} 
			
		printf( "\n" );
	}
	
	for( i = 1; i <= 4; i++ )
	{
		for( j = 1; j <=i ; j++ )
		{	
		    printf( "  " );
		}
		 
		for( j = 9-2*i ; j > 0; j-- )
		{
			printf( " *" );
		}
		 
		printf( "\n" );
	}
	return 0;
}
