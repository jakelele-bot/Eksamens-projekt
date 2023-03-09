// Class for each parameter with its own value and limits
class Parameter {
  private:
    int _value;
    int _minValue;
    int _maxValue;
  public:
    Parameter(int minValue, int maxValue) {
      _value = minValue;
      _minValue = minValue;
      _maxValue = maxValue;
    }
    void increment() {
      if (_value < _maxValue) {
        _value++;
      }
    }
    void decrement() {
      if (_value > _minValue) {
        _value--;
      }
    }
    int getValue() {
      return _value;
    }
};