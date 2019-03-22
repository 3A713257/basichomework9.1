#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2,ans;
	printf ("Nine-nine Multiplication Table:\n");
	for (num1=1; num1<=9; num1++)
	{
		for (num2=1; num2<=9; num2++)
		{
			if (num2 > num1)
			break;
			ans = num1*num2 ;
			if (ans>=10)
			printf ("%d X %d = %d   ",num2,num1,ans);
			else
			printf ("%d X %d =  %d   ",num2,num1,ans);
			
		}
		printf ("\n");
	}
	
	system ("pause");
	return 0;
}
