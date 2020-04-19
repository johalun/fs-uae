#ifndef FSEMU_KEY_H_
#define FSEMU_KEY_H_

#include "fsemu-common.h"
// #include "fsemu-scancode.h"

#ifdef FSEMU_MACOS
#define FSEMU_KEY_MOD_NAME "Cmd"
#else
#define FSEMU_KEY_MOD_NAME "Alt"
#endif

/*
#ifdef __APLE__
#define FSE_MODIFIER_SDL KMOD_LGUI
#define FSE_MODIFIER_SDL_SUFFIX LGUI
#else
#define FSE_MODIFIER_SDL KMOD_LALT
#define FSE_MODIFIER_SDL_SUFFIX LALT
#endif

#define FSE_SHORTCUT_QUIT_SDL SDLK_q
#define FSE_SHORTCUT_QUIT_UPPER Q
#define FSE_SHORTCUT_QUIT_LOWER q
*/

#ifdef __cplusplus
extern "C" {
#endif

#define FSEMU_KEY_MOD_MOD 1
#define FSEMU_KEY_MOD_SHIFT 2
#define FSEMU_KEY_NUM_MODS 3

// These correspond 1:1 to SDL _scan codes_, so for the SDL2 input driver, we
// can simply assign the scancode directly without lookup table.
typedef enum {
    FSEMU_KEY_UNKNOWN = 0,

    FSEMU_KEY_A = 4,
    FSEMU_KEY_B = 5,
    FSEMU_KEY_C = 6,
    FSEMU_KEY_D = 7,
    FSEMU_KEY_E = 8,
    FSEMU_KEY_F = 9,
    FSEMU_KEY_G = 10,
    FSEMU_KEY_H = 11,
    FSEMU_KEY_I = 12,
    FSEMU_KEY_J = 13,
    FSEMU_KEY_K = 14,
    FSEMU_KEY_L = 15,
    FSEMU_KEY_M = 16,
    FSEMU_KEY_N = 17,
    FSEMU_KEY_O = 18,
    FSEMU_KEY_P = 19,
    FSEMU_KEY_Q = 20,
    FSEMU_KEY_R = 21,
    FSEMU_KEY_S = 22,
    FSEMU_KEY_T = 23,
    FSEMU_KEY_U = 24,
    FSEMU_KEY_V = 25,
    FSEMU_KEY_W = 26,
    FSEMU_KEY_X = 27,
    FSEMU_KEY_Y = 28,
    FSEMU_KEY_Z = 29,
    FSEMU_KEY_1 = 30,
    FSEMU_KEY_2 = 31,
    FSEMU_KEY_3 = 32,
    FSEMU_KEY_4 = 33,
    FSEMU_KEY_5 = 34,
    FSEMU_KEY_6 = 35,
    FSEMU_KEY_7 = 36,
    FSEMU_KEY_8 = 37,
    FSEMU_KEY_9 = 38,
    FSEMU_KEY_0 = 39,
    FSEMU_KEY_RETURN = 40,
    FSEMU_KEY_ESCAPE = 41,
    FSEMU_KEY_BACKSPACE = 42,
    FSEMU_KEY_TAB = 43,
    FSEMU_KEY_SPACE = 44,
    FSEMU_KEY_MINUS = 45,
    FSEMU_KEY_EQUALS = 46,
    FSEMU_KEY_LEFTBRACKET = 47,
    FSEMU_KEY_RIGHTBRACKET = 48,
    FSEMU_KEY_BACKSLASH = 49,
    FSEMU_KEY_NONUSHASH = 50,
    FSEMU_KEY_SEMICOLON = 51,
    FSEMU_KEY_APOSTROPHE = 52,
    FSEMU_KEY_GRAVE = 53,
    FSEMU_KEY_COMMA = 54,
    FSEMU_KEY_PERIOD = 55,
    FSEMU_KEY_SLASH = 56,
    FSEMU_KEY_CAPSLOCK = 57,
    FSEMU_KEY_F1 = 58,
    FSEMU_KEY_F2 = 59,
    FSEMU_KEY_F3 = 60,
    FSEMU_KEY_F4 = 61,
    FSEMU_KEY_F5 = 62,
    FSEMU_KEY_F6 = 63,
    FSEMU_KEY_F7 = 64,
    FSEMU_KEY_F8 = 65,
    FSEMU_KEY_F9 = 66,
    FSEMU_KEY_F10 = 67,
    FSEMU_KEY_F11 = 68,
    FSEMU_KEY_F12 = 69,
    FSEMU_KEY_PRINTSCREEN = 70,
    FSEMU_KEY_SCROLLLOCK = 71,
    FSEMU_KEY_PAUSE = 72,
    FSEMU_KEY_INSERT = 73,
    FSEMU_KEY_HOME = 74,
    FSEMU_KEY_PAGEUP = 75,
    FSEMU_KEY_DELETE = 76,
    FSEMU_KEY_END = 77,
    FSEMU_KEY_PAGEDOWN = 78,
    FSEMU_KEY_RIGHT = 79,
    FSEMU_KEY_LEFT = 80,
    FSEMU_KEY_DOWN = 81,
    FSEMU_KEY_UP = 82,
    FSEMU_KEY_NUMLOCKCLEAR = 83,
    FSEMU_KEY_KPDIVIDE = 84,
    FSEMU_KEY_KPMULTIPLY = 85,
    FSEMU_KEY_KPMINUS = 86,
    FSEMU_KEY_KPPLUS = 87,
    FSEMU_KEY_KPENTER = 88,
    FSEMU_KEY_KP1 = 89,
    FSEMU_KEY_KP2 = 90,
    FSEMU_KEY_KP3 = 91,
    FSEMU_KEY_KP4 = 92,
    FSEMU_KEY_KP5 = 93,
    FSEMU_KEY_KP6 = 94,
    FSEMU_KEY_KP7 = 95,
    FSEMU_KEY_KP8 = 96,
    FSEMU_KEY_KP9 = 97,
    FSEMU_KEY_KP0 = 98,
    FSEMU_KEY_KPPERIOD = 99,
    FSEMU_KEY_NONUSBACKSLASH = 100,
    FSEMU_KEY_APPLICATION = 101,
    FSEMU_KEY_POWER = 102,
    FSEMU_KEY_KPEQUALS = 103,
    FSEMU_KEY_F13 = 104,
    FSEMU_KEY_F14 = 105,
    FSEMU_KEY_F15 = 106,
    FSEMU_KEY_F16 = 107,
    FSEMU_KEY_F17 = 108,
    FSEMU_KEY_F18 = 109,
    FSEMU_KEY_F19 = 110,
    FSEMU_KEY_F20 = 111,
    FSEMU_KEY_F21 = 112,
    FSEMU_KEY_F22 = 113,
    FSEMU_KEY_F23 = 114,
    FSEMU_KEY_F24 = 115,
    FSEMU_KEY_EXECUTE = 116,
    FSEMU_KEY_HELP = 117,
    FSEMU_KEY_MENU = 118,
    FSEMU_KEY_SELECT = 119,
    FSEMU_KEY_STOP = 120,
    FSEMU_KEY_AGAIN = 121,
    FSEMU_KEY_UNDO = 122,
    FSEMU_KEY_CUT = 123,
    FSEMU_KEY_COPY = 124,
    FSEMU_KEY_PASTE = 125,
    FSEMU_KEY_FIND = 126,
    FSEMU_KEY_MUTE = 127,
    FSEMU_KEY_VOLUMEUP = 128,
    FSEMU_KEY_VOLUMEDOWN = 129,

    FSEMU_KEY_KPCOMMA = 133,
    FSEMU_KEY_KPEQUALSAS400 = 134,
    FSEMU_KEY_INTERNATIONAL1 = 135,
    FSEMU_KEY_INTERNATIONAL2 = 136,
    FSEMU_KEY_INTERNATIONAL3 = 137,
    FSEMU_KEY_INTERNATIONAL4 = 138,
    FSEMU_KEY_INTERNATIONAL5 = 139,
    FSEMU_KEY_INTERNATIONAL6 = 140,
    FSEMU_KEY_INTERNATIONAL7 = 141,
    FSEMU_KEY_INTERNATIONAL8 = 142,
    FSEMU_KEY_INTERNATIONAL9 = 143,
    FSEMU_KEY_LANG1 = 144,
    FSEMU_KEY_LANG2 = 145,
    FSEMU_KEY_LANG3 = 146,
    FSEMU_KEY_LANG4 = 147,
    FSEMU_KEY_LANG5 = 148,
    FSEMU_KEY_LANG6 = 149,
    FSEMU_KEY_LANG7 = 150,
    FSEMU_KEY_LANG8 = 151,
    FSEMU_KEY_LANG9 = 152,
    FSEMU_KEY_ALTERASE = 153,
    FSEMU_KEY_SYSREQ = 154,
    FSEMU_KEY_CANCEL = 155,
    FSEMU_KEY_CLEAR = 156,
    FSEMU_KEY_PRIOR = 157,
    FSEMU_KEY_RETURN2 = 158,
    FSEMU_KEY_SEPARATOR = 159,
    FSEMU_KEY_OUT = 160,
    FSEMU_KEY_OPER = 161,
    FSEMU_KEY_CLEARAGAIN = 162,
    FSEMU_KEY_CRSEL = 163,
    FSEMU_KEY_EXSEL = 164,

    FSEMU_KEY_KP00 = 176,
    FSEMU_KEY_KP000 = 177,
    FSEMU_KEY_THOUSANDSSEPARATOR = 178,
    FSEMU_KEY_DECIMALSEPARATOR = 179,
    FSEMU_KEY_CURRENCYUNIT = 180,
    FSEMU_KEY_CURRENCYSUBUNIT = 181,
    FSEMU_KEY_KPLEFTPAREN = 182,
    FSEMU_KEY_KPRIGHTPAREN = 183,
    FSEMU_KEY_KPLEFTBRACE = 184,
    FSEMU_KEY_KPRIGHTBRACE = 185,
    FSEMU_KEY_KPTAB = 186,
    FSEMU_KEY_KPBACKSPACE = 187,
    FSEMU_KEY_KPA = 188,
    FSEMU_KEY_KPB = 189,
    FSEMU_KEY_KPC = 190,
    FSEMU_KEY_KPD = 191,
    FSEMU_KEY_KPE = 192,
    FSEMU_KEY_KPF = 193,
    FSEMU_KEY_KPXOR = 194,
    FSEMU_KEY_KPPOWER = 195,
    FSEMU_KEY_KPPERCENT = 196,
    FSEMU_KEY_KPLESS = 197,
    FSEMU_KEY_KPGREATER = 198,
    FSEMU_KEY_KPAMPERSAND = 199,
    FSEMU_KEY_KPDBLAMPERSAND = 200,
    FSEMU_KEY_KPVERTICALBAR = 201,
    FSEMU_KEY_KPDBLVERTICALBAR = 202,
    FSEMU_KEY_KPCOLON = 203,
    FSEMU_KEY_KPHASH = 204,
    FSEMU_KEY_KPSPACE = 205,
    FSEMU_KEY_KPAT = 206,
    FSEMU_KEY_KPEXCLAM = 207,
    FSEMU_KEY_KPMEMSTORE = 208,
    FSEMU_KEY_KPMEMRECALL = 209,
    FSEMU_KEY_KPMEMCLEAR = 210,
    FSEMU_KEY_KPMEMADD = 211,
    FSEMU_KEY_KPMEMSUBTRACT = 212,
    FSEMU_KEY_KPMEMMULTIPLY = 213,
    FSEMU_KEY_KPMEMDIVIDE = 214,
    FSEMU_KEY_KPPLUSMINUS = 215,
    FSEMU_KEY_KPCLEAR = 216,
    FSEMU_KEY_KPCLEARENTRY = 217,
    FSEMU_KEY_KPBINARY = 218,
    FSEMU_KEY_KPOCTAL = 219,
    FSEMU_KEY_KPDECIMAL = 220,
    FSEMU_KEY_KPHEXADECIMAL = 221,

    FSEMU_KEY_LCTRL = 224,
    FSEMU_KEY_LSHIFT = 225,
    FSEMU_KEY_LALT = 226,
    FSEMU_KEY_LGUI = 227,
    FSEMU_KEY_RCTRL = 228,
    FSEMU_KEY_RSHIFT = 229,
    FSEMU_KEY_RALT = 230,
    FSEMU_KEY_RGUI = 231,

    FSEMU_KEY_MODE = 257,
    FSEMU_KEY_AUDIONEXT = 258,
    FSEMU_KEY_AUDIOPREV = 259,
    FSEMU_KEY_AUDIOSTOP = 260,
    FSEMU_KEY_AUDIOPLAY = 261,
    FSEMU_KEY_AUDIOMUTE = 262,
    FSEMU_KEY_MEDIASELECT = 263,
    FSEMU_KEY_WWW = 264,
    FSEMU_KEY_MAIL = 265,
    FSEMU_KEY_CALCULATOR = 266,
    FSEMU_KEY_COMPUTER = 267,
    FSEMU_KEY_ACSEARCH = 268,
    FSEMU_KEY_ACHOME = 269,
    FSEMU_KEY_ACBACK = 270,
    FSEMU_KEY_ACFORWARD = 271,
    FSEMU_KEY_ACSTOP = 272,
    FSEMU_KEY_ACREFRESH = 273,
    FSEMU_KEY_ACBOOKMARKS = 274,
    FSEMU_KEY_BRIGHTNESSDOWN = 275,
    FSEMU_KEY_BRIGHTNESSUP = 276,
    FSEMU_KEY_DISPLAYSWITCH = 277,
    FSEMU_KEY_KBDILLUMTOGGLE = 278,
    FSEMU_KEY_KBDILLUMDOWN = 279,
    FSEMU_KEY_KBDILLUMUP = 280,
    FSEMU_KEY_EJECT = 281,
    FSEMU_KEY_SLEEP = 282,
    FSEMU_KEY_APP1 = 283,
    FSEMU_KEY_APP2 = 284,
    FSEMU_KEY_AUDIOREWIND = 285,
    FSEMU_KEY_AUDIOFASTFORWARD = 286,

    // SDL_NUM_SCANCODES is 512 at the time of writing, but we don't need to
    // waste space for unsupported keys, so FSEMU_NUM_SCANCODES is set as low
    // as possible. Just remember to check that SDL scancode is less than
    // FSEMU_KEYBOARD_NUM_KEYS before passing on.
    FSEMU_KEY_NUM_KEYS
} fsemu_key_t;

#ifdef __cplusplus
}
#endif

#endif  // FSEMU_KEY_H_