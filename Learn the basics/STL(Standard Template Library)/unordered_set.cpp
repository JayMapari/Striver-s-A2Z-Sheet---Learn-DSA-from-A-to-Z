#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // UNORDERED SET IN C++
    // =========================================================
    /*
        unordered_set stores UNIQUE elements.

        Unlike set:
        -------------
        Elements are NOT stored in sorted order.

        Internally implemented using:
        Hash Table

        Header File:
        #include <unordered_set>

        Syntax:
        unordered_set<dataType> name;

        IMPORTANT FEATURES:
        -------------------
        1. Stores unique elements only
        2. Order is NOT maintained
        3. Faster average operations
        4. Uses hashing internally
        5. Random access NOT possible
    */



    // =========================================================
    // CREATING UNORDERED SET
    // =========================================================

    unordered_set<int> us;



    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================
    /*
        insert(value)
        -------------
        Inserts element.

        emplace(value)
        --------------
        Directly creates and inserts element.
    */

    us.insert(3);

    us.insert(1);

    us.insert(2);

    us.insert(2);

    /*
        Duplicate value ignored.

        Possible Output:
        2 1 3

        IMPORTANT:
        ----------
        Order may change.
    */

    us.emplace(5);

    us.emplace(4);



    // =========================================================
    // PRINTING UNORDERED SET
    // =========================================================
    /*
        Output order is NOT guaranteed.
    */

    cout << "Elements in unordered_set:\n";

    for(const auto& elem : us) {

        cout << elem << " ";
    }

    cout << endl;



    // =========================================================
    // size()
    // =========================================================
    /*
        Returns total number of elements.
    */

    cout << "\nSize of unordered_set: "
         << us.size() << endl;



    // =========================================================
    // count()
    // =========================================================
    /*
        count(value)
        ------------
        Returns:
        1 -> exists
        0 -> not exists
    */

    cout << "Count of 2: "
         << us.count(2) << endl;

    cout << "Count of 10: "
         << us.count(10) << endl;



    // =========================================================
    // find()
    // =========================================================
    /*
        find(value)
        -----------
        Returns iterator to element.

        If not found:
        returns us.end()
    */

    auto it = us.find(3);

    if(it != us.end()) {

        cout << "\nElement found: "
             << *it << endl;
    }
    else {

        cout << "Element not found"
             << endl;
    }



    // =========================================================
    // erase(value)
    // =========================================================
    /*
        Removes element from unordered_set.
    */

    us.erase(2);

    /*
        Removes 2.
    */

    cout << "\nAfter erase(2):\n";

    for(const auto& elem : us) {

        cout << elem << " ";
    }

    cout << endl;



    // =========================================================
    // begin() and end()
    // =========================================================
    /*
        begin()
        -------
        Points to first element.

        end()
        -----
        Points after last element.

        IMPORTANT:
        ----------
        Order is not fixed.
    */

    auto beginIt = us.begin();

    cout << "\nElement at begin(): "
         << *beginIt << endl;



    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "\nIs unordered_set empty? "
         << us.empty() << endl;



    // =========================================================
    // clear()
    // =========================================================
    /*
        Removes all elements.
    */

    us.clear();

    cout << "\nAfter clear(): "
         << us.empty() << endl;



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        SET vs UNORDERED_SET
        --------------------

        SET
        ----
        1. Sorted order
        2. Uses BST
        3. O(log n)

        Example:
        1 2 3 4



        UNORDERED_SET
        -------------
        1. No sorted order
        2. Uses Hash Table
        3. Average O(1)

        Example:
        3 1 4 2
    */



    // =========================================================
    // SET vs MULTISET vs UNORDERED_SET
    // =========================================================
    /*
        SET
        ----
        Unique + Sorted

        MULTISET
        --------
        Duplicate Allowed + Sorted

        UNORDERED_SET
        -------------
        Unique + Unsorted
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Duplicate values are NOT allowed.

        2. Elements are NOT sorted.

        3. Random access NOT possible.

           WRONG:
           us[0]

        4. Iterators are forward iterators.

        5. Average Time Complexity:
           insert() -> O(1)
           erase()  -> O(1)
           find()   -> O(1)

        6. Worst case complexity can become O(n).

        7. Faster than set in most cases.

        8. lower_bound() and upper_bound()
           are NOT available.

        9. Useful when ordering is not required.

        10. Implemented using hashing.
    */



    return 0;
}