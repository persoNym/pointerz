#include <stdio.h>
/*shows basic pointer manipulation and the difference betweent pointer addresses and pointer value*/
int main()
{

    int x= 2;
    int y = 8;
    int *p;
    int *q;
    p = &x;
    q = &y;

	puts("\nThinking with Pointers");
	puts("--------------------------");

	    printf("The address of x is: %p\n",&x);
	    printf("The value of x is: %d\n",x);

		printf("The value of p is: %p\n",p);
		printf("The value of *p is: %d\n",*p);

		    printf("The address of y is: %p\n",&y);
		    printf("The value of y is: %d\n",y);

			printf("The value of q is: %p\n",q);
			printf("The value of *q is: %d\n",*q);

			    printf("The address of p is: %p\n",p);
			    //since the address of p = value of p,which will output an address, code will be the same
			    printf("The address of q is: %p\n",q);



return 0;
}
