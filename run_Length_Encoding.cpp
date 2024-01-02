/*You are required to complete this function */
// Please include the header files and also namespace and also the main function if you want to run in an editor in your local machine 
// This code only contains the function only and if you want to run it , Please copy and paste it on the geeksforgeeks platoform cpp compiler on the given question.
// I am providing the quesLink here..
// https://www.geeksforgeeks.org/problems/run-length-encoding/1
// This problem was asked in Amazon and Goldman Sachs.
// Day-1 Goldman Sachs
// Ques14 of the (Day-1 Goldman Sachs) 15 problems
string encode(string src)
{     
    int n = src.length();
    string ans = "";

    for(int i = 0; i < n; i++) {
      int count = 1;
      ans += src[i];
      while(i < n-1 && src[i] == src[i+1]) {
          count++;
          i++;
          
      }
      ans += to_string(count);
        
    }
  return ans;
}     
