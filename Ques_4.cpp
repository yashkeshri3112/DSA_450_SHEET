/*QUESTIONS-4: COUNT TOTAL SET BITS*/
/*MY APPROACH -: WHICH GAVE THE TIME LIMIT EXCEEDED T.L.E*/
class Solution {
public:
    int countSetBits(int n) {
        int total = 0;
        for (int i = 1; i <= n; i++) {
            int x = i;
            while (x > 0) {
                x = x & (x - 1); // remove last set bit
                total++;
            }
        }
        return total;
    }
};

/* OPTIMISED APPROACH */
 DIMAG KHARAB KAR DEGA ISKA CODE 
 class Solution {
public:
    int countSetBits(int n) { 
        int totalBits = 0;
        int upto = n + 1; // include 0 to n

        for (int bit = 0; (1 << bit) <= upto; bit++) {
            int cycleLength = 1 << (bit + 1);   // 2^(bit+1)
            int fullCycles = upto / cycleLength;

            int bitsFromFullCycles = fullCycles * (1 << bit);
            totalBits = totalBits + bitsFromFullCycles;

            int remainingNumbers = upto % cycleLength;
            int extraBits = 0;

            if (remainingNumbers > (1 << bit)) {
                extraBits = remainingNumbers - (1 << bit);
            }

            totalBits = totalBits + extraBits;
        }

        return totalBits;
    }
};
 