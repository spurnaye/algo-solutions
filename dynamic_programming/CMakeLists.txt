add_executable(can_sum can_sum.cpp)
target_link_libraries (can_sum ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS can_sum RUNTIME DESTINATION bin)

