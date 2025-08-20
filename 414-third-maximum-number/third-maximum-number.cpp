class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long firstMax = LONG_MIN, secondMax = LONG_MIN, thirdMax = LONG_MIN;
        for (int num : nums) {
            if (num == firstMax || num == secondMax || num == thirdMax) continue;
            if (num > firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = num;
            } else if (num > secondMax) {
                thirdMax = secondMax;
                secondMax = num;
            } else if (num > thirdMax) {
                thirdMax = num;
            }
        }
        return (int) (thirdMax != LONG_MIN ? thirdMax : firstMax);
    }
};