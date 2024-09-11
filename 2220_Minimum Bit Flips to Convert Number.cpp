class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num= start ^ goal;
        int count = 0;
        while(num>0)
        {
            if(num % 2) count++;
            num=num/2;
        }
        return count;
    }
};

//Approach 2 
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num= start ^ goal;
        int count =0;
        while(num)
        {
            num= num & num-1;//agar kisi no. ko khud ke ek kam se zor karo to usko right most one bit--> zero bit ho jaata hai
            count++;
        }
        return count;
    }
};

//Approach 3
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num= start ^ goal;
        int count = 0;
        while(num>0)
        {
            if(num & 1) count++;
            num=num/2;
        }
        return count;
    }
};