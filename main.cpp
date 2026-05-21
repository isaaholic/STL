#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>
#include <stack>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>

using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

bool hasAnyEven(vector<int> &ints)
{
    for (auto &num : ints)
    {
        if (isEven(num))
        {
            return true;
        }
    }
    return false;
}

bool myAnyOf(vector<int>::iterator begin, vector<int>::iterator end, bool (*predicate)(int))
{
    for (auto it = begin; it != end; it++)
    {
        if (predicate(*it))
        {
            return true;
        }
    }
    return false;
}

bool isGreaterThanZero(int num)
{
    return num > 0;
}

int main()
{
    // STL - Standard Template Library
    // Hazir generik (template) konteynirlar alqoritmler ve iteratorlardan ibarettir.
    // ex: vector, deque, set, stack, queue, priority_queue
    // Konteyner - melumat saxlayan obyektdir.
    // 3 novu var - Sequence, Associative, Unordered
    // Sequence - Elementler ardicil sekilde saxlanilir.
    // vector<int> ints; // bos vector
    // ints.push_back(1); // 1 elementini vectorun sonuna elave edir
    // ints.push_back(2);
    // ints.push_back(3);
    // ints.push_back(4);
    // ints.push_back(5); // 5 elementini vectorun sonuna elave edir
    // ints.push_back(6); // 6 elementini vectorun sonuna elave edir
    // ints.push_back(7); // 7 elementini vectorun sonuna elave edir
    // ints.push_back(8); // 7 elementini vectorun sonuna elave edir
    // ints.push_back(9); // 7 elementini vectorun sonuna elave edir
    // ints.pop_back(); // vectorun son elementini silir (9)
    // cout << "Vectorun olcusu: " << ints.size() << endl; // 3
    // cout << "Vectorun capacitysi: " << ints.capacity() << endl; // 4
    // cout << "Vectorun elementleri: ";
    // for (size_t i = 0; i < ints.size(); i++) {
    //     cout << ints[i] << " "; // 1 2 3
    // }
    // cout << endl;
    // list - double linked listdir.
    // list<float> floats; // bos list
    // floats.push_back(1.1); // 1.1 elementini listin sonuna elave edir
    // floats.push_back(2.2); // 2.2 elementini listin sonuna elave edir
    // floats.push_front(3.3); // 3.3 elementini listin basina elave edir
    // cout << "Listin olcusu: " << floats.size() << endl; // 3
    // cout << "Listin elementleri: ";
    // // iterator - conteynerin icinde gezmeye yarayan obyektdir.
    // for (auto it = floats.begin(); it != floats.end(); it++) {
    //     cout << *it << " "; // 3.3 1.1 2.2
    // }
    // cout << endl;

    // // deque - double ended queue
    // deque<string> names; // bos deque
    // names.push_back("Alice"); // "Alice" elementini deque'nin sonuna elave edir
    // names.push_back("Bob"); // "Bob" elementini deque'nin sonuna elave edir
    // names.push_front("Charlie"); // "Charlie" elementini deque'nin basina elave edir
    // cout << "Deque'nin olcusu: " << names.size() << endl; // 3
    // cout << "Deque'nin elementleri: ";
    // for (auto it = names.begin(); it != names.end(); it++) {
    //     cout << *it << " "; // Charlie Alice Bob
    // }
    // cout << endl;
    // // array - sabit olcude arraydir.
    // array<int, 5> arr; // 5 elementli array
    // arr[0] = 10; // 0 elementine 10 deyerini verir
    // arr[1] = 20; // 1 elementine 20 deyerini verir
    // arr[2] = 30; // 2 elementine 30 deyerini verir
    // arr[3] = 40; // 3 elementine 40 deyerini verir
    // arr[4] = 50; // 4 elementine 50 deyerini verir
    // cout << "Array'in elementleri: ";
    // for (size_t i = 0; i < arr.size(); i++) {
    //     cout << arr[i] << " "; // 10 20 30 40 50
    // }
    // // stack - LIFO (Last In First Out) strukturu
    // stack<string> books; // bos stack
    // books.push("C++ Primer"); // "C++ Primer" elementini stack'in ustune elave edir
    // books.push("Effective C++"); // "Effective C++" elementini stack'in ustune elave edir
    // books.push("The C++ Programming Language"); // "The C++ Programming Language" elementini stack'in ustune elave edir
    // cout << "Stack'in olcusu: " << books.size() << endl; // 3
    // cout << "Stack'in ustundeki element: " << books.top() << endl;
    // // stackdeki elementleri gostermek
    // for (size_t i = 0; i < books.size(); i++)
    // {
    //     cout << books.top() << " "; // The C++ Programming Language Effective C++ C++ Primer
    //     books.pop(); // stack'in ustundeki elementi silir
    // }
    // forward_list
    // forward_list<int> flist; // bos forward_list
    // flist.push_front(1); // 1 elementini forward_list'in basina elave edir
    // flist.push_front(2); // 2 elementini forward_list'in basina elave edir
    // flist.push_front(3); // 3 elementini forward_list
    // cout << "Forward_list'in elementleri: ";
    // for (auto it = flist.begin(); it != flist.end(); it++) {
    //     cout << *it << " "; // 3 2 1
    // }

    // cout << endl;

    // Associative - tree esasli konteynerlerdir. Avtomatik siralanirlar.
    // set - unikal elementler saxlayan konteynerdir.
    // set<int> unumbers; // bos set
    // unumbers.insert(10);
    // unumbers.insert(20);
    // unumbers.insert(30);
    // unumbers.insert(20); // halhazirda movcud oldugu ucun elave edilmir.
    // // unumbers.erase(10); // 40 elementi setde olmadigi ucun silme emeliyyati gormur.
    // cout << "Set'in elementleri: ";
    // for (auto it = unumbers.begin(); it != unumbers.end(); it++) {
    //     cout << *it << " "; // 10 20 30
    // }
    // cout << endl;

    // map - key-value cütlerini saxlayan konteynerdir.
    // map<int, string> idToName; // bos map
    // idToName[111] = "Alice";   // 1 keyine "Alice" value'sunu verir
    // idToName[112] = "Bob";     // 2 keyine "Bob" value'sunu verir
    // idToName[113] = "Charlie"; // 3 keyine "Charlie" value'sunu verir

    // cout << "Map'in elementleri: ";
    // for (auto it = idToName.begin(); it != idToName.end(); it++)
    // {
    //     cout << it->first << ":" << it->second << " "; // 111:Alice 112:Bob 113:Charlie
    // }

    // cout << endl;
    // cout << idToName[111] << endl; // Alice

    // multiset - birden cox eyni elementleri saxlayan konteynerdir.
    // multiset<int> numbers; // bos multiset
    // numbers.insert(10);
    // numbers.insert(20);
    // numbers.insert(10); // 10 elementini tekrar elave edir.
    // numbers.insert(30);
    // cout << "Multiset'in elementleri: ";
    // for (auto it = numbers.begin(); it != numbers.end(); it++)
    // {
    //     cout << *it << " "; // 10 10 20 30
    // }
    // cout << endl;

    // // multimap - birden cox eyni keye sahip key-value cütlerini saxlayan konteynerdir.
    // multimap<int, string> idToName; // bos multimap
    // idToName.insert({111, "Alice"});   // 111 keyine "Alice" value'sunu verir
    // idToName.insert({112, "Bob"});     // 112 keyine "Bob" value'sunu verir
    // idToName.insert({111, "Charlie"}); // 111 keyine "Charlie" value'sunu verir

    // cout << "Multimap'in elementleri: ";
    // for (auto it = idToName.begin(); it != idToName.end(); it++)
    // {
    //     cout << it->first << ":" << it->second << " "; // 111:Alice 111:Charlie 112:Bob
    // }
    // cout << endl;

    // // Unordered - hash table esasli konteynerlerdir. Siralanmazlar.
    // unordered_map<string, int> nameToAge; // bos unordered_map
    // nameToAge["Alice"] = 30; // "Alice" keyine 30 value'sunu verir
    // nameToAge["Bob"] = 30;   // "Bob" keyine 25 value'sunu verir
    // nameToAge["Charlie"] = 35; // "Charlie" keyine 35 value'sunu verir
    // cout << "Unordered_map'in elementleri: ";
    // for (auto it = nameToAge.begin(); it != nameToAge.end(); it++)
    // {
    //     cout << it->first << ":" << it->second << " "; // Bob:25 Alice:30 Charlie:35
    // }

    // auto isEqual = nameToAge.key_eq();
    // cout << endl;
    // if (isEqual("Alice", "Alice"))
    // {
    //     cout << "Alice ve Bob eynidir." << endl;
    // }
    // else
    // {
    //     cout << "Alice ve Bob ferqlidir." << endl; // bu cixacaq cunki Alice ve Bob ferqlidir.
    // }
    // cout << endl;
    // // Hash table - melumati cox suretli saxlamaq ve axtarmaq ucun istifade
    // // olunan data structure-dir.

    // unordered_set<int> numbers = {1, 100, 20, 10, 70};

    // // print the set
    // cout << "Numbers are: ";
    // for (auto &num : numbers)
    // {
    //     cout << num << ", ";
    // }

    // cout << endl;

    vector<int> ints = {1, 2, 3, 4, 5, 8, 10, 1, 2, 5};
    vector<int> ints2 = {1, 2, 3, 4, 5, -1, -3};
    cout << "Vectorun elementleri: ";
    for (auto &num : ints)
    {
        cout << num << " "; // 1 2 3 4 5
    }
    cout << endl;

    cout << boolalpha; // true ve false yazdirir

    cout << "Minimum element: " << *min_element(ints.begin() + 1, ints.end() - 1) << endl;                                                                                         // minimum element: 2
    cout << "Maximum element: " << *max_element(ints.begin() + 1, ints.end() - 1) << endl;                                                                                         // maximum element: 4
    cout << "Minimum ve maksimum element: " << *minmax_element(ints.begin() + 1, ints.end() - 1).first << " " << *minmax_element(ints.begin() + 1, ints.end() - 1).second << endl; // minimum element: 2 maximum element: 4

    cout << "Any: " << any_of(ints.begin(), ints.end(), isEven) << endl;              // true
    cout << "All: " << all_of(ints.begin(), ints.end(), isGreaterThanZero) << endl;   // false
    cout << "None: " << none_of(ints.begin(), ints.end(), isGreaterThanZero) << endl; // false

    auto mispair = mismatch(ints.begin(), ints.end(), ints2.begin()); // 1 2
    cout << "Mismatch: " << *mispair.first << " " << *mispair.second << endl;

    // reverse(ints2.begin(), ints2.end());
    // sort(ints2.begin(), ints2.end());
    // nth_element(ints2.begin(), ints2.begin() + ints2.size()/2, ints2.end());
    // for (auto it = ints2.begin(); it != ints2.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // merge(ints.begin(), ints.end(), ints2.begin(), ints2.end(), ostream_iterator<int>(cout, " "));
    // replace(ints2.begin(), ints2.end(), 2, 20);
    // for (auto it = ints2.begin(); it != ints2.end(); it++)
    // {
    //     cout << *it << " "; // 1 20 3 4 5 -1 -3
    // }
    // cout << endl;

    // Unque
    // #pragma warning (disable: 4996)
    // auto unique_it = unique(ints.begin(), ints.end());
    // ints.resize(distance(ints.begin(), unique_it)); // unique elementlerin sayina gore vectorun olcusunu deyisir.
    // for (unique_it = ints.begin(); unique_it != ints.end(); unique_it++)
    // {
    //     cout << *unique_it << " "; // 1 2 3 4 5 8 10
    // }
    // cout << endl;
    vector<int> v = { 1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 };

    vector<int>::iterator ip;

    // Using std::unique
    ip = std::unique(v.begin(), v.end());
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefine

    // Resizing the vector so as to remove the undefined
    // terms
    v.resize(std::distance(v.begin(), ip));

    // Displaying the vector after applying std::unique
    for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }
    return 0;
    // unique deki cutluk problemini axtar.
}