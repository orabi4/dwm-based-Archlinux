//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	{"🎧",  "audio",                                                        1,              0},
        {"🔊",  "vol",                                                          1,              10},
	{"🔋",  "cat /sys/class/power_supply/BAT0/capacity",                   300,              0},
        {"☀️",  "weather3",                                                     60,               0},
        {"🕒",  "clock",                                                       30,               0},
        {"🔄",  "pacupdate",                                                   3600,             9},
        {"🌐",  "web2",                                                        30,               0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
