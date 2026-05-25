#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // STACK IN C++
    // =========================================================
    /*
    
        Stack follows:
        LIFO Principle

        LIFO:
        -----
        Last In First Out

        Example:
        ----------
        Stack of plates

        Last inserted plate comes out first.

        Header File:
        #include <stack>

        Syntax:
        stack<dataType> stackName;
    */
 


    // =========================================================
    // CREATING STACK
    // =========================================================

    stack<int> s;



    // =========================================================
    // push() vs emplace()
    // =========================================================
    /*
        push(value)
        -----------
        Inserts element into stack.

        emplace(value)
        --------------
        Directly creates element inside stack.

        emplace() is generally faster.
    */

    s.push(1);

    s.push(2);

    s.emplace(3);

    s.emplace(4);

    /*
        Stack:
        TOP
         4
         3
         2
         1
    */



    // =========================================================
    // top()
    // =========================================================
    /*
        top()
        -----
        Returns top element.

        Does NOT remove it.
    */

    cout << "Top element: "
         << s.top() << endl;

    /*
        Output:
        4
    */



    // =========================================================
    // pop()
    // =========================================================
    /*
        pop()
        -----
        Removes top element.

        IMPORTANT:
        ----------
        pop() does NOT return value.
    */

    s.pop();

    /*
        Stack after pop:

        TOP
         3
         2
         1
    */

    cout << "Top element after pop(): "
         << s.top() << endl;



    // =========================================================
    // size()
    // =========================================================
    /*
        Returns number of elements.
    */

    cout << "Size of stack: "
         << s.size() << endl;



    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "Is stack empty? "
         << s.empty() << endl;



    // =========================================================
    // swap()
    // =========================================================
    /*
        Swaps contents of two stacks.
    */

    stack<int> s1;

    s1.swap(s);

    /*
        Now:
        s1 contains elements of s
        s becomes empty
    */

    cout << "Top element of s1 after swap(): "
         << s1.top() << endl;



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Stack allows insertion/removal
           only from top.

        2. Random access NOT possible.

        3. Iterators are NOT supported.

        4. Cannot use:
           s[0]

        5. Cannot traverse directly using loop.

        6. To print stack:
           repeatedly use top() and pop()

        7. Stack is implemented using deque by default.

        8. Time Complexity:
           push()  -> O(1)
           pop()   -> O(1)
           top()   -> O(1)

        9. Stack is useful in:
           - Recursion
           - Undo operations
           - Expression evaluation
           - Backtracking
    */



    // =========================================================
    // DIFFERENCE BETWEEN FUNCTIONS
    // =========================================================
    /*
        push() vs emplace()
        -------------------
        push() -> inserts object
        emplace() -> creates directly

        top() vs pop()
        --------------
        top() -> accesses top element
        pop() -> removes top element

        size() vs empty()
        -----------------
        size() -> returns number of elements
        empty() -> checks stack empty or not
    */



    return 0;
}