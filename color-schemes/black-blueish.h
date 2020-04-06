static const char norm_fg[] = "#dbdcd1";
static const char norm_bg[] = "#0c1220";
static const char norm_border[] = "#999a92";

static const char sel_fg[] = "#dbdcd1";
static const char sel_bg[] = "#A0B19C";
static const char sel_border[] = "#dbdcd1";

static const char urg_fg[] = "#dbdcd1";
static const char urg_bg[] = "#70A9A7";
static const char urg_border[] = "#70A9A7";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
