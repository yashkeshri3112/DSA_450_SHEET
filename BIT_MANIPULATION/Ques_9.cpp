/* QUESTIONS-: CALCULATE SQUARE OF A NUMBER WITHOUT USING *,/ AND POW()*/
/* MY FIRST APPROACH AND IT WAS A NAIVE APPROACH WAS REPETITIVE ADDITION */

//TIME COMPLEXITY-: O(N); SPACE COMPLEXITY-: O(1) , it is very slow for larger input
#include <iostream>
using namespace std;
int square(int n){
// handle negative input
    if (n < 0)
        n = -n;
        // Initialize sum
    int sum = n;
// Add n to sum n-1 times
    for (int i = 1; i < n; i++)
        sum=sum+ n;

    return sum;
}

/* OPTIMISED APPROACH */
//TIME COMPLEXITY-:loops run number of bits in n->O(logn)
//much faster than o(n) of repeateed addition
//SPACE COMPLEXITY-:  only a few variables O(1).
int square(int n){
   int x=n;//taaki original value intact rahe.
   int i=0;//yeh 2 ka power ka kaam karega 
   int answer=0;
   while(x>0){
    if(x&1){//bits set hai ya unset check karega 
      //agar bit set hai tab hi uska value add hota hai answer me
      answer =answer+(n<<i); //n*2^i iska mtlb hota hai
     }
     x=x>>1;//bits chota karne ke liye 
     i++;
   }
   return answer;
}


