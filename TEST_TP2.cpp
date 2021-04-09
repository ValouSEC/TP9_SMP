#include "Calculator.h"
#include <gtest/gtest.h>

TEST(DISABLE_TFactorialTest, ZeroValue) {
  Calculator c;
  EXPECT_EQ(1,c.factorielle(0));
}

TEST(DISABLE_TFactorialTest, StandardValues) {
  Calculator c;
  EXPECT_EQ(1,c.factorielle(1));
  EXPECT_EQ(3628800,c.factorielle(10));
}

TEST(FactorialTest, Neg_Input) {
  Calculator c;
  ASSERT_EXIT(c.factorielle(-10), ::testing::ExitedWithCode(255) ,"Negative input not possible"); 
}

TEST(AddTest, StandardValues) {
  Calculator c;
  EXPECT_EQ(40,c.add(10,30)); 
}

TEST(AddTest, AposBneg) {
  Calculator c;
  EXPECT_EQ(0,c.add(10,-10)); 
}

TEST(AddTest, ANegBpos) {
  Calculator c;
  EXPECT_EQ(0,c.add(-10,10)); 
}

TEST(AddTest, AandBnegative) {
  Calculator c;
  EXPECT_EQ(-20,c.add(-10,-10)); 
}

TEST(SubTest, StandardValues) {
  Calculator c;
  EXPECT_EQ(-20,c.sub(10,30)); 
}

TEST(SubTest, AposBneg) {
  Calculator c;
  EXPECT_EQ(0,c.sub(10,10)); 
}

TEST(SubTest, ANegBpos) {
  Calculator c;
  EXPECT_EQ(20,c.sub(30,10)); 
}

TEST(SubTest, AandBnegative) {
  Calculator c;
  EXPECT_EQ(0,c.sub(-10,-10)); 
}

TEST(DivTest, StandardValues) {
  Calculator c;
  EXPECT_DOUBLE_EQ(2,c.div(20,10)); 
}

TEST(DivTest, DivHimself) {
  Calculator c;
  EXPECT_DOUBLE_EQ(1,c.div(10,10)); 
}

TEST(DivTest, WithReste) {
  Calculator c;
  EXPECT_NEAR(2.14286,c.div(30,14),0.001); 
}

TEST(DivTest, Question6) {
  Calculator c;
  EXPECT_NEAR(2.333,c.div(7,3),0.001); 
}

TEST(DivTest, Death) {
  Calculator c;
  ASSERT_DEATH(c.div(60,0), "Error: Division by 0 not possible"); 
}

TEST(DivTest, Div0) {
  Calculator c;
  ASSERT_EXIT(c.div(60,0), ::testing::ExitedWithCode(255) ,"Error: Division by 0 not possible"); 
}

TEST(MulTest, Standard) {
  Calculator c;
  EXPECT_DOUBLE_EQ(49,c.multiplication(7,7)); 
}

TEST(MulTest, NegPos) {
  Calculator c;
  EXPECT_DOUBLE_EQ(100,c.multiplication(10,10)); 
}

TEST(MulTest, PosNeg) {
  Calculator c;
  EXPECT_DOUBLE_EQ(-100,c.multiplication(10,-10)); 
}


TEST(MulTest, NegNeg) {
  Calculator c;
  EXPECT_DOUBLE_EQ(100,c.multiplication(-10,-10)); 
}

TEST(MulTest, By0) {
  Calculator c;
  EXPECT_DOUBLE_EQ(0,c.multiplication(10,0)); 
}
