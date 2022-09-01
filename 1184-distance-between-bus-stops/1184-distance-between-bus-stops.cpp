class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) 
    {
        int d1 = 0, d2 = 0, n = distance.size();
       
        int i = start;
        while(i != destination)
        {
            d1 += distance[i];
            ++i;
            
            if (i == n)
                i = 0;
        }
        
        i = destination;
        while(i != start)
        {
            d2 += distance[i];
            ++i;
            
            if (i == n)
                i = 0;
        }
        
        return (d1 <= d2) ? d1 : d2; 
    }
};