#include "esp_err.h"
#include "unity.h"

#include <stdio.h>
#include <string.h>

#define TEST_MY_LED 1

static void print_banner(const char *text)
{
    printf("\n#### %s #####\n\n", text);
}

void app_main(void)
{
    print_banner("Starting tests");

#if TEST_MY_LED
    print_banner("Running tests with [my_led] tag");
    UNITY_BEGIN();
    unity_run_tests_by_tag("my_led", false);
    UNITY_END();
#endif

    print_banner("Done");
}
