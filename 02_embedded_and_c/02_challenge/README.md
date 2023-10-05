# Challenge 2

Create two abstract classes called `TemperatureSensor` and `PressureSensor`, each with a pure virtual function `read` that returns a `temperature::kelvin` and `pressure::psi`, respectively. Derive `CPUTemperature`, `CabinTemperature`, and `TirePressure` from the appropriate base types. Implement the `read()` function for each derived class, simulating reading temperature and pressure values. Bonus points for using unit types instead of bare `double`s or `float`s.
