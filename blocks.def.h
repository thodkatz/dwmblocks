//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//Commands are the sb-* scripts in scripts/, installed on PATH by make install.
//Each block needs its own signal so dwm's statuscmd can tell which one was clicked.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{"",		"sb-kbd",	1,			1},  /* polled: Alt+Shift toggles it outside dwm */
	{"",		"sb-net",	10,			2},
	{"",		"sb-cpu",	5,			3},
	{"",		"sb-mem",	10,			4},
	{"",		"sb-bri",	30,			11}, /* dwm's brightness keys send signal 11 */
	{"",		"sb-vol",	30,			10}, /* dwm's volume keys send signal 10 */
	{"",		"sb-bat",	30,			5},
	{"",		"sb-clock",	30,			6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//A dim bar between blocks, in status2d color codes.
static char delim[] = "  ^c#3a3a3a^│^d^  ";
static unsigned int delimLen = sizeof(delim);
