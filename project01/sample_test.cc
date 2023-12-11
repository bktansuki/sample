#include "sample.h"

#include "gtest/gtest.h"

namespace yugen {
namespace sample {

TEST(SampleTest, MinusFn) {
  Sample sample;
  int result = sample.MinusNumbers(10, 9);
  EXPECT_EQ(result, 1);
}

}  // namespace sample
}  // namespace yugen