cmake_minimum_required(VERSION 3.27)
project(data_structure_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(data_structure_cpp
        test/cpp_review.cpp
        test/cpp_review_exercise.cpp
        test/Currency.cpp
        test/Currency.h
        test/coordin.h
        test/coordin.cpp
        main.cpp
        test/stock00.cpp
        test/stock00.h
        test/mytime.cpp
        test/mytime.h
        test/StringBad.cpp
        test/StringBad.h
        LinearList/LinearList.cpp
        LinearList/LinearList.h
        chapter_exercise/chapter_5.cpp
        chapter_exercise/chapter_5.h
)
