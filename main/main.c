#include "my_led.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static my_led_t led1 = {
    .pin = GPIO_NUM_32,
    .state = false,
};

void app_main()
{
    my_led_init(&led1);

    while (1) {
        my_led_toggle(&led1);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}
