add_executable( primorial_of_number primorial_of_number.cpp)
target_link_libraries (primorial_of_number ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS primorial_of_number  RUNTIME DESTINATION bin)
