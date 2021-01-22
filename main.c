#include <stdio.h>
#include <stdlib.h>
//TEST
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


}
void convertBinToInt(char num[4]){

int n, c, k;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 3
       ; c >= 0; c--)
  {
    k = n >> c;

    if (k && 1 )
      printf("1");
    else
      printf("0");
  }

  printf("\n");

>>>>>>> 611179847a5401acbf4f281336297c990041f10b


}

<<<<<<< HEAD
=======
int intsomme(char num[4]){




    return ;

}
int main()

    return 0;
}
