/**
 *  @file      main.cpp
 *  @brief     Unit tests
 *  @details   This file is used to run all unit tests for the PID class
 *  @author    Patrick Nolan (patnolan33)
 *  @copyright GNU Public License.
 */

#include <gtest/gtest.h>

int main( int argc , char** argv )
{
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}
