#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef> // size_t
#include <iostream>

template <typename T, typename F>
void iter(T* arr, const size_t len, const F& func) {
    for(size_t i = 0; i < len; i++) {
        func(arr[i]);
    }
    return ;
}

#endif