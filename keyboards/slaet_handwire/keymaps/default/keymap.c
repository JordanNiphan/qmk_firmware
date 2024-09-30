#include QMK_KEYBOARD_H
#include g/keymap_combo.h

#define KC_MB1 = KC_MS_BTN_1
#define KC_MB2 = KC_MS_BTN_2
#define KC_NUS = LT(_Numbers,KC_SPC)
#define KC_SHF = OSM(MOD_LSFT)
#define KC_SHR = OSM(MOD_RSFT)
#define KC_NUT = LT(_Arrows,KC_I)
#define MAKE_COMBO = const uint16_t PROGMEM


enum tap_dance {
    Dance_1_F1,
};

enum layers {
    _ColemakDHm,
    _Numbers,
    _Arrows,
    _MiscGame,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ColemakDHm] = LAYOUT_slaet_handwire(
        KC_SPC, KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,       /**/        KC_J,   KC_L,   KC_U,       KC_Y,   KC_SCLN,    KC_BSLS,
        KC_MB2, KC_A,   KC_R,   KC_S,   KC_T,   KC_G,       /**/        KC_M,   KC_N,   KC_E,       KC_NUT, KC_O,       KC_QUOT,
        KC_MB1, KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,       /**/        KC_K,   KC_H,   KC_COMM,    KC_DOT, KC_SLSH,    KC_SHR,
                               KC_LCTL, KC_LCTL, KC_NUS,    /**/      KC_SHF, KC_RCTL,  KC_RALT
                                           
    ),

    [_Numbers] = LAYOUT_slaet_handwire(
        KC_NO, KC_EXCL,   KC_BSLS,   KC_LCBR,   KC_RCBR,   KC_PIPE,     /**/        KC_NO,   KC_7,   KC_8,  KC_9,	KC_ASTR,    KC_EQL,
        KC_NO, KC_HASH,   KC_DLR,    KC_LPRN,   KC_RPRN,   KC_DOT,      /**/        KC_NO,   KC_4,   KC_5,	KC_6,	KC_PLUS,    KC_MIN,
        KC_NO, KC_SLSH,   KC_CIRC,   KC_LBRC,   KC_RBRC,   KC_TILD,     /**/        KC_NO,   KC_1,   KC_2,  KC_3,   KC_SLSH,    KC_AMPS,
                                        KC_NO, KC_NO, KC_NO,            /**/      KC_0, KC_DOT,  KC_RALT

    ),
    [_Arrows] = LAYOUT_slaet_handwire(
        KC_NO, KC_NO,   KC_NO,      KC_UP,      KC_NO,      KC_NO,      /**/        KC_NO,   KC_NO,   KC_NO,	KC_NO,	KC_NO,	KC_NO,
        KC_NO, KC_NO,   KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO,      /**/        KC_NO,   KC_NO,   KC_NO,	KC_NO,	KC_NO,	KC_NO,
        KC_NO, KC_NO,   KC_NO,      KC_NO,      KC_NO,      KC_NO,      /**/        KC_NO,   KC_NO,   KC_NO,    KC_NO,	KC_NO,	KC_NO,
                                                KC_NO, KC_NO, KC_NO,    /**/      KC_NO, KC_NO,  KC_NO
    ),
    [_MiscGame] = LAYOUT_slaet_handwire(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       /**/        KC_NO,   KC_NO,   KC_NO,	KC_NO,	KC_NO,	KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       /**/        KC_NO,   KC_NO,   KC_NO,	KC_NO,	KC_NO,	KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       /**/        KC_NO,   KC_NO,   KC_NO,    KC_NO,	KC_NO,	KC_NO,
                                        KC_NO, KC_NO, KC_NO,    /**/      KC_NO, KC_NO,  KC_NO
    ),
};

const uint16_t PROGMEM combo_bspc[] = { KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM combo_enter[] = { KC_H, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo_del[] = { KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM combo_tab[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo_quote[] = { KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo_Rmouse[] = { KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM combo_Mmouse[] = { KC_R, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM combo_Lmouse[] = { KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM combo_equal[] = { KC_U, KC_Y, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_bspc, KC_BSPC),
    COMBO(combo_enter, KC_ENTER),
    COMBO(combo_del, KC_DELETE),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_quote, KC_QUOTE),
    COMBO(combo_Rmouse, KC_MS_BTN2),
    COMBO(combo_Mmouse, KC_MS_BTN3),
    COMBO(combo_Lmouse, KC_MS_BTN1),
    COMBO(combo_equal, KC_EQUAL),
};

tap_dance_action_t tap_dance_actions[] = {
        [Dance_1_F1] = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_F1),
};