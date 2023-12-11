#include "sample.h"

#include "gtest/gtest.h"

namespace yugen {
namespace sample {

TEST(SampleTest, AddFn) {
  Sample sample;
  int result = sample.AddNumbers(1, 1);
  EXPECT_EQ(result, 2);
}

TEST(SampleTest, MinusFn) {
  Sample sample;
  int result = sample.MinusNumbers(10, 9);
  EXPECT_EQ(result, 1);
}

}  // namespace sample
}  // namespace yugen