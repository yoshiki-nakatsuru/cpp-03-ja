// コードを入力してください
#pragma once

template <typename T>
T clamp(T a, T min, T max){
    T result = a;
    if( a < min ) {
        result = min;
    }else if ( a > max){
        result = max;
    }

    return result;
}
