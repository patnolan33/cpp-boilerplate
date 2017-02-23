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
    : Kp(Kp),
      Kd(Kd),
      Ki(Ki),
      dt(dt),
      previousError(0),
      integral(0) {
}

/**
 * @brief compute takes the setpoint and actual velocity as inputs to compute the velocity
 * @param setpoint Desired velocity
 * @param actualVelocity Actual vehicle velocity
 * @param error Difference between setpoint and actualVelocity
 * @param newVelcity The new velocity get from PID controller
 * @return NewVelocity
 */
double PID::compute(double setpoint, double actualVelocity) {

	double controlSignal = 0.0;

	  double error=setpoint-actualVelocity;

	  int count=0;

	  //error*error is to avoid the affection from postive and negtive value

	  while ( error*error >0.000001){
		  integral+=previousError*dt;

		  error=setpoint-actualVelocity;

	  controlSignal= Kp*error + Ki* integral + Kd*(error-previousError)/dt;

	  actualVelocity=actualVelocity+ controlSignal;

	  previousError=error;

	  count++;

	  if (count>10000) {
		  std::cout<<" Cannot Find Proper Value\n";
		  return 1;
	  }

	  }

	  double newVelocity=actualVelocity;


	  return newVelocity;
}

/**
 * @breif Get the value of the proportional gain
 * @return Kp gain
 */
double PID::getKp() {
  return Kp;
}

/**
 * @breif Get the value of the integral gain
 * @return Ki gain
 */
double PID::getKi() {
  return Ki;
}

/**
 * @breif Get the value of the derivative gain
 * @return Kd gain
 */
double PID::getKd() {
  return Kd;
}

/**
 * @brief Set the value of the proportional gain
 * @param kp New Kp value
 */
void PID::setKp(double kp) {
  Kp = kp;
}

/**
 * @brief Set the value of the integral gain
 * @param ki New Ki value
 */
void PID::setKi(double ki) {
  Ki = ki;
}

/**
 * @brief Set the value of the derivative gain
 * @param kd New Kd value
 */
void PID::setKd(double kd) {
  Kd = kd;
}




