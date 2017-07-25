//==============================================================================
// Author : Pierre Estérie
// Year   : 2017
// This is a free software !
//==============================================================================
#include <boost/hana.hpp>
#include <cassert>
#include <iostream>
#include <string>

namespace hana = boost::hana;
using namespace hana::literals;

struct fish { std::string name; };
struct cat { std::string name; };
struct dog { std::string name; };


int main()
{  
  auto animals = hana::make_tuple(fish{"Nemo"}, cat{"Garfield"}, dog{"Dingo"});

  // Access tuple elements with operator[] instead of std::get.
  cat garfield = animals[1_c];
  // Perform high level algorithms on tuples (this is like std::transform)
  auto names = hana::transform(animals, [](auto a) { return a.name; });

  assert(hana::reverse(names) == hana::make_tuple("Dingo", "Garfield", "Nemo"));

  return 0;
}
