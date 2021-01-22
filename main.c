#include <stdio.h>
#include <stdlib.h>

int inttobin(int A, int B)
{

<<<<<<< HEAD
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
=======


>>>>>>> 611179847a5401acbf4f281336297c990041f10b

}
bhkbh

<<<<<<< HEAD
int convertBinToInt(char num[4]){
=======
void convertBinToInt(char num[4]){

int n, c, k;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 3; c >= 0; c--)
  {
    k = n >> c;

<<<<<<< HEAD
    if (k && 1 )
      printf("1");
    else
      printf("0");
  }
=======
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
>>>>>>> origin/hamzatoon

  printf("\n");

>>>>>>> 611179847a5401acbf4f281336297c990041f10b


}
int intsomme(char num[4]){




return ;

}
int main()
{
convertBinToInt("1234");

    return 0;
}
