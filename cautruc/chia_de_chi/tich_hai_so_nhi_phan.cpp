#include <iostream>
#include <string>

using namespace std;

// This function adds two binary strings and return 
// result as a third string 
string addBinary(string a, string b)
{
    string result = ""; // Initialize result 
    int s = 0;          // Initialize digit sum 
    int flag =0;
    // Traverse both strings starting from last 
    // characters 
    int i = a.size() - 1, j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || s == 1)
    {

        // Computing the sum of the digits from right to left
          //x = (condition) ? (value_if_true) : (value_if_false);
          //add the fire bit of each string to digit sum 
        s += ((i >= 0) ? a[i] - '0' : 0);
        s += ((j >= 0) ? b[j] - '0' : 0);


        // If current digit sum is 1 or 3, add 1 to result 
        //Other wise it will be written as a zero 2%2 + 0 = 0
            //and it will be added to the heading of the string (to the left)
        result = char(s % 2 + '0') + result;

        // Compute carry
        //Not using double so we get either 1 or 0 as a result
        s /= 2;

        // Move to next digits (more to the left)
        i--; j--;
    }
    return result;
}
void binaryToDecimal(string res)
{
    int num = res.size();
    long long dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long base=1;
    for(int i=num-1;i>=0;i--)
    {
	  int last_number = res[i]-48;
	  dec_value = dec_value+last_number*base;
	  base = base*2;
	}
 
    cout<<dec_value<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string a, b, result= "0"; //Multiplier, multiplicand, and result
    string temp="0";  //Our buffer
    int shifter = 0;  //Shifting counter 
    cin >> a;
    cin >> b;

    //Set a pointer that looks at the multiplier from the bit on the most right 
    int j = b.size() - 1;

   // Loop through the whole string and see if theres any 1's
    while (j >= 0)
    {
        if (b[j] == '1')
        { 
            //Reassigns the original value every loop to delete the old shifting 
            temp = a;


            //We shift by adding zeros to the string of bits
            //If it is not the first iteration it wont add any thing because we did not "shift" yet
            temp.append(shifter, '0');
                
            //Add the shifter buffer bits to the result variable 
            result = addBinary(result, temp);
        }

        //we shifted one place 
        ++shifter; 
                //move to the next bit on the left
        j--;
    }

    binaryToDecimal(result);
    }

    return 0;
}
