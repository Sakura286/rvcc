#include<stdio.h>
#include<stdlib.h>

int main(int Argc, char **Argv)
{
    if (Argc !=2)
    {
        fprintf(stderr, "%s: invalid number of arguments\n", Argv[0]);
	    return 1;
    }
    printf("  .global main\n");
    printf("main:\n");
    printf("  li a0, %d\n", atoi(Argv[1]));
    printf("  ret\n");
    return 0;

}
