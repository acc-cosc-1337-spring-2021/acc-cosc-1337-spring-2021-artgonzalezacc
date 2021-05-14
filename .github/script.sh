export CC=clang;
export CXX=clang++; 
mkdir -p ../build; 
cd ../build; 
cmake ../acc-cosc-1337-spring-2021-artgonzalezacc/; 
make; 
cd src/homework/tic_tac_toe; 
./hw_tic_tac_toe_exe -s;
