#include <stdio.h>
#include <cs50.h>
#include <string.h>

void PrintCapital(char c);

int main(void)
{
  string name = GetString();
  PrintCapital(name[0]);
  
  for(int i = 0, n = strlen(name); i < n; i++ )
  {
    if ((int) name[i] == 32) {
      PrintCapital(name[i+1]);
    }
  }
  printf("\n");
}

void PrintCapital(char c)
{
  if (c >= 'a' && c <= 'z')
  {
    printf("%c", c - ('a' - 'A'));
  }
  else
  {
    printf("%c", c);
  }
}
//space is 32