export CC=clang;
export CXX=clang++; 
mkdir -p ../build; 
cd ../build; 
cmake ../acc-cosc-1337-spring-2021-artgonzalezacc/; 
make; 
pwd;
cd /acc-cosc-1337-spring-2021-artgonzalezacc/src/classwork_test/09_assign_test; 
./ex_09_tests -s;
