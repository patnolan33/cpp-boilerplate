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
  std::shared_ptr<PID> pid = std::make_shared < PID > (0.1, 0.01, 0.5, 1);

  EXPECT_NEAR(1, pid->compute(1, 2), 0.001);
}

/**
 * @brief Test initialization of gains and the get functions
 */
TEST(PIDTest, testGainInitialization) {
  std::shared_ptr<PID> pid = std::make_shared < PID > (0.1, 0.01, 0.5, 1);

  EXPECT_EQ(0.1, pid->getKp());
  EXPECT_EQ(0.01, pid->getKi());
  EXPECT_EQ(0.5, pid->getKd());
}

/**
 * @brief Test the set functions properly set each gain
 */
TEST(PIDTest, testGainSetting) {
  std::shared_ptr<PID> pid = std::make_shared < PID > (0.1, 0.01, 0.5, 1);
  pid->setKp(10);
  pid->setKi(10);
  pid->setKd(10);

  EXPECT_EQ(10, pid->getKp());
  EXPECT_EQ(10, pid->getKi());
  EXPECT_EQ(10, pid->getKd());
}

