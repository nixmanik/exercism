#include "resistor_color.h"

static const char* band_colors[] = {
    "black",
    "brown",
    "red",
    "orange",
    "yellow",
    "green",
    "blue",
    "violet",
    "grey",
    "white"
};

static const resistor_band_t all_colors[] = {
    BLACK, BROWN, RED, ORANGE, YELLOW,
    GREEN, BLUE, VIOLET, GREY, WHITE
};

int color_code(int color) {
    return color;
}

const char* color_name(int color) {
    return band_colors[color];
}

const resistor_band_t* colors(void) {
    return all_colors;
}
