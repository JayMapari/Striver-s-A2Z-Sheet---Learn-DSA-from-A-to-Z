#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // SET IN C++
    // =========================================================
    /*
        Set stores UNIQUE elements
        in SORTED order.

        Internally implemented using:
        Balanced Binary Search Tree (BST)

        Header File:
        #include <set>

        Syntax:
        set<dataType> setName;

        IMPORTANT FEATURES:
        -------------------
        1. Stores only unique elements
        2. Elements are automatically sorted
        3. Duplicate values are ignored
        4. Random access NOT possible
        5. Elements cannot be modified directly
    */



    // =========================================================
    // CREATING SET
    // =========================================================

    set<int> s;



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

        emplace() is generally faster.
    */

    s.insert(3);

    s.insert(2);

    s.emplace(1);

    s.insert(2);

    /*
        No effect because:
        Set stores only UNIQUE values.
    */

    s.insert(4);

    s.insert(5);

    s.insert(6);

    /*
        Final Set:
        1 2 3 4 5 6

        Automatically sorted.
    */



    // =========================================================
    // PRINTING SET
    // =========================================================
    /*
        Set elements are printed in sorted order.
    */

    cout << "Elements in set:\n";

    for(const auto& elem : s) {

        cout << elem << " ";
    }

    cout << endl;



    // =========================================================
    // find()
    // =========================================================
    /*
        find(value)
        -----------
        Returns iterator to element.

        If element not found:
        returns s.end()
    */

    set<int>::iterator it = s.find(2);

    /*
        it points to:
        2
    */

    if(it != s.end()) {

        cout << "\nElement found: "
             << *it << endl;
    }
    else {

        cout << "\nElement not found"
             << endl;
    }



    // =========================================================
    // USING auto WITH find()
    // =========================================================

    auto it2 = s.find(4);

    if(it2 != s.end()) {

        cout << "Element found using auto: "
             << *it2 << endl;
    }
    else {

        cout << "Element 4 not found"
             << endl;
    }



    // =========================================================
    // erase()
    // =========================================================
    /*
        erase(value)
        ------------
        Removes element directly.
    */

    s.erase(2);

    /*
        Set after erase:
        1 3 4 5 6
    */



    // =========================================================
    // count()
    // =========================================================
    /*
        count(value)
        ------------
        Returns:
        1 -> element exists
        0 -> element does not exist

        Since set stores unique values,
        count can only be 0 or 1.
    */

    int count = s.count(2);

    cout << "\nCount of 2: "
         << count << endl;



    // =========================================================
    // erase(iteratorStart, iteratorEnd)
    // =========================================================
    /*
        Erases range:
        [start,end)

        end iterator NOT included.
    */

    auto it3 = s.find(3);

    auto it4 = s.find(10);

    /*
        10 not found,
        so it4 becomes s.end()
    */

    s.erase(it3, it4);

    /*
        Removes:
        3 4 5 6

        Remaining:
        1
    */

    cout << "\nElements after erasing range [3,10):\n";

    for(const auto& elem : s) {

        cout << elem << " ";
    }

    cout << endl;



    // =========================================================
    // lower_bound()
    // =========================================================
    /*
        lower_bound(x)
        --------------
        Returns iterator to:
        first element >= x
    */

    auto lb = s.lower_bound(1);

    if(lb != s.end()) {

        cout << "\nLower bound of 1: "
             << *lb << endl;
    }



    // =========================================================
    // upper_bound()
    // =========================================================
    /*
        upper_bound(x)
        --------------
        Returns iterator to:
        first element > x
    */

    auto ub = s.upper_bound(1);

    if(ub != s.end()) {

        cout << "Upper bound of 1: "
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
        insert() vs emplace()
        ---------------------
        insert() -> inserts object
        emplace() -> direct creation

        find() vs count()
        -----------------
        find() -> returns iterator
        count() -> returns 0 or 1

        lower_bound() vs upper_bound()
        ------------------------------
        lower_bound(x) -> first >= x
        upper_bound(x) -> first > x

        erase(value) vs erase(iterator)
        --------------------------------
        erase(value) -> erase by value
        erase(iterator) -> erase by position
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Set stores UNIQUE elements only.

        2. Elements remain SORTED automatically.

        3. Duplicate insertion has no effect.

        4. Random access NOT possible.

           WRONG:
           s[0]

        5. Iterators are bidirectional.

        6. Cannot modify elements directly.

        7. Time Complexity:
           insert()       -> O(log n)
           erase()        -> O(log n)
           find()         -> O(log n)
           lower_bound()  -> O(log n)

        8. Useful in:
           - Removing duplicates
           - Ordered data storage
           - Fast searching

        9. Set uses BST internally.

        10. Elements are always sorted
            in ascending order.
    */



    return 0;
}