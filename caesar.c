#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
  if (argc != 2)
  {
    printf("YOU DIDN'T PROVIDE THE RIGHT NUMBER OF ARGUMENTS!!\n");
    return 0;
  }
  else
  {
  // string k = argv[1];
   printf("Your program is in the else zone\n");
   printf("argc is %i\n", argc);
   printf("argv[0] is %s\n", argv[0]);
   printf("argv[1] is %s\n", argv[1]);
   return 1;
  }
}