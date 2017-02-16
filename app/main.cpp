#include <iostream>
#include <pid.hpp>
#include <memory>

int main()
{
  std::shared_ptr<PID> pid = std::make_shared<PID>();
  pid->dummy();

  return 0;
}
