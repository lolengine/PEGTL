// Copyright (c) 2015-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#include <iostream>

#include <tao/pegtl/contrib/analyze.hpp>

#include "lua53.hpp"

int main()  // NOLINT(bugprone-exception-escape)
{
   if( const auto problems = TAO_PEGTL_NAMESPACE::analyze< lua53::grammar >() != 0 ) {
      std::cout << "problems: " << problems << std::endl;
      return 1;
   }
   return 0;
}
