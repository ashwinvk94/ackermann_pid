/**
 * @file pid.hpp
 * @author Ashwin Varghese Kuruttukulam
 * @author Charan Karthikeyan
 * @brief Defines a PID Controller that computes the new
 * velocity given a target setpoint and the actual velocity.
 * Uses gains set by user to design the PID controller.
 *
 * @Copyright "Copyright 2019 <Ashwin Vargheese Kuruttukulam>
 * @Copyright "Copyright 2019 <Charan Karthikeyan>
 */
#pragma once

#include<iostream>
#include<string>

class pid{
 private:
	double kp,ki,kd,prevError,errorSum,prevTime;
	double setPoint;
 public:
	/**
	 * @brief Constructor for the PID Controller, Initialize kp to 1, ki and kd to 0.
	 * @param None.
	 * @return None.
	 */
  pid();

  /**
   * @brief Constructor to set values for kp, ki, kd and dtMode
   * @param None.
   * @return NOne
   */
  pid(double kp, double ki, double kd, bool dtMode);

  /**
    * @brief Destructor for the PID Controller
    * @param None.
    * @return None.
    */
  ~pid();

  /**
   * @brief Initialize the pid gain parameters to the parameter values
   * @param kp Proportional Gain of PID controller.
   * @param ki Integral Gain of PID controller.
   * @param kd Differential Gain of PID controller.
   * @return None.
   */

  double compute(double feedback);

  /**
   * @brief Function to set the value of bool to trigger automatic or manual code of the PID controller
   * @param set the boolean for control(dtMode).
   * @return None.
   */
  void setdtMode(bool dtMode);

  /**
   * @brief Function to set the value of the change in time value.
   * @param set the value of time change(dtVal).
   * return None.
   */
  void setdt(double dtVal);

  /**
   * @brief Function to set the value of setPoint for the target heading
   * @param setPoint Target Heading value.
   * @return None.
   */
  void setSp(double setPoint);

  /**
   * @brief Function to set the value of Proportional Gain of the PID controller
   * @param Proportional Gain(kp)
   * @return None.
   */
  void setkp(double);

  /**
   * @brief Function to set the value of Integral Gain  of the PID controller
   * @param Integral Gain (ki)
   * @return None.
   */
  void setki(double);

  /**
   * @brief Function to set the value fo Differential Gain of the PID controller
   * @param Differential Gain (kd)
   * @return None.
   */
  void setkd(double);

  /**
   * @brief To get the value of boolean of the change in time mode for the controller
   * @param None.
   * @return The state of the boolean(dtMode)
   */
  bool getdtMode();

  /**
   * @brief To get the value of the change in time set.
   * @param None.
   * return The value of change in time(dtVal)
   */
  double getdt();

  /**
   * @brief Function to get the value of setPoint for the target heading
   * @param None.
   * @return The target heading(setPoint).
   */
  double getSp();

  /**
   * @brief Function to get the value of Proportional Gain of the PID controller
   * @param None
   * @return Proportional Gain(kp)
   */
  double getkp();

  /**
   * @brief Function to get the value of the Integral Gain of the PID controller
   * @param None.
   * @return Integral Gain(kp)
   */
  double getki();

  /**
   * @brief Function to get the value of the Differential Gain of the PID controller
   * @param None.
   * @return Differential Gain
   */
  double getkd();

  /**
   * @brief Function to reset the values of the Gains and change in time value set to the PID controller
   * @param None.
   * return None.
   */
  void reset();
};
