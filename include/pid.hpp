/**
 * @file pid.hpp
 * @author Ashwin Vargheese Kuruttukulam
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
  void pid(double kp, double ki, double kd);
  /**
   * TODO: Add the equation for the PID in the brief
   * @brief Function to compute the output of the PID controller as per the equation : ADD EQUATION
   * @param feedback Measured state value.
   * @return pidOut Output calculated by the PID controller with the equation.
   */
  double compute(double feedback);
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
   * @brief Function to reset the values of the Gains set to the PID controller
   * @param None.
   * return None.
   */
  void reset();
};
