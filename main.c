#include <stdio.h>
#include <stdlib.h>

int inttobin(int A, int B)
{




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



}

int main()
{
convertBinToInt("1234");

    return 0;
}
