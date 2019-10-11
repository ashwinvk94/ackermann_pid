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

#include "ackerman_controller.hpp"

/**
 * @brief Runs the compute function for ackerman_controller class for an input
 */
TEST(VaidateAckermanController,TestCompute){
  ackerman_controller ack_cont;
  //TODO calculate the value of and add to the EQ from the cpp file.
  EXPECT_EQ(ack_cont.compute(10),);

}

/**
 * @brief Runs the changeSetPoints function for ackerman_controller class for given inputs
 */

TEST(ValidateAckermanController,TestchangeSetPoints){
  //TODO add the final value after computing
  ackerman_controller ack_cont;
  EXPECT_EQ(ack_cont.changeSetPoints(),);
}


