#include <stdio.h>
#include <stdlib.h>
int inttobin(int A, int B)
{

	int A[8],B,i;

	printf("Enter the number: ");
	scanf("%d",&B);
	for(i=0;B>0;i++)
	{
	A[i]=B%2;
	B=B/2;
	}
	printf("\n Binary Number is ==> ");
	for(i=i-1;i>=0;i--)
	{
	printf("%d",A[i]);
	}

}


int convertBinToInt(char num[4]){


return 0;
}
int main()
{

    printf("Hello world!\n");
    return 0;
}
