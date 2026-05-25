#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // UNORDERED MAP IN C++
    // =========================================================
    /*
        unordered_map stores data in:
        key -> value format

        Unlike map:
        -------------
        Keys are NOT stored in sorted order.

        Internally implemented using:
        Hash Table

        Header File:
        #include <unordered_map>

        Syntax:
        unordered_map<keyDataType, valueDataType> name;

        IMPORTANT FEATURES:
        -------------------
        1. Keys are UNIQUE
        2. No sorted order
        3. Faster average access time
        4. Uses hashing internally
        5. Random access NOT possible
    */



    // =========================================================
    // CREATING UNORDERED MAP
    // =========================================================

    unordered_map<int, int> um;



    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================
    /*
        um[key] = value
        ----------------
        Inserts or updates value.

        insert({key,value})
        -------------------
        Inserts key-value pair.

        emplace(key,value)
        ------------------
        Directly creates pair.
    */

    um[3] = 30;

    um[1] = 10;

    um.insert({2, 20});

    um.emplace(5, 50);

    /*
        Possible Output:
        5 -> 50
        2 -> 20
        1 -> 10
        3 -> 30

        IMPORTANT:
        ----------
        Order is NOT guaranteed.
    */



    // =========================================================
    // PRINTING UNORDERED MAP
    // =========================================================
    /*
        first  -> key
        second -> value
    */

    cout << "Elements in unordered_map:\n";

    for(auto i : um) {

        cout << i.first
             << " -> "
             << i.second
             << endl;
    }



    // =========================================================
    // ACCESSING VALUES
    // =========================================================
    /*
        um[key]
        -------
        Returns value of key.
    */

    cout << "\nValue at key 1: "
         << um[1] << endl;



    // IMPORTANT
    /*
        If key does not exist:
        unordered_map creates new key
        with default value.
    */

    cout << "Value at key 100: "
         << um[100] << endl;

    /*
        New key created:
        100 -> 0
    */



    // =========================================================
    // find()
    // =========================================================
    /*
        find(key)
        ---------
        Returns iterator to key.

        If key not found:
        returns um.end()
    */

    auto it = um.find(2);

    if(it != um.end()) {

        cout << "\nElement found:\n";

        cout << it->first
             << " "
             << it->second
             << endl;
    }
    else {

        cout << "Element not found"
             << endl;
    }



    // =========================================================
    // count()
    // =========================================================
    /*
        count(key)
        ----------
        Returns:
        1 -> exists
        0 -> not exists
    */

    cout << "\nCount of key 3: "
         << um.count(3) << endl;

    cout << "Count of key 500: "
         << um.count(500) << endl;



    // =========================================================
    // erase()
    // =========================================================
    /*
        erase(key)
        ----------
        Removes element using key.
    */

    um.erase(2);

    cout << "\nAfter erase(2):\n";

    for(auto i : um) {

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

    cout << "\nSize of unordered_map: "
         << um.size() << endl;



    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "Is unordered_map empty? "
         << um.empty() << endl;



    // =========================================================
    // swap()
    // =========================================================
    /*
        Swaps contents of maps.
    */

    unordered_map<int, int> um2;

    um2[1000] = 999;

    um.swap(um2);

    cout << "\nAfter swap():\n";

    for(auto i : um) {

        cout << i.first
             << " -> "
             << i.second
             << endl;
    }



    // =========================================================
    // clear()
    // =========================================================
    /*
        Removes all elements.
    */

    um.clear();

    cout << "\nAfter clear(): "
         << um.empty() << endl;



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        MAP vs UNORDERED_MAP
        --------------------

        MAP
        ----
        1. Sorted keys
        2. Uses BST
        3. O(log n)

        Example:
        1 -> 10
        2 -> 20
        3 -> 30



        UNORDERED_MAP
        -------------
        1. No sorted order
        2. Uses Hash Table
        3. Average O(1)

        Example:
        3 -> 30
        1 -> 10
        2 -> 20
    */



    // =========================================================
    // find() vs operator[]
    // =========================================================
    /*
        find(key)
        ---------
        Does NOT create key.

        um[key]
        --------
        Creates key if not present.
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Keys are UNIQUE.

        2. Keys are NOT sorted.

        3. Duplicate keys NOT allowed.

        4. Accessing unknown key using:
           um[key]

           creates new key with default value.

        5. Average Time Complexity:
           insert() -> O(1)
           erase()  -> O(1)
           find()   -> O(1)

        6. Worst case complexity:
           O(n)

        7. Faster than map in most cases.

        8. lower_bound() and upper_bound()
           are NOT available.

        9. Useful for:
           - Frequency counting
           - Fast lookup
           - Hashing problems

        10. Implemented using Hash Table.
    */



    return 0;
}