#include <stdio.h>

int main()
{
	int num;

	scanf( "%d" , &num );

	for ( int i = 2 ; i <= num ; i++ )
	{
		if (num % i == 0)
		{
			int end = 1;
				
				for ( int j = 2 ; j <= ( i / 2 ) ; j++ )
				{
					if ( i % j == 0 )
					{
						end = 0;
							break;
					}
				}

			if ( end == 1 )

			{

				printf( "%d\n" , i );

			}

		}

	}

	return 0;

}
