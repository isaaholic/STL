#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Sum
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};

class IsEven
{
public:
    bool operator()(int a, int b)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            return true;
        }
        else if (a % 2 != 0 && b % 2 != 0)
        {
            return false;
        }
        else
        {
            return a % 2 == 0;
        }
    }
    bool operator()(int num)
    {
        return num % 2 == 0;
    }
};

class Lambda
{
public:
    bool operator()(int x)
    {
        return x % 3 == 0;
    }
};

int main()
{
    cout << boolalpha;
    // lambda - anonim funksiyadir.
    // qisa ve tek istifade olunan funksiyalari yaratmaq ucun istifade olunur.
    // syntax: [capture](parameters) -> return_type { body }

    // int a = 5;
    // int b = 10;
    // // auto add = [a,&b]() -> int
    // // {
    // //     return a + b;
    // // };
    // // cout << add() << endl; // 15
    // auto add = [a, b]() mutable -> int
    // {
    //     a++;
    //     return a + b;
    // };
    // cout << add() << endl; // 15
    // cout << a << endl;
    // auto isEven = [](int num) -> bool
    // {
    //     return !(num % 2);
    // };
    // // Predicate - bool qaytaran funksiya.
    // vector<int> ints = {1, 2, 3, 4, 5};
    // cout << all_of(ints.begin(), ints.end(), isEven) << endl; // false
    // cout << any_of(ints.begin(), ints.end(), isEven) << endl; // true

    // auto it = find_if(ints.begin(), ints.end(), [](int num) {
    //     return num%3==0;
    // });
    // if (it != ints.end())
    // {
    //     cout << "Ilk cut eded: " << *it << endl; // 2
    // }

    // Functor - operator() funksiyasini override eden classdir.
    // funksiya kimi cagrila bilen obyektdir.

    Sum s;

    cout << s(5, 10) << endl; // 15

    // Ne kimi ustunlukleri var?
    // 1. State - functorlar state saxlaya bilerler.
    // 2. STL ile rahat isleyir.
    // 3. Lambda funksiyalarina nisbeten daha performanslidirlar.
    // 4. Inline optimization

    vector<int> ints = {4, 3, 5, 2, 1};

    // 1. 4 3 -> 4 3
    // 2. 3 5 -> 3 5
    // 3. 5 2 -> 2 5
    // 4. 5 1 -> 5 1
    // 4 2 3 5 1

    sort(ints.begin(), ints.end(), IsEven());
    for (auto &num : ints)
    {
        cout << num << " ";
    }
    cout << endl;

    IsEven isEven;
    cout << isEven(4) << endl; // true

//     Penaly class-i yazmaq
// Id, Text, DateTime, Price


// 1 mashin nomresinin choxlu cermeleri(Penalties) ola biler.


// Bir neche mashin elave edib, onlara her birine ferqli sayda cerime elave etmek
// ve onlari cap etmek.


// Output operatornu overloading etmek.(for Penalty)


// Cerimeler:
// Qosha xett
// Qirmizi ishiq
// Dayanma durma
// ve s.

    return 0;
}