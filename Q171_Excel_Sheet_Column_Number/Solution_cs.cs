//c# solution

public class Solution_cs {
    public int TitleToNumber(string columnTitle) {
        int number = 0;
        int multiple = 1;
        for (int i = columnTitle.Length - 1; i >= 0; i--) {
            int k = columnTitle[i] - 'A' + 1;
            number += k * multiple;
            multiple *= 26;
        }
        return number;
    }
}

//TS:O(N)
//SC:O(1)
