static const char norm_fg[] = "#e6e6e7";
static const char norm_bg[] = "#0a0b0a";
static const char norm_border[] = "#a1a1a1";

static const char sel_fg[] = "#e6e6e7";
static const char sel_bg[] = "#979EA7";
static const char sel_border[] = "#e6e6e7";

static const char urg_fg[] = "#e6e6e7";
static const char urg_bg[] = "#8C8F92";
static const char urg_border[] = "#8C8F92";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
