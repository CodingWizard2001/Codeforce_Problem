// The classic programming language of Bitland is Bit++. This language is so peculiar and complicated. The language is that peculiar as it has exactly one variable, called x. Also, there are two operations: 

//1. Operation ++ increases the value of variable x by 1. 
//2. Operation -- decreases the value of variable x by 1. 

// A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable x. The statement is written without spaces, that is, it can only contain characters "+", "-", "X". Executing a statement means applying the operation it contains. A programme in Bit++ is a sequence of statements, each of them needs to be executed. Executing a programme means executing all the statements it contains. You're given a programme in language Bit++. The initial value of x is 0. Execute the programme and find its final value (the value of the variable when this programme is executed).

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t; // t -> test case
    int x = 0;
    while(t--){
        string s;
        cin>>s;
        if(s[1] == '+') ++x; // X -> 0th && + -> 1st index
        else --x;
    }
    cout<<x;
}