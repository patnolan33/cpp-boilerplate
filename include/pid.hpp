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
  PID(double Kp, double Ki, double Kd, double dt)
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
  double compute(double setpoint, double actualVelocity) {
    std::cout << "TODO: Implement compute method..." << std::endl;
    double controlSignal = 0.0;

    return controlSignal;
  }


  /**
   * @breif Get the value of the proportional gain
   * @return Kp gain
   */
  double getKp() {
    return 0;
  }

  /**
   * @breif Get the value of the integral gain
   * @return Ki gain
   */
  double getKi() {
    return 0;
  }

  /**
   * @breif Get the value of the derivative gain
   * @return Kd gain
   */
  double getKd() {
    return 0;
  }

  /**
   * @brief Set the value of the proportional gain
   * @param kp New Kp value
   */
  void setKp(double kp) {
    Kp = 0;
  }

  /**
   * @brief Set the value of the integral gain
   * @param ki New Ki value
   */
  void setKi(double ki) {
    Ki = 0;
  }

  /**
   * @brief Set the value of the derivative gain
   * @param kd New Kd value
   */
  void setKd(double kd) {
    Kd = 0;
  }
  

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

