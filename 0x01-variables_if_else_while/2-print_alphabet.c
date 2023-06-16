#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    /*declare a variable*/
  char alphabet;  
  
  for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
    {
      /* print the value of alphabet */
      putchar(alphabet);
    }

    putchar('\n');
    return (0);
}
