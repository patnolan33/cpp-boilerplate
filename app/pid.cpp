/**
 *  @file      pid.cpp
 *  @brief     PID Class implementation
 *  @details   Implementation of the PID class to compute velocity as a result of a PID controller
 *  @author    Patrick Nolan (patnolan33)
 *  @copyright GNU Public License.
 */

#include <pid.hpp>
#include <iostream>


/**
 * @brief PID constructor
 * @param Kp initial value for Kp
 * @param Ki initial value for Ki
 * @param Kd initial value for Kd
 * @param dt initial value for dt
 */
PID::PID(double Kp, double Ki, double Kd, double dt)
    : Kp(0),
      Kd(0),
      Ki(0),
      dt(1),
      previousError(0),
      integral(0) {
}

/**
 * @brief compute takes the setpoint and actual velocity as inputs to compute the velocity
 * @param setpoint Desired velocity
 * @param actualVelocity Actual vehicle velocity
 * @return
 */
double PID::compute(double setpoint, double actualVelocity) {
  std::cout << "TODO: Implement compute method..." << std::endl;
  double controlSignal = 0.0;

  return controlSignal;
}

/**
 * @breif Get the value of the proportional gain
 * @return Kp gain
 */
double PID::getKp() {
  return 0;
}

/**
 * @breif Get the value of the integral gain
 * @return Ki gain
 */
double PID::getKi() {
  return 0;
}

/**
 * @breif Get the value of the derivative gain
 * @return Kd gain
 */
double PID::getKd() {
  return 0;
}

/**
 * @brief Set the value of the proportional gain
 * @param kp New Kp value
 */
void PID::setKp(double kp) {
  Kp = 0;
}

/**
 * @brief Set the value of the integral gain
 * @param ki New Ki value
 */
void PID::setKi(double ki) {
  Ki = 0;
}

/**
 * @brief Set the value of the derivative gain
 * @param kd New Kd value
 */
void PID::setKd(double kd) {
  Kd = 0;
}




