#include "sample.h"

#include "gtest/gtest.h"

namespace yugen {
namespace sample {

TEST(SampleTest, Plus) {
  Sample sample;
  int result = sample.AddNumbers(1, 1);
  EXPECT_EQ(result, 2);
}

TEST(SampleTest, Divide) {
  Sample sample;
  int result = sample.DivideNumbers(1, 1);
  EXPECT_EQ(result, 1);
}
}  // namespace sample
}  // namespace yugen