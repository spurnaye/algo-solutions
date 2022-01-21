add_executable(count_num_ways count_num_ways.cpp)
target_link_libraries (count_num_ways ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS count_num_ways RUNTIME DESTINATION bin)

add_executable(ways_to_move_matrix ways_to_move_matrix.cpp)
target_link_libraries (ways_to_move_matrix ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS ways_to_move_matrix RUNTIME DESTINATION bin)

