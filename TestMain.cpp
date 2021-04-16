#include <iostream>
#include "BHeap.cpp"
#include "Heap.cpp"

using namespace std;

int main() {
    int B[12] = {12,7,2,5,4,1,3,6,8,7,10,11};

    Heap<int> W, X(B,12);

    X.printKey();
    // Should output 1 4 2 5 7 11 3 6 8 7 10 12

    W = X;

    W.printKey();
    // Should output 1 4 2 5 7 11 3 6 8 7 10 12

    W.extractMin();
    W.insert(14);

    W.printKey();
    // Should output 2 4 3 5 7 11 12 6 8 7 10 14

    cout << W.peekKey() << endl;
    //Should output 2

    char A[10] = {'Z','Y','W','B','A','C','B','H','I','J'};
    BHeap<char> Y(A,10), Z;

    Y.printKey();
    /* Should output
        B1
        I J

        B3
        A B Y Z W B H C
    */

    cout << Y.extractMin() << endl;
    // Should output A

    Z.insert('M'); 
	Z.insert('O');
    Z.insert('Y'); 
	Z.insert('B');
    Z.insert('L'); 
	Z.insert('Q');
    Z.insert('F'); 
	Z.insert('G');
    Z.insert('N'); 
	Z.insert('I');

    Y.merge(Z);

    Y.printKey();
    /* Should output
        B0
        C

        B1
        I N

        B4
        B B B Y Z W I J H F L Q G M O Y
    */


    

}