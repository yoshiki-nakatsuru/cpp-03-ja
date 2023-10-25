# チャレンジ3

可変数のブール型引数を受け取り、すべての引数がtrueの場合はtrue、それ以外の場合はfalseを返す可変引数の関数テンプレート `allTrue` を作成してください。引数が指定されていない場合は、trueを返すようにします。

使用例:

```cpp
// 出力: 1 (true)
std::cout << allTrue(true, true, true) << std::endl;
// 出力: 0 (false)
std::cout << allTrue(true, false, true) << std::endl;
// 出力: 1 (true)
std::cout << allTrue() << std::endl;
```