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
	printf(TAB "6. i skipped 5 bcuz the number is overrated (too much 5 enjoyers)\n");
	printf(TAB "7. to input unicode characters use the unicode character in the instructions section instead of \"\\\"\n"); // "＼"
	printf(TAB "8. all the instructions are within the game\n");
	printf("\n");
	printf("input anything to begin the game...");
	(void)getchar();
	// this is just me bein silly and testing out the capabilities of c on scratch
	char*sep=malloc(sizeof(char)*(SEPSIZ+1));
	memset(sep,"-"[0],SEPSIZ);
	sep[SEPSIZ]=0;
	printf("\n%s\n",sep);
	printf("please give yourself a name before we continue (8 letters+spaces only, do NOT overinput please):");
	char*name=malloc(sizeof(char)*9);
	name[4]=0;
	int nLen=0;
	char c;
	while ((c=getchar())&&(nLen<8)) {
		if(!((c!=32)||(((c>=65)||(c<=90))||((c>=97)||(c<=122)))))continue;
		name[nLen]=c;
		// if(name[nLen+1]==32)continue;
		// 32>90 is false therefore the char will NOT turn into a null char.
		if(name[nLen]>90)name[nLen]-=32;
		nLen++;
	}
	
	printf("\nawesome choice, my dear %s! let's start...", name);
	printf("\n%s\n",sep);
	free(sep);
	return 0;
}