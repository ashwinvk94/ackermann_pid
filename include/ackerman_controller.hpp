/**
 * @file ackermann_controller.hpp
 * @author Ashwin Varghese Kuruttukulam
 * @author Charan Karthikeyan
 * TODO :Change the brief
 * @brief Defines the ackerman controller that calculates the
 * ,Radius of the turn, velocity of each wheel and an
 * @Copyright "Copyright 2019 <Ashwin Varghese Kuruttukulam>
 * @Copyright "Copyright 2019 <Charan Karthikeyan>
 */
#pragma once

#include <iostream>

class ackerman_controller{
 private:
  double baseline,carLen, radius, theta_Left,theta_Right, rWheelVel,lWheelVel, steerAng;

  /**
   * @brief Function to calculate the Radius of the turn given an angle
   * @param None.
   * @return None.
   */
  void calcRadius();

  /**
   * @brief Function to calculate the Wheel angle of the ackerman steering
   * @param None.
   * return None.
   */
  void calcWheelAng();

  /**
   * brief Function to calculate the wheel velocity of each wheel
   * and the velocity of the overall system
   * @param None.
   * @return None.
   */
  void calcWheelVel();
 public:

  /**
   * @brief Function to compute the steering angle, wheel velocity of the right and left wheels
   * @param The feedback about the heading from the PID controller.
   * @return The values of steering angle, the velocity of the right and left wheels.
   */
  double compute(double headingFeedback);

  /**
   * TODO : check the brief
   * @brief Function to update the target points.
   * @param heading set point of the target point(headingsp)
   * @param velocity of the set point(velocitysp)
   * @return None.
   */
  void changeSetpoints(double headingsp, double velocitysp);
};

