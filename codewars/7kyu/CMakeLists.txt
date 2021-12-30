add_executable(alphabet_grid alphabet_grid.cpp)
target_link_libraries (alphabet_grid ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS alphabet_grid RUNTIME DESTINATION bin)

add_executable(automorphic_number automorphic_number.cpp)
target_link_libraries (automorphic_number ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS automorphic_number RUNTIME DESTINATION bin)

add_executable(balanced_number balanced_number.cpp)
target_link_libraries (balanced_number ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS balanced_number RUNTIME DESTINATION bin)

add_executable(poet_and_pendulum poet_and_pendulum.cpp)
target_link_libraries (poet_and_pendulum ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS poet_and_pendulum RUNTIME DESTINATION bin)

add_executable(min_num_of_steps min_num_of_steps.cpp)
target_link_libraries (min_num_of_steps ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS min_num_of_steps RUNTIME DESTINATION bin)

add_executable(product_array product_array.cpp)
target_link_libraries (product_array ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS product_array RUNTIME DESTINATION bin)

add_executable(coprime_validator coprime_validator.cpp)
target_link_libraries (coprime_validator ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS coprime_validator RUNTIME DESTINATION bin)

add_executable(consecutive_ducks consecutive_ducks.cpp)
target_link_libraries (consecutive_ducks ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS consecutive_ducks RUNTIME DESTINATION bin)

add_executable(special_number special_number.cpp)
target_link_libraries (special_number ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS special_number RUNTIME DESTINATION bin)

add_executable(printer_errors printer_error.cpp)
target_link_libraries (printer_errors ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS printer_errors RUNTIME DESTINATION bin)

add_executable(next_prime next_prime.cpp)
target_link_libraries (next_prime ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS next_prime RUNTIME DESTINATION bin)

add_executable(peak_array_index peak_array_index.cpp)
target_link_libraries (peak_array_index  ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS peak_array_index RUNTIME DESTINATION bin)

add_executable(scaling_square_strings scaling_square_strings.cpp)
target_link_libraries (scaling_square_strings  ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS scaling_square_strings RUNTIME DESTINATION bin)

add_executable(divisible_by_7 divisible_by_7.cpp)
target_link_libraries (divisible_by_7  ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS divisible_by_7 RUNTIME DESTINATION bin)

add_executable( max_product_adj max_product_adj.cpp)
target_link_libraries (max_product_adj ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS max_product_adj RUNTIME DESTINATION bin)
