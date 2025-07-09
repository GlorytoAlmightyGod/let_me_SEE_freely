g++ -o my_test.out "$@"
time ./my_test.out < my_test_input
rm -rf my_test.out