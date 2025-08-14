just so i dont fucking forget what this game is about, ive got an idea!

you start as a hungry traveler who wants to eat every single potato available in the world.

you first give urself a name, then you start...

you play the game by viewing through vegetables, and you have to "swipe" to the left to search for another vegetable, and to the right to accept.

if you accept a potato, the score increases, and the score decreases by 2 when you accept a non-potato.

your goal is to reach 256 potatos, which funny enough is the overflow limit so when the counter reaches 1 (or above?), i can just check when the counter reaches back to 0 by incrementing.

...scoring scriptery...
if (!(vIsPatata)) {
	score -= 2;
	incr = false;
}
...
if (isPatata) {
	score+=(incr=true);
}
...scoring scriptery...

...win/lose condition...
if (score==0) {
	// to check if we won, incr will be true/1.
}