//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
        {"", "~/repos/personal/dwmblocks/scripts/kernel", 360, 2},

	{"", "~/repos/personal/dwmblocks/scripts/upt", 60, 2},

	{"", "~/repos/personal/dwmblocks/scripts/battery", 120, 9},
	
	{" 💻 ", "~/repos/personal/dwmblocks/scripts/memory", 6, 1},

	{" 🔊 ", "~/repos/personal/dwmblocks/scripts/volume", 2, 10},

	{" 🕑 ", "~/repos/personal/dwmblocks/scripts/clock", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
