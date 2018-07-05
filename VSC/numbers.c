#include <stdio.h>
int main()
{
int a,b,c;
char nums[20];
printf("enter 2 numbers: ");
gets(nums);
sscanf(nums, "%d %d", &a, &b);
c = a + b;
printf("Added they equal %d\n", c);
return 0;
}


//   installing and testing the gnu c/c++ compiler - see reference 1
//
//   Compiling in ubuntu with C or C++ - see references 2 and 3
//
//   using makefiles - see reference 4 
//
//   ****************************************************************************************************************
//
//   using ccache - a compiler cache for c and c++
//
//   ccache gcc numbers.c -o numbers
//   ./numbers
//
//   enter 2 numbers: 14 99
//   Added they equal 113
//
//   *****************************************************************************************************************
//
//
//   1   https://www.tecmint.com/install-c-compiler-and-development-build-essential-tools-in-debian-ubuntu/
//
//   2   https://www.cs.fsu.edu/~myers/c++/notes/compilation.html
//
//   3   https://www.cs.fsu.edu/~myers/howto/g++compiling.txt
//
//   *****************************************************************************************************************

//
//   4   https://www.cs.fsu.edu/~myers/howto/makefiles.txt
