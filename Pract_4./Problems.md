# Побитови операции

Битовете се номерират от **0** (най-младшият бит е `k = 0`).

---

## Задача 1

По въведени цели неотрицателни числа `N` и `k`, изведете `k`-тия бит на числото `N`.

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int N;
    int k;
    cin >> N >> k;

    cout << ((N >> k) & 1) << endl;
    return 0;
}
```

---

## Задача 2

Променете `k`-тия бит на `0` на цяло неотрицателно число.

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int N;
    int k;
    cin >> N >> k;

    N = N & ~(1u << k);

    cout << N << endl;
    return 0;
}
```

---

## Задача 3

Променете `k`-тия бит на `1` на цяло неотрицателно число.

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int N;
    int k;
    cin >> N >> k;

    N = N | (1u << k);

    cout << N << endl;
    return 0;
}
```

---

## Задача 4

Обърнете `k`-тия бит на цяло неотрицателно число.

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int N;
    int k;
    cin >> N >> k;

    N = N ^ (1u << k);

    cout << N << endl;
    return 0;
}
```

---

## Задача 5

Обърнете младшите 5 бита на цяло неотрицателно число.

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int N;
    cin >> N;

    N = N ^ ((1u << 5) - 1);

    cout << N << endl;
    return 0;
}
```

---

## Задача 6

Разменете стойността на две целочислени променливи, използвайки само побитови операции.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;
    return 0;
}
```

> **Забележка:** Стандартният алгоритъм за размяна на две променливи чрез трета е почти винаги по-бърз и по-разбираем.
