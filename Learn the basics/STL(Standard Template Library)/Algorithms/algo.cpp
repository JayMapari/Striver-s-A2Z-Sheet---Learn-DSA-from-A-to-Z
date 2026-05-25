#include <bits/stdc++.h>
using namespace std;



// =========================================================
// CUSTOM COMPARATOR FUNCTION
// =========================================================
/*
    Comparator function is used to define
    custom sorting logic.

    RULES:
    ------
    return true  -> keep order
    return false -> swap order
*/

bool comp(pair<int, int> a,
          pair<int, int> b) {

    /*
        Sort according to second element
        in ascending order.
    */

    if(a.second < b.second)
        return true;

    if(a.second > b.second)
        return false;

    /*
        If second elements are same,
        sort first element in descending order.
    */

    if(a.first > b.first)
        return true;

    return false;
}



int main() {

    // =========================================================
    // SORT FUNCTION
    // =========================================================
    /*
        sort(start, end)

        Sorts data in ascending order.

        IMPORTANT:
        ----------
        Works only on:
        - arrays
        - vectors
        - strings

        Because they use contiguous memory.

        Does NOT work directly on:
        - set
        - map
    */



    // =========================================================
    // SORTING ARRAY
    // =========================================================

    int a[] = {1, 2, 5, 4, 3};

    /*
        Array:
        1 2 5 4 3
    */



    // =========================================================
    // PARTIAL SORTING
    // =========================================================
    /*
        sort(start,end)

        end is NOT included.
    */

    sort(a + 2, a + 5);

    /*
        Sorts:
        5 4 3

        Result:
        1 2 3 4 5
    */

    cout << "Partially sorted array:\n";

    for(auto i : a) {

        cout << i << " ";
    }

    cout << endl;



    // =========================================================
    // SORTING IN DESCENDING ORDER
    // =========================================================
    /*
        greater<int>()
        --------------
        Used for descending sorting.
    */

    sort(a, a + 5, greater<int>());

    /*
        Result:
        5 4 3 2 1
    */

    cout << "\nDescending order array:\n";

    for(auto i : a) {

        cout << i << " ";
    }

    cout << endl;



    // =========================================================
    // SORTING VECTOR
    // =========================================================

    vector<int> v = {3, 2, 1, 4, 5};

    sort(v.begin(), v.end());

    /*
        Result:
        1 2 3 4 5
    */

    cout << "\nSorted vector:\n";

    for(auto i : v) {

        cout << i << " ";
    }

    cout << endl;



    // =========================================================
    // SORTING VECTOR OF PAIRS
    // =========================================================

    pair<int, int> p1 = {1, 4};

    pair<int, int> p2 = {2, 4};

    pair<int, int> p3 = {5, 2};

    vector<pair<int, int>> vp =
    {
        p1,
        p2,
        p3
    };



    // =========================================================
    // CUSTOM SORTING USING COMPARATOR
    // =========================================================

    sort(vp.begin(),
         vp.end(),
         comp);

    /*
        Sorting Logic:
        --------------
        1. second ascending
        2. if same second:
           first descending

        Result:
        5 2
        2 4
        1 4
    */

    cout << "\nSorted vector of pairs:\n";

    for(auto i : vp) {

        cout << i.first
             << " "
             << i.second
             << endl;
    }



    // =========================================================
    // __builtin_popcount()
    // =========================================================
    /*
        Counts number of set bits (1s).

        Works for int.
    */

    int x = 7;

    /*
        Binary of 7:
        111

        Set bits:
        3
    */

    int cnt = __builtin_popcount(x);

    cout << "\nNumber of set bits in "
         << x
         << " is "
         << cnt
         << endl;



    // =========================================================
    // __builtin_popcountll()
    // =========================================================
    /*
        Works for long long.
    */

    long long y = 159934809384;

    int cnt2 = __builtin_popcountll(y);

    cout << "Number of set bits in "
         << y
         << " is "
         << cnt2
         << endl;



    // =========================================================
    // next_permutation()
    // =========================================================
    /*
        Generates next lexicographical permutation.

        IMPORTANT:
        ----------
        Sequence should be sorted first.
    */

    string s = "321";

    sort(s.begin(), s.end());

    /*
        Sorted string:
        123
    */

    cout << "\nPermutations:\n";

    do {

        cout << s << endl;

    } while(next_permutation(s.begin(),
                             s.end()));

    /*
        Output:
        123
        132
        213
        231
        312
        321
    */



    // =========================================================
    // IMPORTANT DIFFERENCES
    // =========================================================
    /*
        sort() vs stable_sort()
        -----------------------
        sort()
        ------
        Faster
        Relative order may change

        stable_sort()
        --------------
        Maintains relative order



        __builtin_popcount()
        vs
        __builtin_popcountll()
        -----------------------
        popcount()
        ----------
        For int

        popcountll()
        ------------
        For long long



        permutation vs combination
        --------------------------
        permutation:
        Order matters

        combination:
        Order does not matter
    */



    // =========================================================
    // IMPORTANT NOTES
    // =========================================================
    /*
        1. sort() complexity:
           O(n log n)

        2. sort() uses IntroSort internally.

        3. next_permutation()
           returns false when no next permutation exists.

        4. Comparator function must return bool.

        5. greater<int>()
           sorts in descending order.

        6. sort() works on random access iterators only.

        7. Cannot use sort() directly on:
           set, map, multiset

        8. Strings can also be sorted.

        9. __builtin_popcount()
           useful in bit manipulation.

        10. next_permutation()
            heavily used in backtracking
            and brute force problems.
    */



    return 0;
}