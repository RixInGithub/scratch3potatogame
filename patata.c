#include <stdio.h>
#include <stdlib.h>
#define TAB "\x20\x20\x20\x20"
#define SEPSIZ 16 // that macro is one "T" away from smth not funny...

int main() {
	printf("welkommen to patata game!");
	printf("there are a few things before you start playinh:");
	printf(TAB "1. this game is made in c, and compiled to scratch using elvm.");
	printf(TAB "2. this whole project might seem a bit too slow if you're on a lower-end-ish system");
	printf(TAB "3. the game's c code is on GHREPO");
	printf(TAB "4. idk");
	printf(TAB "6. i skipped 5 bcuz its overrated");
	printf("");
	printf("input anything to begin the game.");
	(void)getchar();
	printf("");
	// this is just be bein silly and testing out the capabilities
	char*sep=malloc(sizeof(char)*(SEPSIZ+1));
	int count = 0;
	while(count<SEPSIZ)sep[count++]="-"[0];
	printf("%s",sep);
	free(sep);
	return 0;
}