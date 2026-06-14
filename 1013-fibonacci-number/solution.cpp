class Solution {
public:
    int a=0;
    int b=1;
    int fib(int n) {
    if(n==0){
        return a;
    }
    int temp = a;
    a=b;
    b=temp+b;
    return fib(--n);
    }
};
