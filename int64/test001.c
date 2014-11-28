#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

struct person_st
{
	int age;
	char name[4];
	int sex;
};


int main (int argc, char **argv)
{
	int fd = -1;
	int t1 = 0;
	int t2 = 1;
	int t3 = -1;
	char str[] = "hello";
	struct person_st p;
	
	printf("%d\n", sizeof(str));

	strcpy(p.name,"hello");

	printf("%d\n", strlen("hello"));


	printf("%s\n", p.name);

	if(t1){
		printf("%s\n", "t1");
	}
	if(t2){
		printf("%s\n", "t2");
	}
	if(t3){
		printf("%s\n", "t3");
	}

	int i;
	for(i=0;i<10;i++){
		printf("%d\n", i);
	}

	for(int j=0;j<10;j++){
		printf("%d\n", j);
	}


	fd = open ("/dev/zer0", O_RDONLY);
 
	if (errno)
	{
		perror ("Ouuupsss");
		exit (EXIT_FAILURE);
	}
 
	close (fd);
 
	return EXIT_SUCCESS;
}