export CC=clang;
export CXX=clang++; 
mkdir -p ../build; 
cd ../build; 
cmake ../acc-cosc-1337-spring-2021-artgonzalezacc/; 
make; 
cd test/classwork_test/09_assign_test;
./ex_09_tests -s;
