/**
 *  @file      pid.hpp
 *  @brief     PID Class
 *  @details   Definition and implementation of the PID class to compute velocity as a result of a PID controller
 *  @author    Patrick Nolan (patnolan33)
 *  @copyright GNU Public License.
 */

#include <iostream>

/**
 * @brief PID class handles computing the velocity based on a setpoint and actual velocity
 */
class PID {

 public:

  /**
   * @brief PID constructor
   * @param Kp initial value for Kp
   * @param Ki initial value for Ki
   * @param Kd initial value for Kd
   * @param dt initial value for dt
   */
  PID(double Kp, double Ki, double Kd, double dt);

  /**
   * @brief compute takes the setpoint and actual velocity as inputs to compute the velocity
   * @param setpoint Desired velocity
   * @param actualVelocity Actual vehicle velocity
   * @return
   */
  double compute(double setpoint, double actualVelocity);


  /**
   * @breif Get the value of the proportional gain
   * @return Kp gain
   */
  double getKp();

  /**
   * @breif Get the value of the integral gain
   * @return Ki gain
   */
  double getKi();

  /**
   * @breif Get the value of the derivative gain
   * @return Kd gain
   */
  double getKd();

  /**
   * @brief Set the value of the proportional gain
   * @param kp New Kp value
   */
  void setKp(double kp);

  /**
   * @brief Set the value of the integral gain
   * @param ki New Ki value
   */
  void setKi(double ki);

  /**
   * @brief Set the value of the derivative gain
   * @param kd New Kd value
   */
  void setKd(double kd);


 private:

  /**
   * @brief Proportional gain
   */
  double Kp;

  /**
   * @brief Integral gain
   */
  double Ki;

  /**
   * @brief Derivative gain
   */
  double Kd;

  /**
   * @brief Delta-time value
   */
  double dt;

  /**
   * @brief Container for the previous error for derivative component calculation
   */
  double previousError;

  /**
   * @brief Container for the integral value for integral component calculation
   */
  double integral;

};

