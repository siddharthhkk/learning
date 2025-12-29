#include <iostream>
#include <vector>
//typedef is used to create additional name for another datatype (New identifier for existing type - Helps with readability and reduce typos)
//typedef std::vector<std::pair<std::string>> pairlist_t; //(_t is a general way so that we know it is a placeholder for a datatype )
//typedef std::string text_t;
//typedef int num_t;  // typedef can be replaced with using (works better with templates)
using text_t = std::string; //however only use typedef when there is a clear benefit.
using num_t = int;
int main(){
    text_t name = "Siddharth";
    num_t age = 18;
    std::cout << name << '\n' << age << '\n';
    
    int student = 20;
    //student = student +or-or*or/ 1;
    //student+=1; or student-=1; or student*=1; or student/=1;
    student ++; 
    student --;
    int remainder = student % 3;
    std::cout << remainder << '\n' ;
    
    //datatype Conversion
    int x = (double) 3.14;
    int marks = 8;
    int total = 10;
    double n = (marks / (double)total ) * 100; //we need to add (double) because 8/10 =0.8 and it will be 0*100 therefore when we add double 0.8*100.
    std::cout << n << '%' << std::endl;
    return 0;
}