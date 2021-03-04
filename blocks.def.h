//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    {" 🐧 ", "~/repos/dwmblocks/scripts/kernel",		    360,		        2},

	{" 🔺 ", "~/repos/dwmblocks/scripts/upt",		        60,		            2},

	{" 📦 ", "~/repos/dwmblocks/scripts/pacupdate",		360,		        9},
	
	{" 💻 ", "~/repos/dwmblocks/scripts/memory",	        6,		            1},

	{" 🔊 ", "~/repos/dwmblocks/scripts/volume",			2,		            10},

	{" 🕑 ", "~/repos/dwmblocks/scripts/clock",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
