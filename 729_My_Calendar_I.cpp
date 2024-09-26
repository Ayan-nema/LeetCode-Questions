class MyCalendar {
public: vector<pair<int,int>> dates;
   bool book(int start1, int end1) {
        for(auto [start,end]:dates)
        {
            if(end>start1 && end1 >start)
            {return false;}
        }
        dates.push_back({start1,end1});
        return true;
    }
};
