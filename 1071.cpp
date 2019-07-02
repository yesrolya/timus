#include <stdio.h>
#include <vector>

using namespace std;

int nice( int x, int y, int b ){
int k;

while ( y ){
 k=y%b;
  while ( x && (x%b) != k ) x/=b;
  if ( !x ) return 0;
 x/=b;
 y/=b;
}

return 1;
}

int main( void ){
//FILE *in=fopen( "input.txt", "r" );
int i,j,k,b;
int n,x,y,lim;

scanf( "%d %d", &x, &y );
lim=x+1;

for ( b=2; b<=lim; b++ )
 if ( nice(x,y,b) ) break;

if ( b<=lim ){
printf( "%d\n", b );
}

else{
printf( "No solution\n" );
}

return 0;
}
