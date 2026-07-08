class Solution {
public:
    int solv(int n){
        if(n == 0) return 0; 
        if(n == 1) return 1;

        return solv(n-1) + solv(n-2);
        
    }

    int fib(int n) {

        return solv(n);
    }
};