#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int time =0, motion =0, n;
	cin >> n;
	for(int i =0; i < n ; i++)
	{
	    cin >> time;
	    motion =0;
	    for(int j = 1; j <=time; j++)
	    {
	        if(j % 2 == 0)
	        {
	            motion = motion -1;
	        }
	        else
	        {
	            motion = motion +3;
	        }
	    }
	    cout << motion << "\n";
	}
	return 0;
}
