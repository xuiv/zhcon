#include <sys/ioctl.h> 
#include <linux/kd.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>

#define MAX 255

int main() {
	char wd[MAX];
	wd[MAX-1] = '\0';

	if(getcwd(wd, MAX-1) == NULL) {
	  printf ("Can not get current working directory\n");
	}
	else {
	  printf("%s\n", wd);
	}

	seteuid(0);
	ioctl(0, KDSKBMODE, K_XLATE);
	seteuid(getuid());

	execl("/usr/bin/zhcon", "zhcon", "--utf8", NULL);

	return 0;
}
