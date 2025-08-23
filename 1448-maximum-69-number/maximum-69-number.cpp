class Solution {
public:
    int maximum69Number (int num) {
     int n=num;
     int place=1;
     int add=0;
     while(n>0){
        if(n%10==6){
            add=3*place; 
        }
        n/=10;
        place *=10;
     }   
     return num+add;
    }
};