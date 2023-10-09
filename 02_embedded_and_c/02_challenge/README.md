# チャレンジ2

`TemperatureSensor` と `PressureSensor` という2つの抽象クラスを作成し、それぞれのクラスで `temperature::kelvin` と `pressure::psi` を返す純粋仮想関数 `read` を書いてください。適切な基底クラスから `CPUTemperature`、`CabinTemperature`、`TirePressure` を派生させ、温度と気圧値の読み取りをシミュレートする `read()` 関数を各派生クラスに実装します。`double` や `float` をそのまま使わずにUnit型を使用すると加点されます。
