// "Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules. A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

#include <iostream>
using namespace std;
int main(){
    int t,k;
    cin>>t>>k; // t -> test case
    int a;
    for(int i = 0;i < k;i++){
        cin>>a;
        if(a == 0){
            cout<<i<<endl;
            return 0;
        }
    }
    int b;
    for(int i = k;i < t;i++){
        cin>>b;
        if(b != a){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<t<<endl;
    return 0;
}