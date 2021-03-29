// Copyright 2021 Prokofeva Elizaveta

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Prokofeva_Liza_Complex_Number, Test_Sum_And_Diff) {
    double re1 = 1.5;
    double im1 = 0.5;

    double re2 = 2.5;
    double im2 = 3.5;

    double re3 = 0.5;
    double im3 = -0.5;

    ComplexNumber first(re1, im1);
    ComplexNumber second(re2, im2);
    ComplexNumber third(re3, im3);

    ComplexNumber result = first + second - third;

    ASSERT_DOUBLE_EQ(3.5, result.getRe());
    ASSERT_DOUBLE_EQ(4.5, result.getIm());
}

TEST(Prokofeva_Liza_Complex_Number, Test_Mult_And_Diff) {
    double re1 = 10.0;
    double im1 = 2.9;

    double re2 = 18.75;
    double im2 = 23.46;

    ComplexNumber first(re1, im1);
    ComplexNumber second(re2, im2);

    ComplexNumber result = (second * first) / (first * second);

    ASSERT_EQ(1, result.getRe());
    ASSERT_EQ(0, result.getIm());
}

TEST(Prokofeva_Liza_Complex_Number, Test_Equal_Mark) {
    double re1 = 1.2;
    double im1 = 2.3;

    double re2 = 0.0;
    double im2 = 0.0;
 
    ComplexNumber first(re1, im1);
    ComplexNumber second(re2, im2);

    second = first;

    ASSERT_DOUBLE_EQ(first.getRe(), second.getRe());
    ASSERT_DOUBLE_EQ(first.getIm(), second.getIm());
}

TEST(Prokofeva_Liza_Complex_Number, Test_Set) {
    double re1 = 20.4748;
    double im1 = 45.3435;

    ComplexNumber first(re1, im1);

    first.setRe(20);
    first.setIm(45);

    ASSERT_EQ(20, first.getRe());
    ASSERT_EQ(45, first.getIm());
}
