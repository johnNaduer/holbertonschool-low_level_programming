#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int fd;
	char buf[14];
	
	/* write */
	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0777);
	if(fd == -1)
	{
		printf("Failed to create and open the file.\n");
		exit(1);
	}
	write(fd, "Hello World!\n",13);	
	
	/* read */

	fd = open("myfile.txt", O_RDONLY);
        if(fd == -1)
        {
                printf("Failed to open the file and read.\n");
                exit(1);
        }
	
	read(fd, buf, 13);
	buf[13] = '\0';
	close(fd);

	printf("buf: %s\n", buf);

	return (0);
}
