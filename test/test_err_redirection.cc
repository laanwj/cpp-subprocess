#include <iostream>
#include <cpp-subprocess/subprocess.hpp>

using namespace subprocess;

void test_redirect()
{
  auto p = Popen("./write_err.sh", output{"write_err.txt"}, error{STDOUT});
  std::cout << p.poll() << std::endl;

}

int main() {
#ifndef __USING_WINDOWS__
  test_redirect();
#endif
  return 0;
}
