#include <bits/stdc++.h>

using namespace std;

#define SIZE 150005

struct team{
    int id;
    int solved;
}teams[SIZE];

bool foo(team lhs, team rhs){
return lhs.solved > rhs.solved;
}

void print(int n ){

    for(int i= 0; i<n ; ++i){
        cout<<teams[i].id<<" "<<teams[i].solved<<'\n';
    }
}


int main(){


    //freopen("in","r",stdin);
    //freopen("out","w",stdout);

    int n ;

    cin>>n;

    for(int i = 0; i<n ; ++i){
        cin>>teams[i].id>>teams[i].solved;
    }

    stable_sort(teams,teams+n ,foo);

    print(n);

    return 0;

}
