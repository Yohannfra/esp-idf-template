#include "my_led.h"

esp_err_t my_led_init(my_led_t *led)
{
    gpio_config_t conf = {
        .pin_bit_mask = (1ULL << led->pin),
        .mode = GPIO_MODE_OUTPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE,
    };
    esp_err_t ret = gpio_config(&conf);
    my_led_set_state(led, led->state);

    return ret;
}

void my_led_turn_on(my_led_t *led)
{
    led->state = true;
    gpio_set_level(led->pin, led->state);
}

void my_led_turn_off(my_led_t *led)
{
    led->state = false;
    gpio_set_level(led->pin, led->state);
}

void my_led_toggle(my_led_t *led)
{
    my_led_set_state(led, !led->state);
}

bool my_led_get_state(my_led_t *led)
{
    return led->state;
}

void my_led_set_state(my_led_t *led, bool newState)
{
    led->state = newState;
    gpio_set_level(led->pin, led->state);
}
