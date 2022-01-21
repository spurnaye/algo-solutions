add_executable(snail snail.cpp)
target_link_libraries (snail ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS snail RUNTIME DESTINATION bin)

add_executable(sum_of_intervals sum_of_intervals.cpp)
target_link_libraries (sum_of_intervals ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS sum_of_intervals RUNTIME DESTINATION bin)

add_executable(sum_of_perfect_squares sum_of_perfect_squares.cpp)
target_link_libraries (sum_of_perfect_squares ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS sum_of_perfect_squares RUNTIME DESTINATION bin)
