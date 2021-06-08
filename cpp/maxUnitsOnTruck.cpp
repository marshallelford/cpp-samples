/* 
 *
 * You are assigned to put some amount of boxes onto one truck. 
 * You are given a 2D array boxTypes, where 
 * boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:
 * 
 * numberOfBoxesi is the number of boxes of type i.
 * numberOfUnitsPerBoxi is the number of units in each box of the type i.
 * You are also given an integer truckSize, which is the maximum number of 
 * boxes that can be put on the truck. You can choose any boxes to put on the 
 * truck as long as the number of boxes does not exceed truckSize.
 * 
 * Return the maximum total number of units that can be put on the truck.
 *
 */

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // sort all of the boxes, then add units until the truck is full
        sort(boxTypes.begin(), boxTypes.end(), [] (vector<int> &first, vector<int> &second) {
            return first[1] > second[1];
        });
        
        int truck = 0;
        
        for (vector<int> box : boxTypes) {
            if (truckSize >= box[0]) {
                truck += box[0] * box[1];
                truckSize -= box[0];
            } else {
                truck += truckSize * box[1];
                return truck;
            }
        }
        
        return truck;
        
        /*
        // find the max units, put all boxes from that in the truck as you can, then restart until full
        
        int truck = 0;
        queue<vector<int>> sortedBoxes;
        int size = boxTypes.size();
        
        for (int i = 0; i < size; i++) {
            // get the largest box
            int maxIndex = 0;
            for (int j = 1; j < boxTypes.size(); j++) {
                if (boxTypes[j][1] > boxTypes[maxIndex][1]) maxIndex = j;
            }
            
            // put as many units in the truck as you can
            while (boxTypes[maxIndex][0] > 0 && truckSize > 0) {
                truck += boxTypes[maxIndex][1];
                truckSize--;
                boxTypes[maxIndex][0]--;
            }
            
            if (truckSize == 0) break;
            else boxTypes.erase(boxTypes.begin() + maxIndex);
        }
        
        return truck;
        */
    }
};