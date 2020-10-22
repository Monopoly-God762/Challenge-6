#include <iostream>
#include <string>
#include <array>
using namespace std;
int diff (string one,string two){
int sum=0;
for (unsigned i=0; i<one.size();i++){
sum+=abs(int(one[i])- int (two[i]));

}

return sum;
}
int main() {
cout<< diff( "cat","dog");
	
	
	return 0;
}
