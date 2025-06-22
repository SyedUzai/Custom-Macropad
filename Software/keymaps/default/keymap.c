// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define MATRIX_ROWS 3
#define MATRIX_COLS 3


enum custom_keycodes {
    SOLIDWORKS = SAFE_RANGE,
    ALTIUM,
    VSCODE,
    PASS,
    LOCK_PC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        SOLIDWORKS, ALTIUM, VSCODE,  // Row 1
        KC_WWW_HOME,       KC_CALCULATOR,    KC_MAIL,            // Row 2
        KC_PRINT_SCREEN,       LOCK_PC,    PASS         // Row 3
    )
};

static void render_logo(void){
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

#ifdef OLED_ENABLE
bool oled_task_user(void){
    render_logo();
    return false;
}
#endif

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0: {
            if (active) {
                tap_code(KC_MUTE);
            } else {
                
            }
        }
    }
    return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SOLIDWORKS:
            if (record->event.pressed) {
                // Opens SolidWorks (adjust the path as necessary)
                SEND_STRING(SS_LGUI("r") SS_DELAY(100) "C:\\Program Files\\SOLIDWORKS Corp\\SOLIDWORKS\\SLDWORKS.exe" SS_TAP(X_ENTER));
            }
            return false;

        case ALTIUM:
            if (record->event.pressed) {
                // Opens Altium Designer (adjust the path as necessary)
                SEND_STRING(SS_LGUI("r") SS_DELAY(100) "C:\\Program Files\\Altium\\AD24\\X2.EXE" SS_TAP(X_ENTER));
            }
            return false;

        case VSCODE:
            if (record->event.pressed) {
                // Opens Altium Designer (adjust the path as necessary if different)
                SEND_STRING(SS_LGUI("r") SS_DELAY(100) "C:\\Users\\Uzair\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe" SS_TAP(X_ENTER));
            }
            return false;

        case PASS:
            if (record->event.pressed) {
                SEND_STRING("7589");  
            }
            return false;

        case LOCK_PC:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("l"));  // Windows + L
            }
            return false;
        

        default:
            return true; // Process all other keycodes normally
    }
}
