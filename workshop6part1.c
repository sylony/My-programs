#include <stdio.h>
#include <stdlib.h>  

#define N 20
int array[N];

void initialarray()
{
 for (int i = 0; i < N; i++)
 {
  array[i] = rand() % 41 + 10;
 }
}

int search(int num)
{
 for (int i = 0; i < N; i++)
 {
 
  if (num == array[i])
   return i;
 }
return -1;
}

int main()
{
int input = 0；
initialarray();
while(1)
{
printf("please input a number between 10 and 50:");
  scanf("%d", &input);
  if (input < 0)
  {
  exit(0);
  }
  int answer = search(input);
  printf("%d\n", answer);
  }
  }


