// shuffle algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <string>

int main (int argc, char *argv[]) {
  std::array<int,5> foo {1,2,3,4,5};

  // obtain a time-based seed:
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  if (argc == 2) {
      seed = std::stoul(argv[1]);
  }
  std::cout << "seed: " << seed << std::endl;

  shuffle (foo.begin(), foo.end(), std::default_random_engine(seed));

  std::cout << "shuffled elements:";
  for (int& x: foo) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}

/*
Possible output:
shuffled elements: 3 1 4 2 5
*/
