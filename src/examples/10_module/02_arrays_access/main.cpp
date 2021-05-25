#include "arrays_access.h"
#include <iostream>
#include <chrono>

int main ()
{	

  const int SIZE = 100000;
  int* list = new int[SIZE];
  populate_array(list, SIZE, true);
  std::cout<<"function executing...: \n";
  std::chrono::steady_clock::time_point t1 = std::chrono::steady_clock::now();

  //100000,250000,500000,1000000
  //linear_search(list, SIZE, -5);
  //10000,100000,200000
  //binary_search(list, SIZE, -5);
  //10000,100000,200000
  bubble_sort(list, SIZE);
  std::chrono::steady_clock::time_point t2 = std::chrono::steady_clock::now();
  std::cout<<"function done: \n";

  std::cout<<"Milliseconds: "<<std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count();

  delete list;

  return 0;
} 	