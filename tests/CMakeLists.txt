cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

set(EXTRA_COMPONENT_DIRS
    "../components/"

    # To enable esp-adf
    # $ENV{ADF_PATH}/components
    )

set(TEST_COMPONENTS
    "my_led"
    )

project(my_test_project)
