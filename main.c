#include <iostream>
using namespace std;
#include <Sales_item.h>

int main()
{
    Sales_item book; 
	cout << "enter the sales: " << endl;
	while(cin >> book){
        cout << "ISBN, number of copies sold, total revenue, and average price as followed: "
			<< book << endl; 
		
	}
	return 0; 
}
