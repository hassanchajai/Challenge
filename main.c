#include <stdio.h>
#include <stdlib.h>

int inttobin()
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




void convertBinToInt(char num[4]){

int n, c, k;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 3; c >= 0; c--)
  {
    k = n >> c;


    if (k && 1 )
      printf("1");
    else
      printf("0");
  }


}
void sa(){
int a[10],n,i;
system ("cls");
printf("Enter the number to convert: ");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nBinary of Given Number is=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}

}







int main()
{
convertBinToInt("1234");

    return 0;
}
