#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAB "\x20\x20\x20\x20"
#define SEPSIZ 96 // that macro name is one "T" away from smth not funny... :[

int main() {
	printf("welkommen to the patata game!\n");
	printf("there are a few things you need to know before u start playinh:\n");
	printf(TAB "1. this game is made in c, and compiled to scratch using a powerful toolchain called elvm.\n");
	printf(TAB "2. this whole project might become a bit too slow if you're on a more lower-end system\n");
	printf(TAB "3. the game's c code is on https://github.com/RixInGithub/scratch3potatogame/\n");
	printf(TAB "4. a thing you need to know before u start playinh\n");
	printf(TAB "6. i skipped 5 bcuz the number is overrated (too much 5 glazers)\n");
	printf(TAB "7. to input unicode characters use the unicode character in the instructions section instead of \"\\\"\n"); // "＼"
	printf(TAB "8. all the instructions are within the game\n");
	printf("\n");
	printf("input anything to begin the game...");
	(void)getchar();
	// this is just me bein silly and testing out the capabilities of c on scratch
	char*sep=malloc(sizeof(char)*(SEPSIZ+1));
	memset(sep,"-"[0],SEPSIZ);
	sep[SEPSIZ+1]=0;
	printf("\n%s\n",sep);
	printf("please give yourself a name before we continue:");
	char*name=malloc(sizeof(char));
	name[0]=0;
	char c;
	while ((c=getchar())!=10) {
		printf("%d\n",c);
		int len = strlen(name)+2;
		char*tmp=malloc(sizeof(char)*len); // i will not believe that sizeof(char)==1, especially in funky diy compiler land
		strcpy(tmp,name);
		tmp[len-2]=c;
		tmp[len-1]=0;
		free(name);
		name=tmp;
	}
	printf("\n\nawesome choice, my dear %s! lets start.", name);
	printf("\n%s\n",sep);
	free(sep);
	return 0;
}