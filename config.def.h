/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int restrict_return = 0;				      /* -r option; if 1, disables shift-return and ctrl-return */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                 /* minimum width when centered */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "monospace:size=18" };
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */

static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char primary_color[] = "#7AA2F7";
static const char accent_color[] = "#9ECE6A";
static const char foreground_color[] = "#15161E";
static const char foreground_alt_color[] = "#C0CAF5";
static const char background_color[] = "#1A1B26";

static const char *colors[SchemeLast][2] = {
	                /*         fg                bg          */
	[SchemeNorm] = { foreground_alt_color, background_color },
	[SchemeSel] = { foreground_color, primary_color },
	[SchemeNormHighlight] = { primary_color, background_color },
	[SchemeSelHighlight] = { background_color, primary_color },
	[SchemeOut] = { foreground_color, accent_color },
};

static const unsigned int alphas[SchemeLast][2] = {
	                /*         fgalpha           bgalpha     */
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeNormHighlight] = { fgalpha, bgalpha },
	[SchemeSelHighlight] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 0;
static unsigned int columns = 0;
static unsigned int maxhist = 64;
static int histnodup = 1;	/* if 0, record repeated histories */
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;

/* Size of the window border */
static unsigned int border_width = 0;
