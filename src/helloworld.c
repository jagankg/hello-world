#include <stdio.h>

int main(int argc, char **argv)
{
   int ui_numparam = argc;
   int ui_count = 0;
   printf("Hello World\n");
   printf("Num Parameter Passed %d\n", ui_numparam);

   for (ui_count = 0; ui_count < ui_numparam; ui_count++)
   {
      printf("ARG[%d] = %s\n", ui_count, argv[ui_count]);
   }
   return 0;
}
