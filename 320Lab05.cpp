#include <iostream>
#include "int.h"
#include "d_stree.h"
#include "random.h"

using namespace std;

int main(){
    srand(time(0));
    stree<integer> intTree;
    stree<integer>::iterator iter1;
    for(int i = 0; i < 10000; i++){
    int b2 = rand() % 7;
    integer outside(b2);
        if(intTree.find(b2) == intTree.end()){
        intTree.insert(outside);
    }  else {
        iter1 = intTree.find(b2);
        outside = *iter1;
        outside.incCount();
        *iter1 = outside;
        }
    }
    intTree.displayTree(2);
  return 0;
}
