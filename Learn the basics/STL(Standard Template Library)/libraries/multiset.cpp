#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // MULTISET IN C++
    // =========================================================
    /*
        Multiset stores elements
        in SORTED order.

        Unlike set:
        -------------
        Duplicate elements ARE allowed.

        Internally implemented using:
        Balanced Binary Search Tree (BST)

        Header File:
        #include <set>

        Syntax:
        multiset<dataType> name;

        IMPORTANT FEATURES:
        -------------------
        1. Duplicate values allowed
        2. Elements automatically sorted
        3. Random access NOT possible
        4. Elements cannot be modified directly
    */



    // =========================================================
    // CREATING MULTISET
    // =========================================================

    multiset<int> ms;



    // =========================================================
    // insert() vs emplace()
    // =========================================================
    /*
        insert(value)
        -------------
        Inserts element.

        emplace(value)
        --------------
        Directly creates element.
    */

    ms.insert(3);

    ms.insert(1);

    ms.emplace(1);

    ms.emplace(2);

    ms.emplace(2);

    ms.emplace(2);

    /*
        Multiset:
        1 1 2 2 2 3

        Duplicate values are stored.
    */



    // =========================================================
    // PRINTING MULTISET
    // =========================================================

    cout << "Elements in multiset:\n";

    for(const auto& elem : ms) {

        cout << elem << " ";
    }

    cout << endl;



    // =========================================================
    // erase(value)
    // =========================================================
    /*
        erase(value)
        ------------
        Removes ALL occurrences of value.
    */

    ms.erase(1);

    /*
        Removes both 1's.

        Multiset:
        2 2 2 3
    */



    // =========================================================
    // count()
    // =========================================================
    /*
        count(value)
        ------------
        Returns total occurrences of value.
    */

    int count1 = ms.count(1);

    cout << "\nCount of 1: "
         << count1 << endl;

    /*
        Output:
        0
    */



    // =========================================================
    // erase(iterator)
    // =========================================================
    /*
        erase(iterator)
        ----------------
        Removes only ONE occurrence.
    */

    ms.erase(ms.find(2));

    /*
        Removes first occurrence of 2.

        Multiset:
        2 2 3
    */



    int count2 = ms.count(2);

    cout << "Count of 2: "
         << count2 << endl;

    /*
        Output:
        2
    */



    // =========================================================
    // erase(start,end)
    // =========================================================
    /*
        erase(start,end)
        ----------------
        Removes elements in range:
        [start,end)

        end iterator NOT included.
    */

    auto it = ms.find(2);

    /*
        it points to first 2
    */

    ms.erase(it, next(it, 2));

    /*
        next(it,2)
        ----------
        Moves iterator 2 positions ahead.

        Removes:
        2 2

        Remaining:
        3
    */



    // =========================================================
    // PRINT FINAL MULTISET
    // =========================================================

    cout << "\nFinal multiset:\n";

    for(const auto& elem : ms) {

        cout << elem << " ";
    }

    cout << endl;



    // =========================================================
    // find()
    // =========================================================
    /*
        find(value)
        -----------
        Returns iterator to first occurrence.

        If not found:
        returns ms.end()
    */

    auto it2 = ms.find(3);

    if(it2 != ms.end()) {

        cout << "\nElement found: "
             << *it2 << endl;
    }
    else {

        cout << "Element not found"
             << endl;
    }



    // =========================================================
    // lower_bound() and upper_bound()
    // =========================================================
    /*
        lower_bound(x)
        --------------
        First element >= x

        upper_bound(x)
        --------------
        First element > x
    */

    auto lb = ms.lower_bound(3);

    auto ub = ms.upper_bound(3);

    if(lb != ms.end()) {

        cout << "Lower bound of 3: "
             << *lb << endl;
    }

    if(ub != ms.end()) {

        cout << "Upper bound of 3: "
             << *ub << endl;
    }
    else {

        cout << "No upper bound found"
             << endl;
    }



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        SET vs MULTISET
        ----------------

        SET
        ----
        Stores unique values only.

        Example:
        1 2 3



        MULTISET
        --------
        Stores duplicate values also.

        Example:
        1 1 2 2 3
    */



    // =========================================================
    // erase() DIFFERENCES
    // =========================================================
    /*
        erase(value)
        ------------
        Removes ALL occurrences.

        erase(iterator)
        ----------------
        Removes only ONE occurrence.

        erase(start,end)
        ----------------
        Removes range.
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Multiset stores duplicate values.

        2. Elements remain sorted automatically.

        3. Random access NOT possible.

           WRONG:
           ms[0]

        4. Iterators are bidirectional.

        5. Time Complexity:
           insert() -> O(log n)
           erase()  -> O(log n)
           find()   -> O(log n)

        6. find() returns first occurrence.

        7. count() may return values > 1.

        8. next(iterator,n)
           moves iterator forward by n positions.

        9. Useful when duplicate sorted storage
           is required.

        10. Implemented using BST internally.
    */



    return 0;
}