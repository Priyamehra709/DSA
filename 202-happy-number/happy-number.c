int sqrtsum(int n){
    int sum=0;
    while(n){
        int d=n%10;
        sum=sum+d*d;
        n=n/10;
    }
    return sum;
}
bool isHappy(int n) {
    while(n!=1 && n!=4){
        n=sqrtsum(n);
    }
    return n==1;
}