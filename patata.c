#include <stdio.h>
#include <stdlib.h>
#define TAB "\x20\x20\x20\x20"
#define SEPSIZ 120 // that macro name is one "T" away from smth not funny...

int main() {
	printf("welkommen to the patata game!\n");
	printf("there are a few things you need to know before u start playinh:\n");
	printf(TAB "1. this game is made in c, and compiled to scratch using a powerful toolchain called elvm.\n");
	printf(TAB "2. this whole project might become a bit too slow if you're on a more lower-end system\n");
	printf(TAB "3. the game's c code is on https://github.com/RixInGithub/scratch3potatogame/\n");
	printf(TAB "4. a thing you need to know before u start playinh\n");
	printf(TAB "6. i skipped 5 bcuz the number is overrated (too much 5 glazers)\n");
	printf(TAB "7. to input unicode characters use \"＼\" instead of \"\\\"\n"); // the \"＼\" part looks trippy
	printf(TAB "8. you will play as a potato who wants to kill every other vegatable in the world\n");
	printf("\n");
	printf("input anything to begin the game.");
	(void)getchar();
	printf("\n");
	// this is just me bein silly and testing out the capabilities of c on scratch
	char*sep=malloc(sizeof(char)*(SEPSIZ+1));
	memset(sep,"-"[0],SEPSIZ);
	sep[SEPSIZ+1]=0;
	printf("%s",sep);
	free(sep);
	return 0;
}