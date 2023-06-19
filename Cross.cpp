#include <cstdio>

constexpr float foo(size_t itemCount) {
    return ( 10 - 4.0f * ( itemCount - 1 ) ) / float ( itemCount );
}

int main() {
    constexpr float a = foo(3);
    const float & b = foo(3);
    printf( "%g %g", a, b );
}
