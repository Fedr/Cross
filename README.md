# Cross
In this repository, you will find a simple Visual C++ program:
```
constexpr float foo(size_t itemCount) {
    return ( 10 - 4.0f * ( itemCount - 1 ) ) / float ( itemCount );
}

int main() {
    constexpr float a = foo(3);
    const float & b = foo(3);
    printf( "%g %g", a, b );
}
```

It shall print `0.666667 0.666667`, but if it is compiled in Visual Studio 2022 version 17.6 the result is weird: `0.666667 1`.
