/*
The string "PAYPALISHIRING" is written in a 
zigzag pattern on a given number of rows like this: 

P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"

Example:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

*/

class Solution {
public:
    string convert(string s, int numRows) 
    {
        if(numRows == 1)
            return s;
        vector<string> line(numRows);
        int curr=0;
        bool down = false;
        for(char &c :s)
        {
            line[curr] = line[curr] + c;
            if(curr == 0 || curr == numRows -1)
                down = !down;
            curr += down ? 1 : -1;
        }
        string combine;
        for(int i = 0; i < numRows;i++)
        {
            combine += line[i];
        }
        return combine;
    }
};