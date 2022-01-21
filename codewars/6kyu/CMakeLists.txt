add_executable(sum_of_numbers sum_of_numbers.cpp)
target_link_libraries (sum_of_numbers ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS sum_of_numbers RUNTIME DESTINATION bin)

add_executable( primorial_of_number primorial_of_number.cpp)
target_link_libraries (primorial_of_number ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS primorial_of_number  RUNTIME DESTINATION bin)

add_executable( transform_to_prime transform_to_prime.cpp)
target_link_libraries (transform_to_prime ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS transform_to_prime  RUNTIME DESTINATION bin)

add_executable( count_inversions_merge_sort count_inversions_merge_sort.cpp)
target_link_libraries (count_inversions_merge_sort ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS count_inversions_merge_sort RUNTIME DESTINATION bin)

add_executable( max_profit_stocks max_profit_stocks.cpp)
target_link_libraries (max_profit_stocks ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS max_profit_stocks RUNTIME DESTINATION bin)
