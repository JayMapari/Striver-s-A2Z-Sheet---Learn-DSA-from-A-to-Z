#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // MAP IN C++
    // =========================================================
    /*
        Map stores data in:
        key -> value format

        Example:
        ----------
        Roll No -> Marks
        ID -> Name

        Internally implemented using:
        Balanced Binary Search Tree (BST)

        Header File:
        #include <map>

        Syntax:
        map<keyDataType, valueDataType> mapName;

        IMPORTANT FEATURES:
        -------------------
        1. Keys are UNIQUE
        2. Keys are automatically sorted
        3. Stores data as key-value pair
        4. Searching is fast
        5. Random access NOT possible
    */



    // =========================================================
    // CREATING MAP
    // =========================================================

    map<int, int> m;

    /*
        key -> int
        value -> int
    */



    // =========================================================
    // MAP WITH PAIR AS VALUE
    // =========================================================

    map<int, pair<int, int>> mp;

    /*
        key -> int
        value -> pair<int,int>
    */



    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================
    /*
        m[key] = value
        --------------
        Inserts or updates value.

        insert({key,value})
        -------------------
        Inserts pair.

        emplace(key,value)
        ------------------
        Directly creates element.
    */

    m[3] = 2;

    m.insert({5, 6});

    m.emplace(1, 4);

    /*
        Map:
        1 -> 4
        3 -> 2
        5 -> 6

        Automatically sorted by key.
    */



    // =========================================================
    // INSERTING IN MAP OF PAIRS
    // =========================================================

    mp[1] = {2, 3};

    mp.emplace(3, make_pair(4, 5));

    /*
        Map:
        1 -> (2,3)
        3 -> (4,5)
    */



    // =========================================================
    // PRINTING MAP
    // =========================================================
    /*
        first  -> key
        second -> value
    */

    cout << "Elements in map:\n";

    for(auto i : m) {

        cout << i.first
             << " "
             << i.second
             << endl;
    }



    // =========================================================
    // PRINTING MAP OF PAIRS
    // =========================================================

    cout << "\nElements in map of pairs:\n";

    for(auto i : mp) {

        cout << i.first
             << " "
             << i.second.first
             << " "
             << i.second.second
             << endl;
    }



    // =========================================================
    // ACCESSING VALUES
    // =========================================================
    /*
        m[key]
        ------
        Returns value of key.
    */

    cout << "\nValue at key 1: "
         << m[1] << endl;

    /*
        Output:
        4
    */



    // IMPORTANT
    /*
        If key does not exist:
        map creates new key
        with default value.
    */

    cout << "Value at key 6: "
         << m[6] << endl;

    /*
        Key 6 created automatically.

        Value:
        0

        Map becomes:
        1 -> 4
        3 -> 2
        5 -> 6
        6 -> 0
    */



    // =========================================================
    // find()
    // =========================================================
    /*
        find(key)
        ---------
        Returns iterator to key.

        If key not found:
        returns m.end()
    */

    auto it = m.find(3);

    if(it != m.end()) {

        cout << "\nElement found:\n";

        cout << it->first
             << " "
             << it->second
             << endl;
    }



    // =========================================================
    // lower_bound()
    // =========================================================
    /*
        lower_bound(x)
        --------------
        Returns iterator to:
        first key >= x
    */

    auto it2 = m.lower_bound(2);

    if(it2 != m.end()) {

        cout << "\nLower bound of 2:\n";

        cout << it2->first
             << " "
             << it2->second
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

    auto it3 = m.upper_bound(2);

    if(it3 != m.end()) {

        cout << "\nUpper bound of 2:\n";

        cout << it3->first
             << " "
             << it3->second
             << endl;
    }



    // =========================================================
    // erase()
    // =========================================================
    /*
        erase(key)
        ----------
        Removes element using key.
    */

    m.erase(3);

    /*
        Removes:
        3 -> 2
    */

    cout << "\nMap after erase(3):\n";

    for(auto i : m) {

        cout << i.first
             << " "
             << i.second
             << endl;
    }



    // =========================================================
    // size()
    // =========================================================
    /*
        Returns total elements.
    */

    cout << "\nSize of map: "
         << m.size() << endl;



    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "Is map empty? "
         << m.empty() << endl;



    // =========================================================
    // swap()
    // =========================================================
    /*
        Swaps contents of maps.
    */

    map<int, int> m2;

    m2[100] = 200;

    m.swap(m2);

    cout << "\nAfter swap():\n";

    for(auto i : m) {

        cout << i.first
             << " "
             << i.second
             << endl;
    }



    // =========================================================
    // clear()
    // =========================================================
    /*
        Removes all elements.
    */

    m.clear();

    cout << "\nAfter clear(): "
         << m.empty() << endl;



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        SET vs MAP
        ----------

        SET
        ----
        Stores only keys.

        Example:
        1 2 3



        MAP
        ----
        Stores key-value pairs.

        Example:
        1 -> 10
        2 -> 20
    */



    // =========================================================
    // insert() vs emplace()
    // =========================================================
    /*
        insert()
        --------
        Inserts object.

        emplace()
        ---------
        Directly creates object.

        emplace() is generally faster.
    */



    // =========================================================
    // find() vs operator[]
    // =========================================================
    /*
        find(key)
        ---------
        Does NOT create key.

        m[key]
        ------
        Creates key if not present.
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Keys are UNIQUE.

        2. Keys are automatically sorted.

        3. Duplicate keys NOT allowed.

        4. Accessing unknown key using:
           m[key]

           creates new key with default value.

        5. Time Complexity:
           insert() -> O(log n)
           erase()  -> O(log n)
           find()   -> O(log n)

        6. Map iterators are bidirectional.

        7. Random access NOT possible.

           WRONG:
           m[0][1]

        8. Useful in:
           - Frequency counting
           - Key-value storage
           - Database-like operations

        9. lower_bound() and upper_bound()
           work on KEYS.

        10. Implemented using BST internally.
    */



    return 0;
}