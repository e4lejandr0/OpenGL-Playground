#pragma once 

#include <type_traits>

namespace twod {
    namespace detail {
        template<typename IntT, typename T>
            using if_integral_t = typename std::enable_if_t<std::is_integral<IntT>::value, T>;
    }
}
