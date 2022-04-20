#ifndef MY_LED_H
#define MY_LED_H

#include "driver/gpio.h"

#include <stdbool.h>

typedef struct {
    gpio_num_t pin;
    bool state;
} my_led_t;

esp_err_t my_led_init(my_led_t *led);

void my_led_turn_on(my_led_t *led);

void my_led_turn_off(my_led_t *led);

void my_led_toggle(my_led_t *led);

bool my_led_get_state(my_led_t *led);

void my_led_set_state(my_led_t *led, bool newState);

#endif  // MY_LED_H
