#pragma once
// Functionality to measure the duration (millisecond) of event takes place
namespace yugen {
namespace StopWatchLai {

class StopWatch {
 private:
  // end_time_ is set during initialize
  long end_time_;

  // elapsed_ in milliseconds will increase at every event.
  long elapsed_;

  // triggered_ is set to true if StopWatch hits end_time value
  bool triggered_;

 public:
  StopWatch() = default;

  // sets end_time value
  void Initialize(long end_time);

  // start stop watch
  void Start();

  // stop stop watch
  void Stop();

  // get elapsed_ value
  long get_value() const;

  // sets elapsed_ to zero
  void ResetValue();

  // get triggered_ variable
  void get_is_triggered() const;
};

}  // namespace StopWatchLai
}  // namespace yugen