/**
 *  @file      pidTest.cpp
 *  @brief     Unit tests
 *  @details   This file is used to run all unit tests for the PID class
 *  @author    Patrick Nolan (patnolan33)
 *  @copyright GNU Public License.
 */

#include <gtest/gtest.h>

#include <pid.hpp>
#include <memory>


/**
 * @brief Test computation of the control input needed to correct any velocity discrepencies
 */
TEST(PIDTest, testCompute) {
  std::shared_ptr<PID> pid = std::make_shared < PID > (1, 1, 1, 1);

  // TODO: When compute is actually implemented, we need to verify that the value we are testing makes sense
  //        (i.e 1 is not likely to be a good value to test.
  EXPECT_EQ(1, pid->compute(0, 0));
}

/**
 * @brief Test initialization of gains and the get functions
 */
TEST(PIDTest, testGainInitialization) {
  std::shared_ptr<PID> pid = std::make_shared < PID > (1, 1, 1, 1);

  EXPECT_EQ(1, pid->getKp());
  EXPECT_EQ(1, pid->getKi());
  EXPECT_EQ(1, pid->getKd());
}

/**
 * @brief Test the set functions properly set each gain
 */
TEST(PIDTest, testGainSetting) {
  std::shared_ptr<PID> pid = std::make_shared < PID > (1, 1, 1, 1);
  pid->setKp(10);
  pid->setKi(10);
  pid->setKd(10);

  EXPECT_EQ(10, pid->getKp());
  EXPECT_EQ(10, pid->getKi());
  EXPECT_EQ(10, pid->getKd());
}

