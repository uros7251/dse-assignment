#pragma once

#include <string>
#include <exception>

#define Ensure(e)                                                                                  \
  (__builtin_expect(!(e), 0)                                                                            \
     ? throw std::string(std::string(__func__) + " in " + std::string(__FILE__) + "@" + \
                                         std::to_string(__LINE__) + " msg: " + std::string(#e))         \
     : (void)0)
