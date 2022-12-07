#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
  if(argc != 2)    
    return 1;
 
  struct stat fileStat;
  if(stat(argv[1],&fileStat) < 0)    
    return 1;
  printf("Information for %s\n",argv[1]);


}
