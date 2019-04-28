#include <iostream>
#include <algorithm>
using namespace std;

#define SIZE 150005

struct team{
    unsigned long id;
    unsigned short solved;
};//teams[SIZE];

bool foo(team lhs, team rhs){
return lhs.solved > rhs.solved;
}

void print(team *teams, int n ){

    for(int i= 0; i<n ; ++i){
        cout<<teams[i].id<<" "<<teams[i].solved<<'\n';
    }
}


int main(){
    unsigned long n ;
    cin >> n;
    team *teams = new team[n];
    for(int i = 0; i<n ; ++i){
        cin>>teams[i].id>>teams[i].solved;
    }
    stable_sort(teams,teams+n ,foo);
    print(teams, n);
    return 0;
}
