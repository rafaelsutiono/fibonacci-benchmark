# Fibonacci Benchmark

## Instant links
* [Fibonacci Iterative](#Fibonacci_Iterative)
* [Fibonacci Recursive](#Fibonacci_Recursive)
* [How to Run](#How_to_Run)
* [Output](#Output)

## Fibonacci Iterative

Fibonacci Series using Iterative Method:

```
int fI(int N){
    int n1=0;
    int n2=1;
    int out;

    if (N==0) {
        return n1;
    } else if (N==1){
        return n2;
    } else {
        for (int i = 2; i<= N; i++){ 
            out = n1+n2;
            n1 = n2;
            n2 = out;
        }
        return out;
    }
}
```

## Fibonacci Recursive

Fibonacci Series using Iterative Method:

```
int fR (int N){
    if (N==0){
        return 0;
    } else if (N==1){
        return 1;
    } else {
        return fR(N - 1) + fR(N-2);
    }
}
```

## How to Run:
```
make run
./main.exe
```

## Output:
```
The fibonacci value for 5 is 5
The fibonacci value for 5 is 5
The fibonaaci value F0 = 0 = 0
The fibonaaci value F1 = 1 = 1
The fibonaaci value F2 = 1 = 1
The fibonaaci value F3 = 2 = 2
The fibonaaci value F4 = 3 = 3
The fibonaaci value F5 = 5 = 5
```

# Benchmark (Time Complexity)

## Instant links
* [Iterative](#Iterative)
* [Recursive](#Recursive)
* [How to Run](#How_to_Run)
* [Output](#Output)

## Iterative
```
#include <stdio.h>
#include <time.h>
#include "mylib.h"

int main()
{
    int n = 5;
    int c;
    int i = 0;
    clock_t t;
    t = clock();
    for (c=2; c<=n; c++)
    {
        printf("%d\n",fI(i));
        i++;
    }
    t = clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken: %f", time_taken);
    return 0;
}
```

## Recursive
```
#include <stdio.h>
#include <time.h>
#include "mylib.h"

int main()
{
    int n = 5;
    int c;
    int i = 0;
    clock_t t;
    t = clock();
    for (c=2; c<=n; c++)
    {
        printf("%d\n",fR(i));
        i++;
    }
    t = clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken: %f", time_taken);
    return 0;
}
```

## How to Run
```
Time Recursive:
make time
./main_b_time_recursive.exe

Time Iterative:
make time
./main_b_time_iterative.exe
```

## Output
```
Time Recursive:
0
1
1
2
3
5
Time taken: 0.004000

Time Iterative:
0
1
1
2
3
5
Time taken: 0.006000
```

# Benchmark (Space Complexity)

## Instant links
* [Iterative](#Iterative)
* [Recursive](#Recursive)
* [How to Run](#How_to_Run)
* [Output](#Output)

## Iterative
```
#include <stdio.h>
#include "mylib.h"

int main (void) {

    int a;

    while (1) {
        a = fI(500);
        }

    return 0;

}
```

## Recursive
```
#include <stdio.h>
#include "mylib.h"

int main (void) {

    int a;

    while (1) {
        a = fR(500);
        }

    return 0;

}
```

## How to Run
```
Space Iterative:
make space
./main_b_space_iterative.exe

Space Recursive:
make space
./main_b_space_recursive.exe
```
## Output
