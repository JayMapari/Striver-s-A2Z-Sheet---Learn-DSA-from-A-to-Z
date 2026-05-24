#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // QUEUE IN C++
    // =========================================================
    /*
        Queue follows:
        FIFO Principle

        FIFO:
        -----
        First In First Out

        Example:
        ----------
        People standing in line.

        First person entering the queue
        leaves first.

        Header File:
        #include <queue>

        Syntax:
        queue<dataType> queueName;
    */



    // =========================================================
    // CREATING QUEUE
    // =========================================================

    queue<int> q;



    // =========================================================
    // push() vs emplace()
    // =========================================================
    /*
        push(value)
        -----------
        Inserts element at back.

        emplace(value)
        --------------
        Directly creates element at back.

        emplace() is generally faster.
    */

    q.push(1);

    q.push(2);

    q.emplace(3);

    /*
        Queue:

        FRONT -> 1 2 3 <- BACK
    */



    // =========================================================
    // front()
    // =========================================================
    /*
        front()
        --------
        Returns first element.

        Does NOT remove it.
    */

    cout << "Front element: "
         << q.front() << endl;

    /*
        Output:
        1
    */



    // =========================================================
    // back()
    // =========================================================
    /*
        back()
        -------
        Returns last element.

        Does NOT remove it.
    */
    q.back() = 4; // Modifying back element
    cout << "Back element: "
         << q.back() << endl;

    

    /*
        Output:
        3
    */



    // =========================================================
    // pop()
    // =========================================================
    /*
        pop()
        -----
        Removes front element.

        IMPORTANT:
        ----------
        pop() does NOT return value.
    */

    q.pop();

    /*
        Queue after pop:

        FRONT -> 2 3 <- BACK
    */



    // =========================================================
    // size()
    // =========================================================
    /*
        Returns total number of elements.
    */

    cout << "Size of queue: "
         << q.size() << endl;



    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "Is queue empty? "
         << q.empty() << endl;



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Queue insertion happens at BACK.

        2. Queue deletion happens at FRONT.

        3. Random access NOT possible.

        4. Iterators are NOT supported.

        5. Cannot use:
           q[0]

        6. Cannot traverse directly using loop.

        7. Queue is implemented using deque by default.

        8. Time Complexity:
           push()  -> O(1)
           pop()   -> O(1)
           front() -> O(1)
           back()  -> O(1)

        9. Queue is useful in:
           - CPU Scheduling
           - BFS Traversal
           - Printer Queue
           - Ticket Booking Systems
    */



    // =========================================================
    // DIFFERENCE BETWEEN FUNCTIONS
    // =========================================================
    /*
        push() vs emplace()
        -------------------
        push() -> inserts object
        emplace() -> creates directly

        front() vs back()
        -----------------
        front() -> first element
        back() -> last element

        front() vs pop()
        ----------------
        front() -> accesses first element
        pop() -> removes first element

        size() vs empty()
        -----------------
        size() -> returns number of elements
        empty() -> checks queue empty or not
    */



    return 0;
}