# チャレンジ5

## タスク1

次のCヘッダーファイルがあり、C++プログラムから `double_array` を呼び出すとします。

```c
// double_array.h
#ifndef DOUBLE_ARRAY_H
#define DOUBLE_ARRAY_H

#include <stddef.h>

void double_array(int *arr, size_t size);

#endif // DOUBLE_ARRAY_H
```

Cヘッダーファイル内で `double_array` 宣言をラップして、C++プログラムでこの関数を使用できるようにしてください。

## タスク2

C++プログラムの `main.cpp` で `double_array` を呼び出し、`std::array` に含まれるデータを引数で渡してください。
