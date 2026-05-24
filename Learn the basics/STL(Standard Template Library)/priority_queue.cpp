#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // PRIORITY QUEUE IN C++
    // =========================================================
    /*
        Priority Queue stores elements
        according to priority.

        By default:
        -----------
        Largest element gets highest priority.

        Implemented using:
        Heap Data Structure

        Header File:
        #include <queue>

        Syntax:
        priority_queue<dataType> pq;

        Default:
        --------
        Max Heap
    */



    // =========================================================
    // MAX HEAP PRIORITY QUEUE
    // =========================================================

    priority_queue<int> pq;



    // =========================================================
    // push() vs emplace()
    // =========================================================
    /*
        push(value)
        -----------
        Inserts element.

        emplace(value)
        --------------
        Directly creates element.

        emplace() is generally faster.
    */

    pq.push(10);

    pq.push(1);

    pq.emplace(4);

    /*
        Elements:
        10 1 4

        Heap internally arranges elements.

        Highest priority element:
        10
    */



    // =========================================================
    // top()
    // =========================================================
    /*
        top()
        -----
        Returns highest priority element.

        In max heap:
        Largest element
    */

    cout << "Top element in max heap: "
         << pq.top() << endl;

    /*
        Output:
        10
    */

    


    // =========================================================
    // TRAVERSING PRIORITY QUEUE
    // =========================================================
    /*
        Priority queue does NOT support iterators.

        Cannot use:
        -----------
        for(auto x : pq)

        To print elements:
        Repeatedly use top() and pop().
    */

    cout << "\nElements of max heap:\n";

    while(!pq.empty()) {

        cout << pq.top() << " ";

        pq.pop();
    }

    cout << endl;

    /*
        Output:
        10 4 1

        Largest element comes first.
    */



    // =========================================================
    // MIN HEAP PRIORITY QUEUE
    // =========================================================
    /*
        Syntax:

        priority_queue<
            int,
            vector<int>,
            greater<int>
        > min_pq;

        greater<int>
        -------------
        Creates min heap.
    */

    priority_queue<int,
                   vector<int>,
                   greater<int>> min_pq;



    min_pq.push(10);

    min_pq.push(1);

    min_pq.emplace(4);

    /*
        Min Heap:
        Smallest element gets priority.
    */



    // =========================================================
    // top() IN MIN HEAP
    // =========================================================

    cout << "\nTop element in min heap: "
         << min_pq.top() << endl;

    /*
        Output:
        1
    */



    // =========================================================
    // PRINTING MIN HEAP
    // =========================================================

    cout << "\nElements of min heap:\n";

    while(!min_pq.empty()) {

        cout << min_pq.top() << " ";

        min_pq.pop();
    }

    cout << endl;

    /*
        Output:
        1 4 10
    */



    // =========================================================
    // size()
    // =========================================================
    /*
        Returns number of elements.
    */

    priority_queue<int> temp;

    temp.push(5);
    temp.push(8);

    cout << "\nSize of temp queue: "
         << temp.size() << endl;



    // =========================================================
    // empty()
    // =========================================================
    /*
        Returns:
        1 -> empty
        0 -> not empty
    */

    cout << "Is temp queue empty? "
         << temp.empty() << endl;



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        QUEUE vs PRIORITY QUEUE
        -----------------------

        QUEUE
        -----
        FIFO order

        Example:
        1 2 3

        Output:
        1 2 3



        PRIORITY QUEUE
        --------------
        Elements sorted by priority

        Example:
        10 1 4

        Output:
        10 4 1
    */



    // =========================================================
    // MAX HEAP vs MIN HEAP
    // =========================================================
    /*
        MAX HEAP
        --------
        Largest element on top.

        top() gives maximum value.

        Example:
        10 4 1



        MIN HEAP
        --------
        Smallest element on top.

        top() gives minimum value.

        Example:
        1 4 10
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. Priority queue uses heap internally.

        2. Random access NOT possible.

        3. Iterators are NOT supported.

        4. Cannot traverse directly using loops.

        5. top() always gives highest priority element.

        6. Time Complexity:
           push() -> O(log n)
           pop()  -> O(log n)
           top()  -> O(1)

        7. Useful in:
           - Dijkstra Algorithm
           - Scheduling
           - Heap Sort
           - CPU Priority Systems

        8. Default priority queue is max heap.

        9. Use greater<int> for min heap.
    */



    return 0;
}