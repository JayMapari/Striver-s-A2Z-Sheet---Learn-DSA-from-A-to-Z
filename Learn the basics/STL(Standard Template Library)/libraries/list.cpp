#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // LIST IN C++
    // =========================================================
    /*
        list is a doubly linked list in STL.

        Header File:
        #include <list>

        Syntax:
        list<dataType> listName;

        Features:
        ----------
        1. Dynamic size
        2. Fast insertion/deletion at front and back
        3. Non-contiguous memory allocation
        4. Bidirectional traversal possible
        5. Slower random access compared to vector

        IMPORTANT:
        ----------
        Direct indexing is NOT possible.

        WRONG:
        l[0]

        Because list does not support random access.
    */



    // =========================================================
    // CREATING LIST
    // =========================================================

    list<int> l;



    // =========================================================
    // push_back() vs emplace_back()
    // =========================================================
    /*
        push_back(value)
        ----------------
        Inserts value at end.

        emplace_back(value)
        -------------------
        Creates and inserts directly at end.

        emplace_back() is generally faster.
    */

    l.push_back(1);

    l.emplace_back(2);

    /*
        List:
        1 2
    */



    // =========================================================
    // push_front() vs emplace_front()
    // =========================================================
    /*
        push_front(value)
        -----------------
        Inserts value at beginning.

        emplace_front(value)
        --------------------
        Directly creates element at beginning.
    */

    l.push_front(4);

    l.emplace_front(3);

    /*
        Final List:
        3 4 1 2
    */



    // =========================================================
    // PRINTING LIST USING FOR-EACH LOOP
    // =========================================================
    /*
        for(auto variable : container)

        variable stores each value one by one.
    */

    cout << "Elements of list:\n";

    for(auto x : l) {

        cout << x << " ";
    }

    cout << endl;



    // =========================================================
    // ITERATORS IN LIST
    // =========================================================
    /*
        Iterators work similarly to vector.

        begin()
        -------
        Points to first element.

        end()
        -----
        Points after last element.
    */

    list<int>::iterator it = l.begin();

    cout << "\nFirst element using iterator: "
         << *it << endl;



    it++;

    /*
        Now points to second element.
    */

    cout << "Second element using iterator: "
         << *it << endl;



    // =========================================================
    // REVERSE ITERATOR
    // =========================================================

    list<int>::reverse_iterator rit = l.rbegin();

    /*
        rbegin()
        --------
        Points to last element.
    */

    cout << "Last element using reverse iterator: "
         << *rit << endl;



    // =========================================================
    // front() and back()
    // =========================================================
    /*
        front()
        -------
        Returns first element.

        back()
        ------
        Returns last element.
    */

    cout << "\nFirst element using front(): "
         << l.front() << endl;

    cout << "Last element using back(): "
         << l.back() << endl;



    // =========================================================
    // size()
    // =========================================================
    /*
        Returns total number of elements.
    */

    cout << "\nSize of list: "
         << l.size() << endl;



    // =========================================================
    // pop_front() and pop_back()
    // =========================================================
    /*
        pop_front()
        -----------
        Removes first element.

        pop_back()
        ----------
        Removes last element.
    */

    l.pop_front();

    l.pop_back();

    /*
        Remaining List:
        4 1
    */

    cout << "\nAfter pop operations:\n";

    for(auto x : l) {

        cout << x << " ";
    }

    cout << endl;



    // =========================================================
    // insert()
    // =========================================================
    /*
        insert(iterator,value)

        Inserts value before iterator position.
    */

    auto it1 = l.begin();

    it1++;

    l.insert(it1, 100);

    /*
        List:
        4 100 1
    */

    cout << "\nAfter insert:\n";

    for(auto x : l) {

        cout << x << " ";
    }

    cout << endl;



    // =========================================================
    // erase()
    // =========================================================
    /*
        erase(iterator)
        ----------------
        Removes element at given position.
    */

    auto it2 = l.begin();

    it2++;

    l.erase(it2);

    /*
        Removes 100

        List:
        4 1
    */

    cout << "\nAfter erase:\n";

    for(auto x : l) {

        cout << x << " ";
    }

    cout << endl;



    // =========================================================
    // clear()
    // =========================================================
    /*
        Removes all elements.
    */

    l.clear();



    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "\nIs list empty? "
         << l.empty() << endl;



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        VECTOR vs LIST
        --------------

        VECTOR
        ------
        1. Dynamic array
        2. Faster random access
        3. Supports indexing
        4. Slower insertion/deletion at front

        LIST
        ----
        1. Doubly linked list
        2. No random access
        3. No indexing
        4. Faster insertion/deletion

        IMPORTANT:
        ----------
        Vector supports:
        v[0]
        v.begin() + 2

        List DOES NOT support:
        l[0]
        l.begin() + 2
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. List uses non-contiguous memory.

        2. Iterators are bidirectional.

        3. List insertion/deletion is efficient.

        4. Random access is slow.

        5. Sorting can be done using:
           l.sort();

        6. Reversing can be done using:
           l.reverse();

        7. Merge two sorted lists:
           l1.merge(l2);

        8. remove(value) removes all occurrences.

        9. splice() transfers elements between lists.

        10. Preferred when frequent insertion/deletion
            is needed.
    */



    return 0;
}