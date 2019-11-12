#define _GNU_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <sys/syscall.h>
int main()
{
   int Var = 10;
   int *ptr = &Var;
   long add_result = 0; 
   add_result = syscall(334, 4, 5, ptr);
   printf("Value of Var = %d\n", *ptr);
   printf("Address of Var = %p\n", ptr);
   printf("After doing *ptr = 20, *ptr is %d\n", *ptr);
   return 0;
}
