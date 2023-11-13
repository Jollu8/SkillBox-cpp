cmake_minimum_required(VERSION 3.23)
project(SkillBox_autotest_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(SkillBox main.cpp SkillBox.h)

add_executable(Test test.cpp SkillBox.h test/doctest.h)

if (MSVC)
    target_compile_options(SkillBox PRIVATE
            /W4
    )

    target_compile_options(Test PRIVATE
            /W4
    )

else ()
    target_compile_options(SkillBox PRIVATE
            -Wall -Wextra -pedantic -Werror
    )

    target_compile_options(Test PRIVATE
            -Wall -Wextra -pedantic -Werror
    )

endif ()