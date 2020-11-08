#ifndef display_h
#define display_h

#include "lcd/lcd.h"

#define UPDATE_VOL_ON 1
#define UPDATE_VOL_OFF 2
#define UPDATE_TXT_ON 4
#define UPDATE_TXT_OFF 8

#define TEXT_0 "  button UP  "
#define TEXT_1 " button LEFT "
#define TEXT_2 "button RIGHT "
#define TEXT_3 " button DOWN "
#define TEXT_4 "button CENTER"

#define COL_BG_LINE setColor(127,127,255);
#define COL_BG_RECT setColor(0,0,127);

#define COL_VOL_RECT setColor(127,255,127);
#define COL_VOL_BACK setColor(0,0,0);
#define COL_VOL_BAR setColor(0,127,0);

#define COL_TEXT_BG setColorBg(127,255,127);
#define COL_TEXT setColor(238,64,0);

void init_background(void);

void update_queue(void);

/* add new instructions into the queue
 * use UPDATE flags and OR them together.
 * erase operation has higher priority than draw*/
void flush(u32 flags, u32 vol, u32 txt);

#endif
