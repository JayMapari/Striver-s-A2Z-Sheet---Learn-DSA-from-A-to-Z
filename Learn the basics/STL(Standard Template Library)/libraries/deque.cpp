#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // DEQUE IN C++
    // =========================================================
    /*
        deque = Double Ended Queue

        Features:
        ----------
        1. Insertion/deletion from both ends
        2. Faster than vector for front operations
        3. Random access supported
        4. Dynamic size

        Header File:
        #include <deque>

        Syntax:
        deque<dataType> name;
    */



    // =========================================================
    // CREATING DEQUE
    // =========================================================

    deque<int> d;



    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================
    /*
        push_back()
        -----------
        Inserts at end.

        emplace_back()
        ---------------
        Directly creates at end.

        push_front()
        ------------
        Inserts at beginning.

        emplace_front()
        ---------------
        Directly creates at beginning.
    */

    d.push_back(1);

    d.emplace_back(2);

    d.push_front(4);

    d.emplace_front(3);

    /*
        Deque:
        3 4 1 2
    */



    // =========================================================
    // DELETING ELEMENTS
    // =========================================================
    /*
        pop_back()
        ----------
        Removes last element.

        pop_front()
        -----------
        Removes first element.
    */

    d.pop_back();

    d.pop_front();

    /*
        Remaining deque:
        4 1
    */



    // =========================================================
    // PRINTING DEQUE
    // =========================================================

    cout << "Elements in deque:\n";

    for(auto x : d) {

        cout << x << " ";
    }

    cout << endl;



    // =========================================================
    // IMPORTANT FUNCTIONS
    // =========================================================
    /*
        front()
        -------
        Returns first element.

        back()
        ------
        Returns last element.

        size()
        ------
        Returns number of elements.

        empty()
        -------
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "\nFront element: "
         << d.front() << endl;

    cout << "Back element: "
         << d.back() << endl;

    cout << "Size of deque: "
         << d.size() << endl;

    cout << "Is deque empty? "
         << d.empty() << endl;



    // =========================================================
    // RANDOM ACCESS
    // =========================================================
    /*
        Deque supports indexing like vector.
    */

    cout << "\nElement at index 0: "
         << d[0] << endl;



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        VECTOR vs DEQUE
        ---------------

        VECTOR
        ------
        1. Fast insertion at end
        2. Slow insertion at front
        3. Contiguous memory

        DEQUE
        -----
        1. Fast insertion at both ends
        2. Random access supported
        3. Non-contiguous memory

        LIST
        ----
        1. Fast insertion/deletion
        2. No random access
        3. Doubly linked list
    */



    return 0;
}