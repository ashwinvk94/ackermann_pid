/**
 * @file test_ackerman_controller.cpp
 * @author Ashwin Varghese Kurutukullam
 * @author Charan Karthikeyan
 * @brief Testing cases for ackerman_controller
 *
 * @Copyright "Copyright 2019 <Charan Karthikeyan>
 * @Copyright "Copyright 2019 <Ashwin Varghese Kurutukullam>
 */

#include <gtest/gtest.h>

#include "pid.hpp"

/**
 * @brief Runs and tests the constructor for the PID class for certain inputs
 */
TEST(ValidatePIDClass,TestpidConstructor){
  pid mypid(1,0,0,false);
  mypid.setdt(0.5);
  EXPECT_EQ(mypid.getdt(),0.5);
  EXPECT_EQ(mypid.getkp(),1);
  EXPECT_EQ(mypid.getki(),0);
  EXPECT_EQ(mypid.getkd(),0);
  EXPECT_EQ(mypid.getdtMode(),false);
}

/**
 *@brief Runs and test the second constructor for the PID class for certain inputs.
 */

TEST(ValidatePIDClass,TestpidConstructor2){
  pid mypid(1,10,2000);
  EXPECT_EQ(mypid.getkp(),1);
  EXPECT_EQ(mypid.getki(),10);
  EXPECT_EQ(mypid.getkd(),2000);
}

/**
 * @brief Runs and tests he compute function for the PID class for certain values.
 */
TEST(ValidatePIDClass,Testcompute){
  pid mypid(1,0,0);
  double temp = mypid.setSp(12);
  EXPECT_EQ(mypid.compute(10),-2);
}

/**
 * @brief Runs and test the reset function of the PID class
 */

TEST(ValidatePIDClass,Testreset){
  pid mypid(1,0,0);
  double temp = mypid.compute(10);
  EXPECT_NE(temp, 0);
  mypid.reset();
  double temp1 = mypid.compute(10);
  EXPECT_EQ(mypid.getPrevError(),0);
  EXPECT_EQ(mypid.getErrorSum(),0);
}



