#include<stdio.h>

void foo();

int main()
{

printf("hello world\n");
foo();
return 0;

}

void foo(){

   for(int i = 0; i < 5; i++)
	printf("%d",i);
   printf("\n");
}

