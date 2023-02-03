#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x; //weeks
	int y; //cost of classes per weeks
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>x >>y;
	    
	    cout <<(x * y) <<endl;
	}
	
	return 0;
}
