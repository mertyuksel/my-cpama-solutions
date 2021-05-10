#include <stdio.h>

int main() 
{
	int a, b, c, k;

	printf("Enter two integers: ");
	scanf_s("%d%d", &a, &b);

	if (b > a) 
    {
		c = a;
		for (; c >= 0; c--) 
        {
			if (b % c == 0 && a % c == 0 ) 
            {
				printf("GCD is : %d", c);
				break;
			}	
		}
	}
	else if (a > b) 
    {
		k = b;
		for (; k >= 0; k--)
        {
			if (a % k  == 0 && b % k == 0) 
            {
			    printf("GCD is : %d", k);		
				break;
			}
		}
	}

	getch();
	return 0;
}
