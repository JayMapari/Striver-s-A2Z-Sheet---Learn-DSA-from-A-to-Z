#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // MULTIMAP IN C++
    // =========================================================
    /*
        Multimap stores data in:
        key -> value format

        Unlike map:
        -------------
        Duplicate KEYS are allowed.

        Internally implemented using:
        Balanced Binary Search Tree (BST)

        Header File:
        #include <map>

        Syntax:
        multimap<keyDataType, valueDataType> name;

        IMPORTANT FEATURES:
        -------------------
        1. Duplicate keys allowed
        2. Keys automatically sorted
        3. Stores key-value pairs
        4. Random access NOT possible
        5. Faster searching
    */



    // =========================================================
    // CREATING MULTIMAP
    // =========================================================

    multimap<int, int> mm;



    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================
    /*
        insert({key,value})
        -------------------
        Inserts key-value pair.

        emplace(key,value)
        ------------------
        Directly creates pair.

        IMPORTANT:
        ----------
        operator[] is NOT supported.
    */

    mm.insert({1, 10});

    mm.insert({1, 20});

    mm.emplace(2, 30);

    mm.emplace(3, 40);

    mm.insert({2, 50});

    /*
        Multimap:
        1 -> 10
        1 -> 20
        2 -> 30
        2 -> 50
        3 -> 40

        Duplicate keys allowed.
    */



    // =========================================================
    // PRINTING MULTIMAP
    // =========================================================
    /*
        first  -> key
        second -> value
    */

    cout << "Elements in multimap:\n";

    for(auto i : mm) {

        cout << i.first
             << " -> "
             << i.second
             << endl;
    }



    // =========================================================
    // find()
    // =========================================================
    /*
        find(key)
        ---------
        Returns iterator to FIRST occurrence.

        If not found:
        returns mm.end()
    */

    auto it = mm.find(1);

    if(it != mm.end()) {

        cout << "\nFirst occurrence of key 1:\n";

        cout << it->first
             << " "
             << it->second
             << endl;
    }



    // =========================================================
    // count()
    // =========================================================
    /*
        count(key)
        ----------
        Returns number of occurrences of key.
    */

    cout << "\nCount of key 1: "
         << mm.count(1) << endl;

    cout << "Count of key 2: "
         << mm.count(2) << endl;



    // =========================================================
    // lower_bound()
    // =========================================================
    /*
        lower_bound(x)
        --------------
        Returns iterator to:
        first key >= x
    */

    auto lb = mm.lower_bound(2);

    if(lb != mm.end()) {

        cout << "\nLower bound of 2:\n";

        cout << lb->first
             << " "
             << lb->second
             << endl;
    }



    // =========================================================
    // upper_bound()
    // =========================================================
    /*
        upper_bound(x)
        --------------
        Returns iterator to:
        first key > x
    */

    auto ub = mm.upper_bound(2);

    if(ub != mm.end()) {

        cout << "\nUpper bound of 2:\n";

        cout << ub->first
             << " "
             << ub->second
             << endl;
    }



    // =========================================================
    // equal_range()
    // =========================================================
    /*
        equal_range(key)
        ----------------
        Returns pair of iterators:
        {lower_bound(key), upper_bound(key)}

        Useful for traversing all duplicates.
    */

    auto range = mm.equal_range(1);

    cout << "\nAll values of key 1:\n";

    for(auto i = range.first;
        i != range.second;
        i++) {

        cout << i->first
             << " "
             << i->second
             << endl;
    }



    // =========================================================
    // erase(key)
    // =========================================================
    /*
        erase(key)
        ----------
        Removes ALL occurrences of key.
    */

    mm.erase(1);

    /*
        Removes:
        1 -> 10
        1 -> 20
    */

    cout << "\nAfter erase(1):\n";

    for(auto i : mm) {

        cout << i.first
             << " -> "
             << i.second
             << endl;
    }



    // =========================================================
    // size()
    // =========================================================
    /*
        Returns total number of elements.
    */

    cout << "\nSize of multimap: "
         << mm.size() << endl;



    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "Is multimap empty? "
         << mm.empty() << endl;



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        MAP vs MULTIMAP
        ----------------

        MAP
        ----
        Duplicate keys NOT allowed.

        Example:
        1 -> 10
        2 -> 20



        MULTIMAP
        --------
        Duplicate keys allowed.

        Example:
        1 -> 10
        1 -> 20
        2 -> 30
    */



    // =========================================================
    // operator[] DIFFERENCE
    // =========================================================
    /*
        MAP
        ----
        Supports:
        m[key]



        MULTIMAP
        --------
        Does NOT support:
        mm[key]

        Because one key can have multiple values.
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Duplicate keys are allowed.

        2. Keys remain sorted automatically.

        3. Random access NOT possible.

        4. operator[] NOT supported.

        5. find() returns FIRST occurrence.

        6. count() may return values > 1.

        7. equal_range() useful for duplicates.

        8. Time Complexity:
           insert() -> O(log n)
           erase()  -> O(log n)
           find()   -> O(log n)

        9. Iterators are bidirectional.

        10. Implemented using BST internally.
    */



    return 0;
}