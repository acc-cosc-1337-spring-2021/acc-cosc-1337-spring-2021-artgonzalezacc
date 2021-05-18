export CC=clang;
export CXX=clang++; 
mkdir -p ../build; 
cd ../build; 
cmake ../acc-cosc-1337-spring-2021-artgonzalezacc/; 
make;
cd test/examples_test/09_module_test;
./ex_09_tests -s;
