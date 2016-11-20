


#include <stdio.h>
 
void main()
{
    int num1 = 0, num2 = 1, num3, num, count = 0;
 

    printf("%d\n", num1);
    printf("%d\n", num2);
    count = 2; /* num1 and num2 are already used */
    while (1)
    {
        fib3 = fib1 + fib2;
        count++;
		
		for (int i; i <=fib3/2;++i)
		{
			if (num%i==0)
			{
				printf("BuzzFizz")
			}
		}
		
		if ((fib3%3) ==0)
		{
			printf("Buzz\n");
		}
		else if ((fib3%5)==0)
		{
			printf("Fizz\n");
		}
		else if ((fib3%15)==0)
		{
			printf("FizzBuzz\n");
		}
				
		
        printf("%d\n", fib3);
        num1 = num2;
        num2 = num3;
   }
}
