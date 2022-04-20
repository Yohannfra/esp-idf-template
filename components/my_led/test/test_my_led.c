#include "esp_err.h"
#include "my_led.h"
#include "unity.h"

static my_led_t led1 = {.pin = GPIO_NUM_22, .state = false};

TEST_CASE("init", "my_led")
{
    my_led_init(&led1);

    TEST_ASSERT_FALSE(my_led_get_state(&led1));
}

TEST_CASE("on", "my_led")
{
    my_led_set_state(&led1, true);

    TEST_ASSERT_TRUE(my_led_get_state(&led1));
}

TEST_CASE("off", "my_led")
{
    my_led_set_state(&led1, false);

    TEST_ASSERT_FALSE(my_led_get_state(&led1));
}

TEST_CASE("toggle", "my_led")
{
    TEST_ASSERT_FALSE(my_led_get_state(&led1));  // off from previous test

    my_led_toggle(&led1);  // switch to on
    TEST_ASSERT_TRUE(my_led_get_state(&led1));

    my_led_toggle(&led1);  // switch to off
    TEST_ASSERT_FALSE(my_led_get_state(&led1));
}
