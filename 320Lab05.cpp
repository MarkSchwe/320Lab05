#include <iostream>
#include "int.h"
#include "d_stree.h"
#include "random.h"

using namespace std;

int main(){
    srand(time(0));
    stree<integer> intTree;
    for(int i = 0; i < 10000; i++){
    int b2 = rand() % 7;
    integer outside(b2);
        if(intTree.find(b2) == intTree.end()){
        intTree.insert(outside);
    }  else {
        outside = *intTree.find(b2);
        outside.incCount();
        *intTree.find(b2) = outside;
        }
    }
    for(stree<integer>::iterator iter = intTree.begin(); iter != intTree.end(); iter++){
        cout << *iter << endl;
    }
    intTree.displayTree(8);
}
