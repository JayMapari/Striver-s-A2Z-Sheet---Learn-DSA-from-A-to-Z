#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // VECTOR IN C++
    // =========================================================
    /*
        Vector is a dynamic array.

        Features:
        ----------
        1. Size changes automatically
        2. Fast insertion at end
        3. Random access possible
        4. Part of STL (Standard Template Library)

        Header File:
        #include <vector>

        Syntax:
        vector<dataType> vectorName;
    */

    vector<int> v;


    // =========================================================
    // push_back() vs emplace_back()
    // =========================================================
    /*
        push_back(value)
        ----------------
        Inserts value at end.

        emplace_back(value)
        -------------------
        Constructs element directly inside vector.

        Difference:
        -----------
        push_back() -> creates then inserts
        emplace_back() -> directly creates

        emplace_back() is generally faster.
    */

    v.push_back(2);
    v.emplace_back(1);
    v.emplace_back(4);
    v.emplace_back(5);

    /*
        Vector:
        [2,1,4,5]
    */

    cout << "First element: "
         << v[0] << endl;


    // =========================================================
    // VECTOR OF PAIRS
    // =========================================================
    /*
        pair stores two values together.
    */

    vector<pair<int, int>> vp;

    vp.push_back({3, 4});
    vp.emplace_back(1, 2);

    /*
        Output:
        [(3,4), (1,2)]
    */


    // =========================================================
    // VECTOR INITIALIZATION
    // =========================================================

    /*
        Creates vector of size 5
        every element = 100
    */

    vector<int> v1(5, 100);

    /*
        Output:
        [100,100,100,100,100]
    */


    /*
        Creates vector of size 5
        default value = 0
    */

    vector<int> v2(5);

    /*
        Output:
        [0,0,0,0,0]
    */


    /*
        Creates vector:
        [20,20,20,20,20]
    */

    vector<int> v3(5, 20);


    /*
        Copying vector
    */

    vector<int> v4(v2);


    // =========================================================
    // ITERATORS
    // =========================================================
    /*
        Iterator behaves like pointer.

        Used to access container elements.

        Syntax:
        vector<int>::iterator it;

        IMPORTANT:
        ----------
        *it -> gives value
        it -> gives address/position
    */

    vector<int>::iterator it = v.begin();

    /*
        begin()
        -------
        Points to first element.

        Vector:
        [2,1,4,5]
         ^

        it points to 2
    */

    cout << "\nUsing begin(): "
         << *it << endl;



    // =========================================================
    // MOVING ITERATOR
    // =========================================================

    it++;

    /*
        Moves iterator one step forward.

        Now points to:
        1
    */

    cout << "After it++ : "
         << *it << endl;



    it = it + 2;

    /*
        Moves 2 positions ahead.

        Now points to:
        5
    */

    cout << "After it + 2 : "
         << *it << endl;


    // =========================================================
    // end()
    // =========================================================
    /*
        end() points AFTER last element.

        IMPORTANT:
        ----------
        Cannot dereference directly.

        Vector:
        [2,1,4,5]
                 ^
               end()
    */

    vector<int>::iterator it1 = v.end();

    // WRONG
    // cout << *it1;

    it1--;

    /*
        Now points to:
        5
    */

    cout << "Using end()-1 : "
         << *it1 << endl;


    // =========================================================
    // auto KEYWORD
    // =========================================================
    /*
        auto automatically detects datatype.

        Instead of:
        vector<int>::iterator it

        We can write:
        auto it
    */

    auto autoIt = v.begin();

    cout << "Using auto iterator: "
         << *autoIt << endl;


    // =========================================================
    // REVERSE ITERATOR
    // =========================================================
    /*
        reverse_iterator traverses vector backwards.
    */

    vector<int>::reverse_iterator rit = v.rbegin();

    /*
        rbegin()
        --------
        Points to last element.

        Vector:
        [2,1,4,5]
               ^

        Points to 5
    */

    cout << "Using rbegin(): "
         << *rit << endl;


    rit++;

    /*
        In reverse iterator,
        ++ moves backward in vector.

        Now points to:
        4
    */

    cout << "After rit++ : "
         << *rit << endl;


    // =========================================================
    // rend()
    // =========================================================
    /*
        rend() points BEFORE first element.

        Vector:
             ^
           rend()
        [2,1,4,5]

        Cannot dereference directly.
    */

    vector<int>::reverse_iterator rit2 = v.rend();

    // WRONG
    // cout << *rit2;

    rit2--;

    /*
        Now points to:
        2
    */

    cout << "Using rend()-1 : "
         << *rit2 << endl;


    // =========================================================
    // front() vs back()
    // =========================================================
    /*
        front()
        -------
        Returns first element.

        back()
        ------
        Returns last element.
    */

    cout << "front(): "
         << v.front() << endl;

    cout << "back(): "
         << v.back() << endl;


    // =========================================================
    // PRINTING USING ITERATOR
    // =========================================================

    cout << "\nPrinting using iterator:\n";

    for(vector<int>::iterator it = v.begin();
        it != v.end();
        it++) {

        cout << *it << " ";
    }

    cout << endl;


    // =========================================================
    // PRINTING USING auto
    // =========================================================

    cout << "\nPrinting using auto iterator:\n";

    for(auto it = v.begin();
        it != v.end();
        it++) {

        cout << *it << " ";
    }

    cout << endl;


    // =========================================================
    // FOR-EACH LOOP
    // =========================================================
    /*
        Simplest traversal method.

        x stores value directly.
    */

    cout << "\nPrinting using for-each:\n";

    for(auto x : v3) {
        cout << x << " ";
    }

    cout << endl;


    // =========================================================
    // TAKING INPUT
    // =========================================================

    vector<int> v5;

    for(int i = 0; i <= 5; i++) {

        int x;

        cout << "\nEnter value for index "
             << i << ": ";

        cin >> x;

        v5.emplace_back(x);
    }


    // =========================================================
    // erase()
    // =========================================================
    /*
        erase(position)
        ----------------
        Removes one element.

        erase(start,end)
        ----------------
        Removes range.

        IMPORTANT:
        end iterator NOT included.
    */

    v5.erase(v5.begin());

    /*
        Removes first element.
    */

    v5.erase(v5.begin() + 2,
             v5.begin() + 4);

    /*
        Removes index 2 and 3.
    */


    // =========================================================
    // insert()
    // =========================================================
    /*
        insert(position,value)

        insert(position,count,value)

        insert(position,start,end)
    */

    v5.insert(v5.begin() + 1, 2);

    /*
        Inserts 2 at index 1.
    */

    v5.insert(v5.begin() + 2, 2, 5);

    /*
        Inserts two 5's.
    */


    // =========================================================
    // INSERT ANOTHER VECTOR
    // =========================================================

    vector<int> copy = {50, 50};

    v5.insert(v5.begin(),
              copy.begin(),
              copy.end());


    // =========================================================
    // PRINT FINAL VECTOR
    // =========================================================

    cout << "\nFinal vector:\n";

    for(auto x : v5) {
        cout << x << " ";
    }

    cout << endl;


    // =========================================================
    // size()
    // =========================================================
    /*
        Returns total elements.
    */

    cout << "\nSize of vector v: "
         << v.size() << endl;


    // =========================================================
    // capacity()
    // =========================================================
    /*
        capacity()
        ----------
        Returns allocated memory.

        size() <= capacity()
    */

    cout << "Capacity of vector v: "
         << v.capacity() << endl;


    // =========================================================
    // pop_back()
    // =========================================================
    /*
        Removes last element.
    */

    v.pop_back();


    // =========================================================
    // swap()
    // =========================================================
    /*
        Swaps contents of vectors.
    */

    v.swap(v5);


    // =========================================================
    // clear()
    // =========================================================
    /*
        Removes all elements.

        Size becomes 0.
    */

    v.clear();


    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "\nIs vector v empty? "
         << v.empty() << endl;


    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        push_back() vs emplace_back()
        -----------------------------
        push_back() -> insert object
        emplace_back() -> direct construction

        begin() vs end()
        ----------------
        begin() -> first element
        end() -> after last element

        rbegin() vs rend()
        ------------------
        rbegin() -> last element
        rend() -> before first element

        front() vs back()
        -----------------
        front() -> first element
        back() -> last element

        size() vs capacity()
        --------------------
        size() -> actual elements
        capacity() -> allocated storage

        clear() vs erase()
        ------------------
        clear() -> removes all
        erase() -> removes selected elements
    */


    // =========================================================
    // IMPORTANT NOTES ABOUT ITERATORS
    // =========================================================
    /*
        1. Iterators work like pointers.

        2. *it gives value.

        3. end() cannot be dereferenced.

        4. rend() cannot be dereferenced.

        5. Vector iterators support:
           + , - , < , >

        6. List iterators do NOT support:
           it + 2

        7. Iterators are heavily used in STL.

           Example:
           sort(v.begin(), v.end());

        8. auto is preferred in competitive programming.

        9. Invalid iterator access causes undefined behavior.

        10. Iterator becomes invalid after some operations
            like erase() and insert().
    */

    return 0;
}