/*QUESTIONS-: COUNT SET BITS IN AN INTEGER */
/* BRIAN SOLUTION -> EFFICIENT*/
class Solution {
  public:
    int setBits(int n) {
        int count;
       while(n>0){
          n=(n)&(n-1);//yeh last set bit ko remove karta hai.
          count++;
          
       }
       return count;
        
    }
};

/*Har iteration mein ek set bit remove hoti hai.

Agar number n ke andar k set bits hain, toh loop exactly k times chalega.

👉 Time Complexity = O(k)  
(where k = number of set bits in n)

⚡ Worst case: agar n ke sab bits set hain (jaise n = 1111...111), toh loop O(log n) times chalega (kyunki log n bits hote hain).

So:

Best case: O(1) (agar n = 0 ya ek hi set bit hai)

Average case: O(k)

Worst case: O(log n) */

/*SPACE COMPLEXITY-> O(1)*/

Efficient hai kyunki har iteration ek set bit remove karta hai, na ki har bit check karta hai.-> IMPORTANT.